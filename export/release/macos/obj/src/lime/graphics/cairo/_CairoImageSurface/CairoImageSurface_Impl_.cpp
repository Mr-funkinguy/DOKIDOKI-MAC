#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_da604a36baaf9d90_17__new,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","_new",0x1720eff8,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_._new","lime/graphics/cairo/CairoImageSurface.hx",17,0x38340d55)
HX_LOCAL_STACK_FRAME(_hx_pos_da604a36baaf9d90_29_create,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","create",0xbc2e5553,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.create","lime/graphics/cairo/CairoImageSurface.hx",29,0x38340d55)
HX_LOCAL_STACK_FRAME(_hx_pos_da604a36baaf9d90_38_fromImage,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","fromImage",0x22dd6b9a,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.fromImage","lime/graphics/cairo/CairoImageSurface.hx",38,0x38340d55)
HX_LOCAL_STACK_FRAME(_hx_pos_da604a36baaf9d90_48_get_data,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","get_data",0x7a9683ca,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.get_data","lime/graphics/cairo/CairoImageSurface.hx",48,0x38340d55)
HX_LOCAL_STACK_FRAME(_hx_pos_da604a36baaf9d90_57_get_format,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","get_format",0x0b2064d7,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.get_format","lime/graphics/cairo/CairoImageSurface.hx",57,0x38340d55)
HX_LOCAL_STACK_FRAME(_hx_pos_da604a36baaf9d90_66_get_height,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","get_height",0x0fdddd87,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.get_height","lime/graphics/cairo/CairoImageSurface.hx",66,0x38340d55)
HX_LOCAL_STACK_FRAME(_hx_pos_da604a36baaf9d90_75_get_stride,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","get_stride",0x1ec1f5b9,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.get_stride","lime/graphics/cairo/CairoImageSurface.hx",75,0x38340d55)
HX_LOCAL_STACK_FRAME(_hx_pos_da604a36baaf9d90_84_get_width,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","get_width",0xbef77466,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.get_width","lime/graphics/cairo/CairoImageSurface.hx",84,0x38340d55)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoImageSurface{

void CairoImageSurface_Impl__obj::__construct() { }

Dynamic CairoImageSurface_Impl__obj::__CreateEmpty() { return new CairoImageSurface_Impl__obj; }

void *CairoImageSurface_Impl__obj::_hx_vtable = 0;

Dynamic CairoImageSurface_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoImageSurface_Impl__obj > _hx_result = new CairoImageSurface_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoImageSurface_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x75050757;
}

 ::Dynamic CairoImageSurface_Impl__obj::_new(int format,int width,int height){
            	HX_STACKFRAME(&_hx_pos_da604a36baaf9d90_17__new)
HXDLIN(  17)		 ::Dynamic this1 = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_image_surface_create(format,width,height)) );
HXDLIN(  17)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoImageSurface_Impl__obj,_new,return )

 ::Dynamic CairoImageSurface_Impl__obj::create(Float data,int format,int width,int height,int stride){
            	HX_STACKFRAME(&_hx_pos_da604a36baaf9d90_29_create)
HXDLIN(  29)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_image_surface_create_for_data(data,format,width,height,stride)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CairoImageSurface_Impl__obj,create,return )

 ::Dynamic CairoImageSurface_Impl__obj::fromImage( ::lime::graphics::Image image){
            	HX_STACKFRAME(&_hx_pos_da604a36baaf9d90_38_fromImage)
HXDLIN(  38)		Float _hx_tmp = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBuffer(image->get_data()->buffer);
HXDLIN(  38)		int image1 = image->width;
HXDLIN(  38)		int image2 = image->height;
HXDLIN(  38)		return ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::create(_hx_tmp,0,image1,image2,image->buffer->get_stride());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,fromImage,return )

Float CairoImageSurface_Impl__obj::get_data( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_da604a36baaf9d90_48_get_data)
HXDLIN(  48)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_image_surface_get_data(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,get_data,return )

int CairoImageSurface_Impl__obj::get_format( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_da604a36baaf9d90_57_get_format)
HXDLIN(  57)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_image_surface_get_format(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,get_format,return )

int CairoImageSurface_Impl__obj::get_height( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_da604a36baaf9d90_66_get_height)
HXDLIN(  66)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_image_surface_get_height(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,get_height,return )

int CairoImageSurface_Impl__obj::get_stride( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_da604a36baaf9d90_75_get_stride)
HXDLIN(  75)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_image_surface_get_stride(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,get_stride,return )

int CairoImageSurface_Impl__obj::get_width( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_da604a36baaf9d90_84_get_width)
HXDLIN(  84)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_image_surface_get_width(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,get_width,return )


CairoImageSurface_Impl__obj::CairoImageSurface_Impl__obj()
{
}

bool CairoImageSurface_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { outValue = get_data_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromImage") ) { outValue = fromImage_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_width") ) { outValue = get_width_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_format") ) { outValue = get_format_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_height") ) { outValue = get_height_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_stride") ) { outValue = get_stride_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoImageSurface_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CairoImageSurface_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class CairoImageSurface_Impl__obj::__mClass;

static ::String CairoImageSurface_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("create",fc,66,0f,7c),
	HX_("fromImage",91,09,f2,71),
	HX_("get_data",b3,11,1e,c2),
	HX_("get_format",00,ff,15,ee),
	HX_("get_height",b0,77,d3,f2),
	HX_("get_stride",e2,8f,b7,01),
	HX_("get_width",5d,12,0c,0e),
	::String(null())
};

void CairoImageSurface_Impl__obj::__register()
{
	CairoImageSurface_Impl__obj _hx_dummy;
	CairoImageSurface_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_",37,8d,2e,6d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoImageSurface_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoImageSurface_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoImageSurface_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoImageSurface_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoImageSurface_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoImageSurface
