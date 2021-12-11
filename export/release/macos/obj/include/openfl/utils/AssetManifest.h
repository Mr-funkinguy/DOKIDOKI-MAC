#ifndef INCLUDED_openfl_utils_AssetManifest
#define INCLUDED_openfl_utils_AssetManifest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,utils,AssetManifest)
HX_DECLARE_CLASS2(openfl,utils,AssetManifest)

namespace openfl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES AssetManifest_obj : public  ::lime::utils::AssetManifest_obj
{
	public:
		typedef  ::lime::utils::AssetManifest_obj super;
		typedef AssetManifest_obj OBJ_;
		AssetManifest_obj();

	public:
		enum { _hx_ClassId = 0x21882f0a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.utils.AssetManifest")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.utils.AssetManifest"); }
		static ::hx::ObjectPtr< AssetManifest_obj > __new();
		static ::hx::ObjectPtr< AssetManifest_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AssetManifest_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AssetManifest",9f,e1,68,3f); }

		static  ::openfl::utils::AssetManifest fromBytes( ::haxe::io::Bytes bytes,::String rootPath);
		static ::Dynamic fromBytes_dyn();

		static  ::openfl::utils::AssetManifest fromFile(::String path,::String rootPath);
		static ::Dynamic fromFile_dyn();

		static  ::lime::app::Future loadFromBytes( ::haxe::io::Bytes bytes,::String rootPath);
		static ::Dynamic loadFromBytes_dyn();

		static  ::lime::app::Future loadFromFile(::String path,::String rootPath);
		static ::Dynamic loadFromFile_dyn();

		static  ::openfl::utils::AssetManifest parse(::String data,::String rootPath);
		static ::Dynamic parse_dyn();

		static  ::openfl::utils::AssetManifest _hx___fromLimeManifest( ::lime::utils::AssetManifest limeManifest);
		static ::Dynamic _hx___fromLimeManifest_dyn();

		void addBitmapData(::String path,::String id);
		::Dynamic addBitmapData_dyn();

		void addBytes(::String path,::String id);
		::Dynamic addBytes_dyn();

		void addFont(::String name,::String id);
		::Dynamic addFont_dyn();

		void addSound(::Array< ::String > paths,::String id);
		::Dynamic addSound_dyn();

		void addText(::String path,::String id);
		::Dynamic addText_dyn();

};

} // end namespace openfl
} // end namespace utils

#endif /* INCLUDED_openfl_utils_AssetManifest */ 
