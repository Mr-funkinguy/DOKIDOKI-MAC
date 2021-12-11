#include <hxcpp.h>

#ifndef INCLUDED_lime_system__ThreadPool_ThreadPoolMessageType
#include <lime/system/_ThreadPool/ThreadPoolMessageType.h>
#endif
namespace lime{
namespace _hx_system{
namespace _ThreadPool{

::lime::_hx_system::_ThreadPool::ThreadPoolMessageType ThreadPoolMessageType_obj::COMPLETE;

::lime::_hx_system::_ThreadPool::ThreadPoolMessageType ThreadPoolMessageType_obj::ERROR;

::lime::_hx_system::_ThreadPool::ThreadPoolMessageType ThreadPoolMessageType_obj::EXIT;

::lime::_hx_system::_ThreadPool::ThreadPoolMessageType ThreadPoolMessageType_obj::PROGRESS;

::lime::_hx_system::_ThreadPool::ThreadPoolMessageType ThreadPoolMessageType_obj::WORK;

bool ThreadPoolMessageType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("COMPLETE",b9,90,4d,d9)) { outValue = ThreadPoolMessageType_obj::COMPLETE; return true; }
	if (inName==HX_("ERROR",a8,03,18,f1)) { outValue = ThreadPoolMessageType_obj::ERROR; return true; }
	if (inName==HX_("EXIT",1e,bf,de,2d)) { outValue = ThreadPoolMessageType_obj::EXIT; return true; }
	if (inName==HX_("PROGRESS",ad,87,b0,df)) { outValue = ThreadPoolMessageType_obj::PROGRESS; return true; }
	if (inName==HX_("WORK",d1,c9,bd,39)) { outValue = ThreadPoolMessageType_obj::WORK; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ThreadPoolMessageType_obj)

int ThreadPoolMessageType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("COMPLETE",b9,90,4d,d9)) return 0;
	if (inName==HX_("ERROR",a8,03,18,f1)) return 1;
	if (inName==HX_("EXIT",1e,bf,de,2d)) return 2;
	if (inName==HX_("PROGRESS",ad,87,b0,df)) return 3;
	if (inName==HX_("WORK",d1,c9,bd,39)) return 4;
	return super::__FindIndex(inName);
}

int ThreadPoolMessageType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("COMPLETE",b9,90,4d,d9)) return 0;
	if (inName==HX_("ERROR",a8,03,18,f1)) return 0;
	if (inName==HX_("EXIT",1e,bf,de,2d)) return 0;
	if (inName==HX_("PROGRESS",ad,87,b0,df)) return 0;
	if (inName==HX_("WORK",d1,c9,bd,39)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ThreadPoolMessageType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("COMPLETE",b9,90,4d,d9)) return COMPLETE;
	if (inName==HX_("ERROR",a8,03,18,f1)) return ERROR;
	if (inName==HX_("EXIT",1e,bf,de,2d)) return EXIT;
	if (inName==HX_("PROGRESS",ad,87,b0,df)) return PROGRESS;
	if (inName==HX_("WORK",d1,c9,bd,39)) return WORK;
	return super::__Field(inName,inCallProp);
}

static ::String ThreadPoolMessageType_obj_sStaticFields[] = {
	HX_("COMPLETE",b9,90,4d,d9),
	HX_("ERROR",a8,03,18,f1),
	HX_("EXIT",1e,bf,de,2d),
	HX_("PROGRESS",ad,87,b0,df),
	HX_("WORK",d1,c9,bd,39),
	::String(null())
};

::hx::Class ThreadPoolMessageType_obj::__mClass;

Dynamic __Create_ThreadPoolMessageType_obj() { return new ThreadPoolMessageType_obj; }

void ThreadPoolMessageType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("lime.system._ThreadPool.ThreadPoolMessageType",ec,6c,62,b0), ::hx::TCanCast< ThreadPoolMessageType_obj >,ThreadPoolMessageType_obj_sStaticFields,0,
	&__Create_ThreadPoolMessageType_obj, &__Create,
	&super::__SGetClass(), &CreateThreadPoolMessageType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ThreadPoolMessageType_obj::__GetStatic;
}

void ThreadPoolMessageType_obj::__boot()
{
COMPLETE = ::hx::CreateConstEnum< ThreadPoolMessageType_obj >(HX_("COMPLETE",b9,90,4d,d9),0);
ERROR = ::hx::CreateConstEnum< ThreadPoolMessageType_obj >(HX_("ERROR",a8,03,18,f1),1);
EXIT = ::hx::CreateConstEnum< ThreadPoolMessageType_obj >(HX_("EXIT",1e,bf,de,2d),2);
PROGRESS = ::hx::CreateConstEnum< ThreadPoolMessageType_obj >(HX_("PROGRESS",ad,87,b0,df),3);
WORK = ::hx::CreateConstEnum< ThreadPoolMessageType_obj >(HX_("WORK",d1,c9,bd,39),4);
}


} // end namespace lime
} // end namespace system
} // end namespace _ThreadPool