#include <hxcpp.h>

#ifndef INCLUDED_motion_IComponentPath
#include <motion/IComponentPath.h>
#endif
#ifndef INCLUDED_motion_MotionPath
#include <motion/MotionPath.h>
#endif
#ifndef INCLUDED_motion__MotionPath_BezierPath
#include <motion/_MotionPath/BezierPath.h>
#endif
#ifndef INCLUDED_motion__MotionPath_BezierSplinePath
#include <motion/_MotionPath/BezierSplinePath.h>
#endif
#ifndef INCLUDED_motion__MotionPath_ComponentPath
#include <motion/_MotionPath/ComponentPath.h>
#endif
#ifndef INCLUDED_motion__MotionPath_RotationPath
#include <motion/_MotionPath/RotationPath.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ec7a95a666d8fcbd_29_new,"motion.MotionPath","new",0xfdf154c5,"motion.MotionPath.new","motion/MotionPath.hx",29,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_ec7a95a666d8fcbd_50_bezier,"motion.MotionPath","bezier",0xccd588da,"motion.MotionPath.bezier","motion/MotionPath.hx",50,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_ec7a95a666d8fcbd_64_bezierN,"motion.MotionPath","bezierN",0x6e023634,"motion.MotionPath.bezierN","motion/MotionPath.hx",64,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_ec7a95a666d8fcbd_81_bezierSpline,"motion.MotionPath","bezierSpline",0x5f25ab8b,"motion.MotionPath.bezierSpline","motion/MotionPath.hx",81,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_ec7a95a666d8fcbd_100_line,"motion.MotionPath","line",0x33e96bef,"motion.MotionPath.line","motion/MotionPath.hx",100,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_ec7a95a666d8fcbd_112_get_rotation,"motion.MotionPath","get_rotation",0xe7933842,"motion.MotionPath.get_rotation","motion/MotionPath.hx",112,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_ec7a95a666d8fcbd_127_get_x,"motion.MotionPath","get_x",0x54b3ccf4,"motion.MotionPath.get_x","motion/MotionPath.hx",127,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_ec7a95a666d8fcbd_134_get_y,"motion.MotionPath","get_y",0x54b3ccf5,"motion.MotionPath.get_y","motion/MotionPath.hx",134,0x95e57daa)
namespace motion{

void MotionPath_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_ec7a95a666d8fcbd_29_new)
HXLINE(  31)		this->_x =  ::motion::_MotionPath::ComponentPath_obj::__alloc( HX_CTX );
HXLINE(  32)		this->_y =  ::motion::_MotionPath::ComponentPath_obj::__alloc( HX_CTX );
HXLINE(  34)		this->_rotation = null();
            	}

Dynamic MotionPath_obj::__CreateEmpty() { return new MotionPath_obj; }

void *MotionPath_obj::_hx_vtable = 0;

Dynamic MotionPath_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MotionPath_obj > _hx_result = new MotionPath_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MotionPath_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x64bbfe35;
}

 ::motion::MotionPath MotionPath_obj::bezier(Float x,Float y,Float controlX,Float controlY,::hx::Null< Float >  __o_strength){
            		Float strength = __o_strength.Default(1);
            	HX_STACKFRAME(&_hx_pos_ec7a95a666d8fcbd_50_bezier)
HXDLIN(  50)		return this->bezierN(x,y,::Array_obj< Float >::__new(1)->init(0,controlX),::Array_obj< Float >::__new(1)->init(0,controlY),strength);
            	}


HX_DEFINE_DYNAMIC_FUNC5(MotionPath_obj,bezier,return )

 ::motion::MotionPath MotionPath_obj::bezierN(Float x,Float y,::Array< Float > controlX,::Array< Float > controlY,::hx::Null< Float >  __o_strength){
            		Float strength = __o_strength.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_ec7a95a666d8fcbd_64_bezierN)
HXLINE(  66)		 ::motion::_MotionPath::ComponentPath _hx_tmp = this->_x;
HXDLIN(  66)		_hx_tmp->addPath( ::motion::_MotionPath::BezierPath_obj::__alloc( HX_CTX ,x,controlX,strength));
HXLINE(  67)		 ::motion::_MotionPath::ComponentPath _hx_tmp1 = this->_y;
HXDLIN(  67)		_hx_tmp1->addPath( ::motion::_MotionPath::BezierPath_obj::__alloc( HX_CTX ,y,controlY,strength));
HXLINE(  69)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC5(MotionPath_obj,bezierN,return )

 ::motion::MotionPath MotionPath_obj::bezierSpline(::Array< Float > x,::Array< Float > y,::hx::Null< Float >  __o_strength){
            		Float strength = __o_strength.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_ec7a95a666d8fcbd_81_bezierSpline)
HXLINE(  83)		 ::motion::_MotionPath::ComponentPath _hx_tmp = this->_x;
HXDLIN(  83)		_hx_tmp->addPath( ::motion::_MotionPath::BezierSplinePath_obj::__alloc( HX_CTX ,x,strength));
HXLINE(  84)		 ::motion::_MotionPath::ComponentPath _hx_tmp1 = this->_y;
HXDLIN(  84)		_hx_tmp1->addPath( ::motion::_MotionPath::BezierSplinePath_obj::__alloc( HX_CTX ,y,strength));
HXLINE(  86)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(MotionPath_obj,bezierSpline,return )

 ::motion::MotionPath MotionPath_obj::line(Float x,Float y,::hx::Null< Float >  __o_strength){
            		Float strength = __o_strength.Default(1);
            	HX_STACKFRAME(&_hx_pos_ec7a95a666d8fcbd_100_line)
HXDLIN( 100)		return this->bezierN(x,y,::Array_obj< Float >::__new(0),::Array_obj< Float >::__new(0),strength);
            	}


HX_DEFINE_DYNAMIC_FUNC3(MotionPath_obj,line,return )

 ::motion::_MotionPath::RotationPath MotionPath_obj::get_rotation(){
            	HX_GC_STACKFRAME(&_hx_pos_ec7a95a666d8fcbd_112_get_rotation)
HXLINE( 114)		if (::hx::IsNull( this->_rotation )) {
HXLINE( 116)			this->_rotation =  ::motion::_MotionPath::RotationPath_obj::__alloc( HX_CTX ,this->_x,this->_y);
            		}
HXLINE( 120)		return this->_rotation;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MotionPath_obj,get_rotation,return )

::Dynamic MotionPath_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_ec7a95a666d8fcbd_127_get_x)
HXDLIN( 127)		return this->_x;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MotionPath_obj,get_x,return )

::Dynamic MotionPath_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_ec7a95a666d8fcbd_134_get_y)
HXDLIN( 134)		return this->_y;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MotionPath_obj,get_y,return )


::hx::ObjectPtr< MotionPath_obj > MotionPath_obj::__new() {
	::hx::ObjectPtr< MotionPath_obj > __this = new MotionPath_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MotionPath_obj > MotionPath_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MotionPath_obj *__this = (MotionPath_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MotionPath_obj), true, "motion.MotionPath"));
	*(void **)__this = MotionPath_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MotionPath_obj::MotionPath_obj()
{
}

void MotionPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MotionPath);
	HX_MARK_MEMBER_NAME(_rotation,"_rotation");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_END_CLASS();
}

void MotionPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_rotation,"_rotation");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_y,"_y");
}

::hx::Val MotionPath_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_x() ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_y() ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { return ::hx::Val( _x ); }
		if (HX_FIELD_EQ(inName,"_y") ) { return ::hx::Val( _y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return ::hx::Val( line_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return ::hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return ::hx::Val( get_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bezier") ) { return ::hx::Val( bezier_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bezierN") ) { return ::hx::Val( bezierN_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rotation() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_rotation") ) { return ::hx::Val( _rotation ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bezierSpline") ) { return ::hx::Val( bezierSpline_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return ::hx::Val( get_rotation_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MotionPath_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast<  ::motion::_MotionPath::ComponentPath >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast<  ::motion::_MotionPath::ComponentPath >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_rotation") ) { _rotation=inValue.Cast<  ::motion::_MotionPath::RotationPath >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MotionPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("rotation",3e,3d,86,08));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("_rotation",9d,34,1c,50));
	outFields->push(HX_("_x",39,53,00,00));
	outFields->push(HX_("_y",3a,53,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MotionPath_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::motion::_MotionPath::RotationPath */ ,(int)offsetof(MotionPath_obj,_rotation),HX_("_rotation",9d,34,1c,50)},
	{::hx::fsObject /*  ::motion::_MotionPath::ComponentPath */ ,(int)offsetof(MotionPath_obj,_x),HX_("_x",39,53,00,00)},
	{::hx::fsObject /*  ::motion::_MotionPath::ComponentPath */ ,(int)offsetof(MotionPath_obj,_y),HX_("_y",3a,53,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MotionPath_obj_sStaticStorageInfo = 0;
#endif

static ::String MotionPath_obj_sMemberFields[] = {
	HX_("_rotation",9d,34,1c,50),
	HX_("_x",39,53,00,00),
	HX_("_y",3a,53,00,00),
	HX_("bezier",1f,00,66,a7),
	HX_("bezierN",4f,1b,da,d1),
	HX_("bezierSpline",90,64,32,35),
	HX_("line",f4,17,b3,47),
	HX_("get_rotation",47,f1,9f,bd),
	HX_("get_x",4f,a5,60,91),
	HX_("get_y",50,a5,60,91),
	::String(null()) };

::hx::Class MotionPath_obj::__mClass;

void MotionPath_obj::__register()
{
	MotionPath_obj _hx_dummy;
	MotionPath_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.MotionPath",53,8e,94,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MotionPath_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MotionPath_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MotionPath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MotionPath_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
