#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1e7711c525853e66_16__new,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","_new",0xc71fdbd0,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_._new","lime/graphics/cairo/CairoPattern.hx",16,0x9806f3a5)
HX_LOCAL_STACK_FRAME(_hx_pos_1e7711c525853e66_24_addColorStopRGB,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","addColorStopRGB",0xfbbadaba,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.addColorStopRGB","lime/graphics/cairo/CairoPattern.hx",24,0x9806f3a5)
HX_LOCAL_STACK_FRAME(_hx_pos_1e7711c525853e66_31_addColorStopRGBA,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","addColorStopRGBA",0x47c48847,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.addColorStopRGBA","lime/graphics/cairo/CairoPattern.hx",31,0x9806f3a5)
HX_LOCAL_STACK_FRAME(_hx_pos_1e7711c525853e66_38_createForSurface,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createForSurface",0x941f592f,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createForSurface","lime/graphics/cairo/CairoPattern.hx",38,0x9806f3a5)
HX_LOCAL_STACK_FRAME(_hx_pos_1e7711c525853e66_47_createLinear,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createLinear",0xc4d8df70,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createLinear","lime/graphics/cairo/CairoPattern.hx",47,0x9806f3a5)
HX_LOCAL_STACK_FRAME(_hx_pos_1e7711c525853e66_56_createRadial,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createRadial",0x892f4c6a,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createRadial","lime/graphics/cairo/CairoPattern.hx",56,0x9806f3a5)
HX_LOCAL_STACK_FRAME(_hx_pos_1e7711c525853e66_65_createRGB,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createRGB",0xccf31ca2,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createRGB","lime/graphics/cairo/CairoPattern.hx",65,0x9806f3a5)
HX_LOCAL_STACK_FRAME(_hx_pos_1e7711c525853e66_74_createRGBA,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createRGBA",0x87c5f15f,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createRGBA","lime/graphics/cairo/CairoPattern.hx",74,0x9806f3a5)
HX_LOCAL_STACK_FRAME(_hx_pos_1e7711c525853e66_84_get_colorStopCount,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","get_colorStopCount",0x1c959302,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.get_colorStopCount","lime/graphics/cairo/CairoPattern.hx",84,0x9806f3a5)
HX_LOCAL_STACK_FRAME(_hx_pos_1e7711c525853e66_93_get_extend,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","get_extend",0xe14a0552,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.get_extend","lime/graphics/cairo/CairoPattern.hx",93,0x9806f3a5)
HX_LOCAL_STACK_FRAME(_hx_pos_1e7711c525853e66_100_set_extend,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","set_extend",0xe4c7a3c6,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.set_extend","lime/graphics/cairo/CairoPattern.hx",100,0x9806f3a5)
HX_LOCAL_STACK_FRAME(_hx_pos_1e7711c525853e66_111_get_filter,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","get_filter",0x9f645330,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.get_filter","lime/graphics/cairo/CairoPattern.hx",111,0x9806f3a5)
HX_LOCAL_STACK_FRAME(_hx_pos_1e7711c525853e66_118_set_filter,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","set_filter",0xa2e1f1a4,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.set_filter","lime/graphics/cairo/CairoPattern.hx",118,0x9806f3a5)
HX_LOCAL_STACK_FRAME(_hx_pos_1e7711c525853e66_127_get_matrix,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","get_matrix",0xd5f769b9,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.get_matrix","lime/graphics/cairo/CairoPattern.hx",127,0x9806f3a5)
HX_LOCAL_STACK_FRAME(_hx_pos_1e7711c525853e66_141_set_matrix,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","set_matrix",0xd975082d,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.set_matrix","lime/graphics/cairo/CairoPattern.hx",141,0x9806f3a5)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoPattern{

void CairoPattern_Impl__obj::__construct() { }

Dynamic CairoPattern_Impl__obj::__CreateEmpty() { return new CairoPattern_Impl__obj; }

void *CairoPattern_Impl__obj::_hx_vtable = 0;

Dynamic CairoPattern_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoPattern_Impl__obj > _hx_result = new CairoPattern_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoPattern_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1b81e167;
}

 ::Dynamic CairoPattern_Impl__obj::_new( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_1e7711c525853e66_16__new)
HXDLIN(  16)		 ::Dynamic this1 = handle;
HXDLIN(  16)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,_new,return )

void CairoPattern_Impl__obj::addColorStopRGB( ::Dynamic this1,Float offset,Float r,Float g,Float b){
            	HX_STACKFRAME(&_hx_pos_1e7711c525853e66_24_addColorStopRGB)
HXDLIN(  24)		::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_pattern_add_color_stop_rgb(::hx::DynamicPtr(this1),offset,r,g,b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CairoPattern_Impl__obj,addColorStopRGB,(void))

void CairoPattern_Impl__obj::addColorStopRGBA( ::Dynamic this1,Float offset,Float r,Float g,Float b,Float a){
            	HX_STACKFRAME(&_hx_pos_1e7711c525853e66_31_addColorStopRGBA)
HXDLIN(  31)		::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_pattern_add_color_stop_rgba(::hx::DynamicPtr(this1),offset,r,g,b,a);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoPattern_Impl__obj,addColorStopRGBA,(void))

 ::Dynamic CairoPattern_Impl__obj::createForSurface( ::Dynamic surface){
            	HX_STACKFRAME(&_hx_pos_1e7711c525853e66_38_createForSurface)
HXDLIN(  38)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_pattern_create_for_surface(::hx::DynamicPtr(surface))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,createForSurface,return )

 ::Dynamic CairoPattern_Impl__obj::createLinear(Float x0,Float y0,Float x1,Float y1){
            	HX_STACKFRAME(&_hx_pos_1e7711c525853e66_47_createLinear)
HXDLIN(  47)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_pattern_create_linear(x0,y0,x1,y1)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoPattern_Impl__obj,createLinear,return )

 ::Dynamic CairoPattern_Impl__obj::createRadial(Float cx0,Float cy0,Float radius0,Float cx1,Float cy1,Float radius1){
            	HX_STACKFRAME(&_hx_pos_1e7711c525853e66_56_createRadial)
HXDLIN(  56)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_pattern_create_radial(cx0,cy0,radius0,cx1,cy1,radius1)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoPattern_Impl__obj,createRadial,return )

 ::Dynamic CairoPattern_Impl__obj::createRGB(Float r,Float g,Float b){
            	HX_STACKFRAME(&_hx_pos_1e7711c525853e66_65_createRGB)
HXDLIN(  65)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_pattern_create_rgb(r,g,b)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoPattern_Impl__obj,createRGB,return )

 ::Dynamic CairoPattern_Impl__obj::createRGBA(Float r,Float g,Float b,Float a){
            	HX_STACKFRAME(&_hx_pos_1e7711c525853e66_74_createRGBA)
HXDLIN(  74)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_pattern_create_rgba(r,g,b,a)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoPattern_Impl__obj,createRGBA,return )

int CairoPattern_Impl__obj::get_colorStopCount( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_1e7711c525853e66_84_get_colorStopCount)
HXDLIN(  84)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_pattern_get_color_stop_count(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,get_colorStopCount,return )

int CairoPattern_Impl__obj::get_extend( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_1e7711c525853e66_93_get_extend)
HXDLIN(  93)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_pattern_get_extend(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,get_extend,return )

int CairoPattern_Impl__obj::set_extend( ::Dynamic this1,int value){
            	HX_STACKFRAME(&_hx_pos_1e7711c525853e66_100_set_extend)
HXLINE( 102)		::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_pattern_set_extend(::hx::DynamicPtr(this1),value);
HXLINE( 105)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoPattern_Impl__obj,set_extend,return )

int CairoPattern_Impl__obj::get_filter( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_1e7711c525853e66_111_get_filter)
HXDLIN( 111)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_pattern_get_filter(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,get_filter,return )

int CairoPattern_Impl__obj::set_filter( ::Dynamic this1,int value){
            	HX_STACKFRAME(&_hx_pos_1e7711c525853e66_118_set_filter)
HXLINE( 120)		::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_pattern_set_filter(::hx::DynamicPtr(this1),value);
HXLINE( 123)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoPattern_Impl__obj,set_filter,return )

 ::lime::math::Matrix3 CairoPattern_Impl__obj::get_matrix( ::Dynamic this1){
            	HX_GC_STACKFRAME(&_hx_pos_1e7711c525853e66_127_get_matrix)
HXLINE( 132)		 ::Dynamic m = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_pattern_get_matrix(::hx::DynamicPtr(this1))) );
HXLINE( 133)		return  ::lime::math::Matrix3_obj::__alloc( HX_CTX ,m->__Field(HX_("a",61,00,00,00),::hx::paccDynamic),m->__Field(HX_("b",62,00,00,00),::hx::paccDynamic),m->__Field(HX_("c",63,00,00,00),::hx::paccDynamic),m->__Field(HX_("d",64,00,00,00),::hx::paccDynamic),m->__Field(HX_("tx",84,65,00,00),::hx::paccDynamic),m->__Field(HX_("ty",85,65,00,00),::hx::paccDynamic));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,get_matrix,return )

 ::lime::math::Matrix3 CairoPattern_Impl__obj::set_matrix( ::Dynamic this1, ::lime::math::Matrix3 value){
            	HX_STACKFRAME(&_hx_pos_1e7711c525853e66_141_set_matrix)
HXLINE( 143)		::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_pattern_set_matrix(::hx::DynamicPtr(this1),::hx::DynamicPtr(value));
HXLINE( 146)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoPattern_Impl__obj,set_matrix,return )


CairoPattern_Impl__obj::CairoPattern_Impl__obj()
{
}

bool CairoPattern_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"createRGB") ) { outValue = createRGB_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createRGBA") ) { outValue = createRGBA_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_extend") ) { outValue = get_extend_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_extend") ) { outValue = set_extend_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_filter") ) { outValue = get_filter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_filter") ) { outValue = set_filter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_matrix") ) { outValue = get_matrix_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { outValue = set_matrix_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createLinear") ) { outValue = createLinear_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createRadial") ) { outValue = createRadial_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addColorStopRGB") ) { outValue = addColorStopRGB_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addColorStopRGBA") ) { outValue = addColorStopRGBA_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createForSurface") ) { outValue = createForSurface_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_colorStopCount") ) { outValue = get_colorStopCount_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoPattern_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CairoPattern_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class CairoPattern_Impl__obj::__mClass;

static ::String CairoPattern_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("addColorStopRGB",c9,58,f1,f2),
	HX_("addColorStopRGBA",58,57,3c,a0),
	HX_("createForSurface",40,28,97,ec),
	HX_("createLinear",01,92,f5,0e),
	HX_("createRadial",fb,fe,4b,d3),
	HX_("createRGB",71,95,e4,49),
	HX_("createRGBA",b0,2d,1e,5e),
	HX_("get_colorStopCount",53,08,ec,5d),
	HX_("get_extend",a3,41,a2,b7),
	HX_("set_extend",17,e0,1f,bb),
	HX_("get_filter",81,8f,bc,75),
	HX_("set_filter",f5,2d,3a,79),
	HX_("get_matrix",0a,a6,4f,ac),
	HX_("set_matrix",7e,44,cd,af),
	::String(null())
};

void CairoPattern_Impl__obj::__register()
{
	CairoPattern_Impl__obj _hx_dummy;
	CairoPattern_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_",5f,30,47,b0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoPattern_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoPattern_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoPattern_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoPattern_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoPattern_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoPattern