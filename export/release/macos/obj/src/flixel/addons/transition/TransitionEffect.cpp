#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionEffect
#include <flixel/addons/transition/TransitionEffect.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_04bb584d68aa991f_13_new,"flixel.addons.transition.TransitionEffect","new",0x23846fe8,"flixel.addons.transition.TransitionEffect.new","flixel/addons/transition/TransitionEffect.hx",13,0x3e20d347)
HX_LOCAL_STACK_FRAME(_hx_pos_04bb584d68aa991f_31_destroy,"flixel.addons.transition.TransitionEffect","destroy",0xa4713082,"flixel.addons.transition.TransitionEffect.destroy","flixel/addons/transition/TransitionEffect.hx",31,0x3e20d347)
HX_LOCAL_STACK_FRAME(_hx_pos_04bb584d68aa991f_37_start,"flixel.addons.transition.TransitionEffect","start",0x4c4905ea,"flixel.addons.transition.TransitionEffect.start","flixel/addons/transition/TransitionEffect.hx",37,0x3e20d347)
HX_LOCAL_STACK_FRAME(_hx_pos_04bb584d68aa991f_51_setStatus,"flixel.addons.transition.TransitionEffect","setStatus",0xf8fc51fc,"flixel.addons.transition.TransitionEffect.setStatus","flixel/addons/transition/TransitionEffect.hx",51,0x3e20d347)
HX_LOCAL_STACK_FRAME(_hx_pos_04bb584d68aa991f_57_delayThenFinish,"flixel.addons.transition.TransitionEffect","delayThenFinish",0xfca603fb,"flixel.addons.transition.TransitionEffect.delayThenFinish","flixel/addons/transition/TransitionEffect.hx",57,0x3e20d347)
HX_LOCAL_STACK_FRAME(_hx_pos_04bb584d68aa991f_61_onFinish,"flixel.addons.transition.TransitionEffect","onFinish",0xd3e44a4a,"flixel.addons.transition.TransitionEffect.onFinish","flixel/addons/transition/TransitionEffect.hx",61,0x3e20d347)
namespace flixel{
namespace addons{
namespace transition{

void TransitionEffect_obj::__construct( ::flixel::addons::transition::TransitionData data){
            	HX_STACKFRAME(&_hx_pos_04bb584d68aa991f_13_new)
HXLINE(  20)		this->_finalDelayTime = ((Float)0.0);
HXLINE(  18)		this->_started = false;
HXLINE(  16)		this->finished = false;
HXLINE(  26)		this->_data = data;
HXLINE(  27)		super::__construct(null(),null(),null());
            	}

Dynamic TransitionEffect_obj::__CreateEmpty() { return new TransitionEffect_obj; }

void *TransitionEffect_obj::_hx_vtable = 0;

Dynamic TransitionEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TransitionEffect_obj > _hx_result = new TransitionEffect_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TransitionEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655 || inClassId==(int)0x7fcf2fe2;
	}
}

void TransitionEffect_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_04bb584d68aa991f_31_destroy)
HXLINE(  32)		this->super::destroy();
HXLINE(  33)		this->finishCallback = null();
            	}


void TransitionEffect_obj::start(int NewStatus){
            	HX_STACKFRAME(&_hx_pos_04bb584d68aa991f_37_start)
HXLINE(  38)		this->_started = true;
HXLINE(  40)		if ((NewStatus == 0)) {
HXLINE(  42)			this->_endStatus = 3;
            		}
            		else {
HXLINE(  46)			this->_endStatus = 2;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TransitionEffect_obj,start,(void))

void TransitionEffect_obj::setStatus(int NewStatus){
            	HX_STACKFRAME(&_hx_pos_04bb584d68aa991f_51_setStatus)
            	}


HX_DEFINE_DYNAMIC_FUNC1(TransitionEffect_obj,setStatus,(void))

void TransitionEffect_obj::delayThenFinish(){
            	HX_GC_STACKFRAME(&_hx_pos_04bb584d68aa991f_57_delayThenFinish)
HXDLIN(  57)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(this->_finalDelayTime,this->onFinish_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(TransitionEffect_obj,delayThenFinish,(void))

void TransitionEffect_obj::onFinish( ::flixel::util::FlxTimer f){
            	HX_STACKFRAME(&_hx_pos_04bb584d68aa991f_61_onFinish)
HXLINE(  62)		this->finished = true;
HXLINE(  63)		if (::hx::IsNotNull( this->finishCallback )) {
HXLINE(  65)			this->finishCallback();
HXLINE(  66)			this->finishCallback = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TransitionEffect_obj,onFinish,(void))


::hx::ObjectPtr< TransitionEffect_obj > TransitionEffect_obj::__new( ::flixel::addons::transition::TransitionData data) {
	::hx::ObjectPtr< TransitionEffect_obj > __this = new TransitionEffect_obj();
	__this->__construct(data);
	return __this;
}

::hx::ObjectPtr< TransitionEffect_obj > TransitionEffect_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData data) {
	TransitionEffect_obj *__this = (TransitionEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TransitionEffect_obj), true, "flixel.addons.transition.TransitionEffect"));
	*(void **)__this = TransitionEffect_obj::_hx_vtable;
	__this->__construct(data);
	return __this;
}

TransitionEffect_obj::TransitionEffect_obj()
{
}

void TransitionEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TransitionEffect);
	HX_MARK_MEMBER_NAME(finishCallback,"finishCallback");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(_started,"_started");
	HX_MARK_MEMBER_NAME(_endStatus,"_endStatus");
	HX_MARK_MEMBER_NAME(_finalDelayTime,"_finalDelayTime");
	HX_MARK_MEMBER_NAME(_data,"_data");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TransitionEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(finishCallback,"finishCallback");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(_started,"_started");
	HX_VISIT_MEMBER_NAME(_endStatus,"_endStatus");
	HX_VISIT_MEMBER_NAME(_finalDelayTime,"_finalDelayTime");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TransitionEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return ::hx::Val( _data ); }
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return ::hx::Val( finished ); }
		if (HX_FIELD_EQ(inName,"_started") ) { return ::hx::Val( _started ); }
		if (HX_FIELD_EQ(inName,"onFinish") ) { return ::hx::Val( onFinish_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setStatus") ) { return ::hx::Val( setStatus_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_endStatus") ) { return ::hx::Val( _endStatus ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { return ::hx::Val( finishCallback ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_finalDelayTime") ) { return ::hx::Val( _finalDelayTime ); }
		if (HX_FIELD_EQ(inName,"delayThenFinish") ) { return ::hx::Val( delayThenFinish_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TransitionEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast<  ::flixel::addons::transition::TransitionData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_started") ) { _started=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_endStatus") ) { _endStatus=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { finishCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_finalDelayTime") ) { _finalDelayTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TransitionEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("finished",72,93,0e,95));
	outFields->push(HX_("_started",c2,82,d3,6e));
	outFields->push(HX_("_endStatus",2e,b1,80,a1));
	outFields->push(HX_("_finalDelayTime",79,77,5a,7a));
	outFields->push(HX_("_data",09,72,74,f5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TransitionEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TransitionEffect_obj,finishCallback),HX_("finishCallback",38,a1,bc,b4)},
	{::hx::fsBool,(int)offsetof(TransitionEffect_obj,finished),HX_("finished",72,93,0e,95)},
	{::hx::fsBool,(int)offsetof(TransitionEffect_obj,_started),HX_("_started",c2,82,d3,6e)},
	{::hx::fsInt,(int)offsetof(TransitionEffect_obj,_endStatus),HX_("_endStatus",2e,b1,80,a1)},
	{::hx::fsFloat,(int)offsetof(TransitionEffect_obj,_finalDelayTime),HX_("_finalDelayTime",79,77,5a,7a)},
	{::hx::fsObject /*  ::flixel::addons::transition::TransitionData */ ,(int)offsetof(TransitionEffect_obj,_data),HX_("_data",09,72,74,f5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TransitionEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String TransitionEffect_obj_sMemberFields[] = {
	HX_("finishCallback",38,a1,bc,b4),
	HX_("finished",72,93,0e,95),
	HX_("_started",c2,82,d3,6e),
	HX_("_endStatus",2e,b1,80,a1),
	HX_("_finalDelayTime",79,77,5a,7a),
	HX_("_data",09,72,74,f5),
	HX_("destroy",fa,2c,86,24),
	HX_("start",62,74,0b,84),
	HX_("setStatus",74,5c,a3,65),
	HX_("delayThenFinish",73,38,40,35),
	HX_("onFinish",d2,36,2c,66),
	::String(null()) };

::hx::Class TransitionEffect_obj::__mClass;

void TransitionEffect_obj::__register()
{
	TransitionEffect_obj _hx_dummy;
	TransitionEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.transition.TransitionEffect",f6,9b,4c,2e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TransitionEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TransitionEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TransitionEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TransitionEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace transition
