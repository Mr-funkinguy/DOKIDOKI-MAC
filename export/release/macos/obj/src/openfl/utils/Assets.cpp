#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_openfl_display_BitmapData
#include <lime/app/Promise_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_lime_app_Promise_openfl_display_MovieClip
#include <lime/app/Promise_openfl_display_MovieClip.h>
#endif
#ifndef INCLUDED_lime_app_Promise_openfl_media_Sound
#include <lime/app/Promise_openfl_media_Sound.h>
#endif
#ifndef INCLUDED_lime_app_Promise_openfl_text_Font
#include <lime/app/Promise_openfl_text_Font.h>
#endif
#ifndef INCLUDED_lime_app_Promise_openfl_utils_ByteArray
#include <lime/app/Promise_openfl_utils_ByteArray.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetCache
#include <openfl/utils/AssetCache.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_45_addEventListener,"openfl.utils.Assets","addEventListener",0xdf923d5d,"openfl.utils.Assets.addEventListener","openfl/utils/Assets.hx",45,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_58_dispatchEvent,"openfl.utils.Assets","dispatchEvent",0xec96fb70,"openfl.utils.Assets.dispatchEvent","openfl/utils/Assets.hx",58,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_70_exists,"openfl.utils.Assets","exists",0x4d6bbb6c,"openfl.utils.Assets.exists","openfl/utils/Assets.hx",70,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_84_getBitmapData,"openfl.utils.Assets","getBitmapData",0xb665465f,"openfl.utils.Assets.getBitmapData","openfl/utils/Assets.hx",84,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_127_getBytes,"openfl.utils.Assets","getBytes",0xdb493985,"openfl.utils.Assets.getBytes","openfl/utils/Assets.hx",127,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_141_getFont,"openfl.utils.Assets","getFont",0x62e14df5,"openfl.utils.Assets.getFont","openfl/utils/Assets.hx",141,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_174_getLibrary,"openfl.utils.Assets","getLibrary",0x10a35295,"openfl.utils.Assets.getLibrary","openfl/utils/Assets.hx",174,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_187_getMovieClip,"openfl.utils.Assets","getMovieClip",0xfd23c8ba,"openfl.utils.Assets.getMovieClip","openfl/utils/Assets.hx",187,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_228_getMusic,"openfl.utils.Assets","getMusic",0x2e0c01bf,"openfl.utils.Assets.getMusic","openfl/utils/Assets.hx",228,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_240_getPath,"openfl.utils.Assets","getPath",0x6972d5cb,"openfl.utils.Assets.getPath","openfl/utils/Assets.hx",240,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_254_getSound,"openfl.utils.Assets","getSound",0x9e7dbde9,"openfl.utils.Assets.getSound","openfl/utils/Assets.hx",254,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_297_getText,"openfl.utils.Assets","getText",0x6c1abcd3,"openfl.utils.Assets.getText","openfl/utils/Assets.hx",297,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_305_hasEventListener,"openfl.utils.Assets","hasEventListener",0xfb186084,"openfl.utils.Assets.hasEventListener","openfl/utils/Assets.hx",305,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_311_hasLibrary,"openfl.utils.Assets","hasLibrary",0x4bf5b451,"openfl.utils.Assets.hasLibrary","openfl/utils/Assets.hx",311,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_325_isLocal,"openfl.utils.Assets","isLocal",0x6214ad91,"openfl.utils.Assets.isLocal","openfl/utils/Assets.hx",325,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_372_isValidBitmapData,"openfl.utils.Assets","isValidBitmapData",0x6121917b,"openfl.utils.Assets.isValidBitmapData","openfl/utils/Assets.hx",372,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_382_isValidSound,"openfl.utils.Assets","isValidSound",0x76dd484d,"openfl.utils.Assets.isValidSound","openfl/utils/Assets.hx",382,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_397_list,"openfl.utils.Assets","list",0xcc5935ee,"openfl.utils.Assets.list","openfl/utils/Assets.hx",397,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_430_loadBitmapData,"openfl.utils.Assets","loadBitmapData",0x102d6d0f,"openfl.utils.Assets.loadBitmapData","openfl/utils/Assets.hx",430,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_411_loadBitmapData,"openfl.utils.Assets","loadBitmapData",0x102d6d0f,"openfl.utils.Assets.loadBitmapData","openfl/utils/Assets.hx",411,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_469_loadBytes,"openfl.utils.Assets","loadBytes",0x39d290d5,"openfl.utils.Assets.loadBytes","openfl/utils/Assets.hx",469,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_470_loadBytes,"openfl.utils.Assets","loadBytes",0x39d290d5,"openfl.utils.Assets.loadBytes","openfl/utils/Assets.hx",470,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_471_loadBytes,"openfl.utils.Assets","loadBytes",0x39d290d5,"openfl.utils.Assets.loadBytes","openfl/utils/Assets.hx",471,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_464_loadBytes,"openfl.utils.Assets","loadBytes",0x39d290d5,"openfl.utils.Assets.loadBytes","openfl/utils/Assets.hx",464,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_501_loadFont,"openfl.utils.Assets","loadFont",0x723a50a5,"openfl.utils.Assets.loadFont","openfl/utils/Assets.hx",501,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_487_loadFont,"openfl.utils.Assets","loadFont",0x723a50a5,"openfl.utils.Assets.loadFont","openfl/utils/Assets.hx",487,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_534_loadLibrary,"openfl.utils.Assets","loadLibrary",0x25ad1de5,"openfl.utils.Assets.loadLibrary","openfl/utils/Assets.hx",534,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_533_loadLibrary,"openfl.utils.Assets","loadLibrary",0x25ad1de5,"openfl.utils.Assets.loadLibrary","openfl/utils/Assets.hx",533,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_576_loadMusic,"openfl.utils.Assets","loadMusic",0x8c95590f,"openfl.utils.Assets.loadMusic","openfl/utils/Assets.hx",576,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_566_loadMusic,"openfl.utils.Assets","loadMusic",0x8c95590f,"openfl.utils.Assets.loadMusic","openfl/utils/Assets.hx",566,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_616_loadMovieClip,"openfl.utils.Assets","loadMovieClip",0xc0b3080a,"openfl.utils.Assets.loadMovieClip","openfl/utils/Assets.hx",616,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_667_loadSound,"openfl.utils.Assets","loadSound",0xfd071539,"openfl.utils.Assets.loadSound","openfl/utils/Assets.hx",667,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_658_loadSound,"openfl.utils.Assets","loadSound",0xfd071539,"openfl.utils.Assets.loadSound","openfl/utils/Assets.hx",658,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_703_loadText,"openfl.utils.Assets","loadText",0x7b73bf83,"openfl.utils.Assets.loadText","openfl/utils/Assets.hx",703,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_720_registerLibrary,"openfl.utils.Assets","registerLibrary",0xb100bb48,"openfl.utils.Assets.registerLibrary","openfl/utils/Assets.hx",720,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_726_removeEventListener,"openfl.utils.Assets","removeEventListener",0xbaaab03a,"openfl.utils.Assets.removeEventListener","openfl/utils/Assets.hx",726,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_731_resolveClass,"openfl.utils.Assets","resolveClass",0x568fe73c,"openfl.utils.Assets.resolveClass","openfl/utils/Assets.hx",731,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_735_resolveEnum,"openfl.utils.Assets","resolveEnum",0xf3f0c87d,"openfl.utils.Assets.resolveEnum","openfl/utils/Assets.hx",735,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_751_unloadLibrary,"openfl.utils.Assets","unloadLibrary",0x577a902c,"openfl.utils.Assets.unloadLibrary","openfl/utils/Assets.hx",751,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_758_LimeAssets_onChange,"openfl.utils.Assets","LimeAssets_onChange",0xfa955f26,"openfl.utils.Assets.LimeAssets_onChange","openfl/utils/Assets.hx",758,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_41_boot,"openfl.utils.Assets","boot",0xc5c19dc2,"openfl.utils.Assets.boot","openfl/utils/Assets.hx",41,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_42_boot,"openfl.utils.Assets","boot",0xc5c19dc2,"openfl.utils.Assets.boot","openfl/utils/Assets.hx",42,0x4e64919e)
namespace openfl{
namespace utils{

void Assets_obj::__construct() { }

Dynamic Assets_obj::__CreateEmpty() { return new Assets_obj; }

void *Assets_obj::_hx_vtable = 0;

Dynamic Assets_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Assets_obj > _hx_result = new Assets_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Assets_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1c1fcb84;
}

::Dynamic Assets_obj::cache;

 ::openfl::events::EventDispatcher Assets_obj::dispatcher;

void Assets_obj::addEventListener(::String type, ::Dynamic listener,::hx::Null< bool >  __o_useCapture,::hx::Null< int >  __o_priority,::hx::Null< bool >  __o_useWeakReference){
            		bool useCapture = __o_useCapture.Default(false);
            		int priority = __o_priority.Default(0);
            		bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_45_addEventListener)
HXLINE(  47)		if (!(::lime::utils::Assets_obj::onChange->has(::openfl::utils::Assets_obj::LimeAssets_onChange_dyn()))) {
HXLINE(  49)			::lime::utils::Assets_obj::onChange->add(::openfl::utils::Assets_obj::LimeAssets_onChange_dyn(),null(),null());
            		}
HXLINE(  53)		::openfl::utils::Assets_obj::dispatcher->addEventListener(type,listener,useCapture,priority,useWeakReference);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Assets_obj,addEventListener,(void))

bool Assets_obj::dispatchEvent( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_58_dispatchEvent)
HXDLIN(  58)		return ::openfl::utils::Assets_obj::dispatcher->dispatchEvent(event);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,dispatchEvent,return )

bool Assets_obj::exists(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_70_exists)
HXDLIN(  70)		return ::lime::utils::Assets_obj::exists(id,type);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

 ::openfl::display::BitmapData Assets_obj::getBitmapData(::String id,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_84_getBitmapData)
HXLINE(  86)		bool _hx_tmp;
HXDLIN(  86)		bool _hx_tmp1;
HXDLIN(  86)		if (useCache) {
HXLINE(  86)			_hx_tmp1 = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            		}
            		else {
HXLINE(  86)			_hx_tmp1 = false;
            		}
HXDLIN(  86)		if (_hx_tmp1) {
HXLINE(  86)			_hx_tmp = ::openfl::utils::IAssetCache_obj::hasBitmapData(::openfl::utils::Assets_obj::cache,id);
            		}
            		else {
HXLINE(  86)			_hx_tmp = false;
            		}
HXDLIN(  86)		if (_hx_tmp) {
HXLINE(  88)			 ::openfl::display::BitmapData bitmapData = ::openfl::utils::IAssetCache_obj::getBitmapData(::openfl::utils::Assets_obj::cache,id);
HXLINE(  90)			if (::openfl::utils::Assets_obj::isValidBitmapData(bitmapData)) {
HXLINE(  92)				return bitmapData;
            			}
            		}
HXLINE(  96)		 ::lime::graphics::Image image = ::lime::utils::Assets_obj::getImage(id,false);
HXLINE(  98)		if (::hx::IsNotNull( image )) {
HXLINE( 103)			 ::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::fromImage(image,null());
HXLINE( 106)			bool _hx_tmp;
HXDLIN( 106)			if (useCache) {
HXLINE( 106)				_hx_tmp = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            			}
            			else {
HXLINE( 106)				_hx_tmp = false;
            			}
HXDLIN( 106)			if (_hx_tmp) {
HXLINE( 108)				::openfl::utils::IAssetCache_obj::setBitmapData(::openfl::utils::Assets_obj::cache,id,bitmapData);
            			}
HXLINE( 111)			return bitmapData;
            		}
HXLINE( 115)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

 ::openfl::utils::ByteArrayData Assets_obj::getBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_127_getBytes)
HXDLIN( 127)		return ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromLimeBytes(::lime::utils::Assets_obj::getBytes(id));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

 ::openfl::text::Font Assets_obj::getFont(::String id,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_141_getFont)
HXLINE( 143)		bool _hx_tmp;
HXDLIN( 143)		bool _hx_tmp1;
HXDLIN( 143)		if (useCache) {
HXLINE( 143)			_hx_tmp1 = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            		}
            		else {
HXLINE( 143)			_hx_tmp1 = false;
            		}
HXDLIN( 143)		if (_hx_tmp1) {
HXLINE( 143)			_hx_tmp = ::openfl::utils::IAssetCache_obj::hasFont(::openfl::utils::Assets_obj::cache,id);
            		}
            		else {
HXLINE( 143)			_hx_tmp = false;
            		}
HXDLIN( 143)		if (_hx_tmp) {
HXLINE( 145)			return ::openfl::utils::IAssetCache_obj::getFont(::openfl::utils::Assets_obj::cache,id);
            		}
HXLINE( 148)		 ::lime::text::Font limeFont = ::lime::utils::Assets_obj::getFont(id,false);
HXLINE( 150)		if (::hx::IsNotNull( limeFont )) {
HXLINE( 155)			 ::openfl::text::Font font =  ::openfl::text::Font_obj::__alloc( HX_CTX ,null());
HXLINE( 156)			font->_hx___fromLimeFont(limeFont);
HXLINE( 159)			bool _hx_tmp;
HXDLIN( 159)			if (useCache) {
HXLINE( 159)				_hx_tmp = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            			}
            			else {
HXLINE( 159)				_hx_tmp = false;
            			}
HXDLIN( 159)			if (_hx_tmp) {
HXLINE( 161)				::openfl::utils::IAssetCache_obj::setFont(::openfl::utils::Assets_obj::cache,id,font);
            			}
HXLINE( 164)			return font;
            		}
HXLINE( 168)		return  ::openfl::text::Font_obj::__alloc( HX_CTX ,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getFont,return )

 ::lime::utils::AssetLibrary Assets_obj::getLibrary(::String name){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_174_getLibrary)
HXDLIN( 174)		return ::lime::utils::Assets_obj::getLibrary(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getLibrary,return )

 ::openfl::display::MovieClip Assets_obj::getMovieClip(::String id){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_187_getMovieClip)
HXLINE( 189)		::String libraryName = id.substring(0,id.indexOf(HX_(":",3a,00,00,00),null()));
HXLINE( 190)		::String symbolName = id.substr((id.indexOf(HX_(":",3a,00,00,00),null()) + 1),null());
HXLINE( 191)		 ::lime::utils::AssetLibrary limeLibrary = ::openfl::utils::Assets_obj::getLibrary(libraryName);
HXLINE( 193)		if (::hx::IsNotNull( limeLibrary )) {
HXLINE( 195)			if (::Std_obj::isOfType(limeLibrary,::hx::ClassOf< ::openfl::utils::AssetLibrary >())) {
HXLINE( 197)				 ::openfl::utils::AssetLibrary library = ( ( ::openfl::utils::AssetLibrary)(limeLibrary) );
HXLINE( 199)				if (library->exists(symbolName,HX_("MOVIE_CLIP",1f,e1,aa,77))) {
HXLINE( 201)					if (library->isLocal(symbolName,HX_("MOVIE_CLIP",1f,e1,aa,77))) {
HXLINE( 203)						return library->getMovieClip(symbolName);
            					}
            					else {
HXLINE( 207)						::lime::utils::Log_obj::error(((HX_("MovieClip asset \"",52,88,7e,e3) + id) + HX_("\" exists, but only asynchronously",dc,ca,f2,dd)),::hx::SourceInfo(HX_("openfl/utils/Assets.hx",9e,91,64,4e),207,HX_("openfl.utils.Assets",de,b0,04,7c),HX_("getMovieClip",2a,9f,71,27)));
HXLINE( 208)						return null();
            					}
            				}
            			}
HXLINE( 213)			::lime::utils::Log_obj::error(((HX_("There is no MovieClip asset with an ID of \"",d0,88,de,8c) + id) + HX_("\"",22,00,00,00)),::hx::SourceInfo(HX_("openfl/utils/Assets.hx",9e,91,64,4e),213,HX_("openfl.utils.Assets",de,b0,04,7c),HX_("getMovieClip",2a,9f,71,27)));
            		}
            		else {
HXLINE( 217)			::lime::utils::Log_obj::error(((HX_("There is no asset library named \"",a1,83,5f,51) + libraryName) + HX_("\"",22,00,00,00)),::hx::SourceInfo(HX_("openfl/utils/Assets.hx",9e,91,64,4e),217,HX_("openfl.utils.Assets",de,b0,04,7c),HX_("getMovieClip",2a,9f,71,27)));
            		}
HXLINE( 221)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getMovieClip,return )

 ::openfl::media::Sound Assets_obj::getMusic(::String id,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_228_getMusic)
HXDLIN( 228)		return ::openfl::utils::Assets_obj::getSound(id,useCache);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getMusic,return )

::String Assets_obj::getPath(::String id){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_240_getPath)
HXDLIN( 240)		return ::lime::utils::Assets_obj::getPath(id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getPath,return )

 ::openfl::media::Sound Assets_obj::getSound(::String id,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_254_getSound)
HXLINE( 256)		bool _hx_tmp;
HXDLIN( 256)		bool _hx_tmp1;
HXDLIN( 256)		if (useCache) {
HXLINE( 256)			_hx_tmp1 = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            		}
            		else {
HXLINE( 256)			_hx_tmp1 = false;
            		}
HXDLIN( 256)		if (_hx_tmp1) {
HXLINE( 256)			_hx_tmp = ::openfl::utils::IAssetCache_obj::hasSound(::openfl::utils::Assets_obj::cache,id);
            		}
            		else {
HXLINE( 256)			_hx_tmp = false;
            		}
HXDLIN( 256)		if (_hx_tmp) {
HXLINE( 258)			 ::openfl::media::Sound sound = ::openfl::utils::IAssetCache_obj::getSound(::openfl::utils::Assets_obj::cache,id);
HXLINE( 260)			if (::openfl::utils::Assets_obj::isValidSound(sound)) {
HXLINE( 262)				return sound;
            			}
            		}
HXLINE( 266)		 ::lime::media::AudioBuffer buffer = ::lime::utils::Assets_obj::getAudioBuffer(id,false);
HXLINE( 268)		if (::hx::IsNotNull( buffer )) {
HXLINE( 273)			 ::openfl::media::Sound sound = ::openfl::media::Sound_obj::fromAudioBuffer(buffer);
HXLINE( 276)			bool _hx_tmp;
HXDLIN( 276)			if (useCache) {
HXLINE( 276)				_hx_tmp = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            			}
            			else {
HXLINE( 276)				_hx_tmp = false;
            			}
HXDLIN( 276)			if (_hx_tmp) {
HXLINE( 278)				::openfl::utils::IAssetCache_obj::setSound(::openfl::utils::Assets_obj::cache,id,sound);
            			}
HXLINE( 281)			return sound;
            		}
HXLINE( 285)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getSound,return )

::String Assets_obj::getText(::String id){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_297_getText)
HXDLIN( 297)		return ::lime::utils::Assets_obj::getText(id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

bool Assets_obj::hasEventListener(::String type){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_305_hasEventListener)
HXDLIN( 305)		return ::openfl::utils::Assets_obj::dispatcher->hasEventListener(type);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,hasEventListener,return )

bool Assets_obj::hasLibrary(::String name){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_311_hasLibrary)
HXDLIN( 311)		return ::lime::utils::Assets_obj::hasLibrary(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,hasLibrary,return )

bool Assets_obj::isLocal(::String id,::String type,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_325_isLocal)
HXLINE( 327)		bool _hx_tmp;
HXDLIN( 327)		if (useCache) {
HXLINE( 327)			_hx_tmp = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            		}
            		else {
HXLINE( 327)			_hx_tmp = false;
            		}
HXDLIN( 327)		if (_hx_tmp) {
HXLINE( 329)			bool _hx_tmp;
HXDLIN( 329)			if ((type != HX_("IMAGE",3b,57,57,3b))) {
HXLINE( 329)				_hx_tmp = ::hx::IsNull( type );
            			}
            			else {
HXLINE( 329)				_hx_tmp = true;
            			}
HXDLIN( 329)			if (_hx_tmp) {
HXLINE( 331)				if (::openfl::utils::IAssetCache_obj::hasBitmapData(::openfl::utils::Assets_obj::cache,id)) {
HXLINE( 331)					return true;
            				}
            			}
HXLINE( 334)			bool _hx_tmp1;
HXDLIN( 334)			if ((type != HX_("FONT",cf,25,81,2e))) {
HXLINE( 334)				_hx_tmp1 = ::hx::IsNull( type );
            			}
            			else {
HXLINE( 334)				_hx_tmp1 = true;
            			}
HXDLIN( 334)			if (_hx_tmp1) {
HXLINE( 336)				if (::openfl::utils::IAssetCache_obj::hasFont(::openfl::utils::Assets_obj::cache,id)) {
HXLINE( 336)					return true;
            				}
            			}
HXLINE( 339)			bool _hx_tmp2;
HXDLIN( 339)			bool _hx_tmp3;
HXDLIN( 339)			if ((type != HX_("SOUND",af,c4,ba,fe))) {
HXLINE( 339)				_hx_tmp3 = (type == HX_("MUSIC",85,08,49,8e));
            			}
            			else {
HXLINE( 339)				_hx_tmp3 = true;
            			}
HXDLIN( 339)			if (!(_hx_tmp3)) {
HXLINE( 339)				_hx_tmp2 = ::hx::IsNull( type );
            			}
            			else {
HXLINE( 339)				_hx_tmp2 = true;
            			}
HXDLIN( 339)			if (_hx_tmp2) {
HXLINE( 341)				if (::openfl::utils::IAssetCache_obj::hasSound(::openfl::utils::Assets_obj::cache,id)) {
HXLINE( 341)					return true;
            				}
            			}
            		}
HXLINE( 345)		::String libraryName = id.substring(0,id.indexOf(HX_(":",3a,00,00,00),null()));
HXLINE( 346)		::String symbolName = id.substr((id.indexOf(HX_(":",3a,00,00,00),null()) + 1),null());
HXLINE( 347)		 ::lime::utils::AssetLibrary library = ::openfl::utils::Assets_obj::getLibrary(libraryName);
HXLINE( 349)		if (::hx::IsNotNull( library )) {
HXLINE( 351)			return library->isLocal(symbolName,type);
            		}
HXLINE( 355)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,isLocal,return )

bool Assets_obj::isValidBitmapData( ::openfl::display::BitmapData bitmapData){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_372_isValidBitmapData)
HXDLIN( 372)		return (::hx::IsNotNull( bitmapData ) && ::hx::IsNotNull( bitmapData->image ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidBitmapData,return )

bool Assets_obj::isValidSound( ::openfl::media::Sound sound){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_382_isValidSound)
HXDLIN( 382)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidSound,return )

::Array< ::String > Assets_obj::list(::String type){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_397_list)
HXDLIN( 397)		return ::lime::utils::Assets_obj::list(type);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,list,return )

 ::lime::app::Future Assets_obj::loadBitmapData(::String id, ::Dynamic __o_useCache){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::String,id,::Array< ::Dynamic>,useCache1, ::lime::app::Promise_openfl_display_BitmapData,promise) HXARGC(1)
            		void _hx_run( ::lime::graphics::Image image){
            			HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_430_loadBitmapData)
HXLINE( 430)			if (::hx::IsNotNull( image )) {
HXLINE( 435)				 ::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::fromImage(image,null());
HXLINE( 438)				bool _hx_tmp;
HXDLIN( 438)				if (( (bool)(useCache1->__get(0)) )) {
HXLINE( 438)					_hx_tmp = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            				}
            				else {
HXLINE( 438)					_hx_tmp = false;
            				}
HXDLIN( 438)				if (_hx_tmp) {
HXLINE( 440)					::openfl::utils::IAssetCache_obj::setBitmapData(::openfl::utils::Assets_obj::cache,id,bitmapData);
            				}
HXLINE( 443)				promise->complete(bitmapData);
            			}
            			else {
HXLINE( 447)				promise->error(((HX_("[Assets] Could not load Image \"",f0,0b,f7,ed) + id) + HX_("\"",22,00,00,00)));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		 ::Dynamic useCache = __o_useCache;
            		if (::hx::IsNull(__o_useCache)) useCache = true;
            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_411_loadBitmapData)
HXDLIN( 411)		::Array< ::Dynamic> useCache1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,useCache);
HXLINE( 412)		if (::hx::IsNull( useCache1->__get(0) )) {
HXLINE( 412)			useCache1[0] = true;
            		}
HXLINE( 415)		 ::lime::app::Promise_openfl_display_BitmapData promise =  ::lime::app::Promise_openfl_display_BitmapData_obj::__alloc( HX_CTX );
HXLINE( 417)		bool _hx_tmp;
HXDLIN( 417)		bool _hx_tmp1;
HXDLIN( 417)		if (( (bool)(useCache1->__get(0)) )) {
HXLINE( 417)			_hx_tmp1 = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            		}
            		else {
HXLINE( 417)			_hx_tmp1 = false;
            		}
HXDLIN( 417)		if (_hx_tmp1) {
HXLINE( 417)			_hx_tmp = ::openfl::utils::IAssetCache_obj::hasBitmapData(::openfl::utils::Assets_obj::cache,id);
            		}
            		else {
HXLINE( 417)			_hx_tmp = false;
            		}
HXDLIN( 417)		if (_hx_tmp) {
HXLINE( 419)			 ::openfl::display::BitmapData bitmapData = ::openfl::utils::IAssetCache_obj::getBitmapData(::openfl::utils::Assets_obj::cache,id);
HXLINE( 421)			if (::openfl::utils::Assets_obj::isValidBitmapData(bitmapData)) {
HXLINE( 423)				promise->complete(bitmapData);
HXLINE( 424)				return promise->future;
            			}
            		}
HXLINE( 428)		::lime::utils::Assets_obj::loadImage(id,false)->onComplete( ::Dynamic(new _hx_Closure_0(id,useCache1,promise)))->onError(promise->error_dyn())->onProgress(promise->progress_dyn());
HXLINE( 451)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadBitmapData,return )

 ::lime::app::Future Assets_obj::loadBytes(::String id){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::lime::app::Promise_openfl_utils_ByteArray,promise) HXARGC(1)
            		void _hx_run( ::haxe::io::Bytes bytes){
            			HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_469_loadBytes)
HXLINE( 469)			 ::lime::app::Promise_openfl_utils_ByteArray promise1 = promise;
HXDLIN( 469)			promise1->complete(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromLimeBytes(bytes));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::lime::app::Promise_openfl_utils_ByteArray,promise) HXARGC(2)
            		void _hx_run(int progress,int total){
            			HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_470_loadBytes)
HXLINE( 470)			promise->progress(progress,total);
            		}
            		HX_END_LOCAL_FUNC2((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::lime::app::Promise_openfl_utils_ByteArray,promise) HXARGC(1)
            		void _hx_run( ::Dynamic msg){
            			HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_471_loadBytes)
HXLINE( 471)			promise->error(msg);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_464_loadBytes)
HXLINE( 466)		 ::lime::app::Promise_openfl_utils_ByteArray promise =  ::lime::app::Promise_openfl_utils_ByteArray_obj::__alloc( HX_CTX );
HXLINE( 467)		 ::lime::app::Future future = ::lime::utils::Assets_obj::loadBytes(id);
HXLINE( 469)		future->onComplete( ::Dynamic(new _hx_Closure_0(promise)));
HXLINE( 470)		future->onProgress( ::Dynamic(new _hx_Closure_1(promise)));
HXLINE( 471)		future->onError( ::Dynamic(new _hx_Closure_2(promise)));
HXLINE( 473)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadBytes,return )

 ::lime::app::Future Assets_obj::loadFont(::String id, ::Dynamic __o_useCache){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::String,id,::Array< ::Dynamic>,useCache1, ::lime::app::Promise_openfl_text_Font,promise) HXARGC(1)
            		void _hx_run( ::lime::text::Font limeFont){
            			HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_501_loadFont)
HXLINE( 505)			 ::openfl::text::Font font =  ::openfl::text::Font_obj::__alloc( HX_CTX ,null());
HXLINE( 506)			font->_hx___fromLimeFont(limeFont);
HXLINE( 509)			bool _hx_tmp;
HXDLIN( 509)			if (( (bool)(useCache1->__get(0)) )) {
HXLINE( 509)				_hx_tmp = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            			}
            			else {
HXLINE( 509)				_hx_tmp = false;
            			}
HXDLIN( 509)			if (_hx_tmp) {
HXLINE( 511)				::openfl::utils::IAssetCache_obj::setFont(::openfl::utils::Assets_obj::cache,id,font);
            			}
HXLINE( 514)			promise->complete(font);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		 ::Dynamic useCache = __o_useCache;
            		if (::hx::IsNull(__o_useCache)) useCache = true;
            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_487_loadFont)
HXDLIN( 487)		::Array< ::Dynamic> useCache1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,useCache);
HXLINE( 488)		if (::hx::IsNull( useCache1->__get(0) )) {
HXLINE( 488)			useCache1[0] = true;
            		}
HXLINE( 491)		 ::lime::app::Promise_openfl_text_Font promise =  ::lime::app::Promise_openfl_text_Font_obj::__alloc( HX_CTX );
HXLINE( 493)		bool _hx_tmp;
HXDLIN( 493)		bool _hx_tmp1;
HXDLIN( 493)		if (( (bool)(useCache1->__get(0)) )) {
HXLINE( 493)			_hx_tmp1 = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            		}
            		else {
HXLINE( 493)			_hx_tmp1 = false;
            		}
HXDLIN( 493)		if (_hx_tmp1) {
HXLINE( 493)			_hx_tmp = ::openfl::utils::IAssetCache_obj::hasFont(::openfl::utils::Assets_obj::cache,id);
            		}
            		else {
HXLINE( 493)			_hx_tmp = false;
            		}
HXDLIN( 493)		if (_hx_tmp) {
HXLINE( 495)			 ::lime::app::Promise_openfl_text_Font promise1 = promise;
HXDLIN( 495)			promise1->complete(::openfl::utils::IAssetCache_obj::getFont(::openfl::utils::Assets_obj::cache,id));
HXLINE( 496)			return promise->future;
            		}
HXLINE( 499)		::lime::utils::Assets_obj::loadFont(id,null())->onComplete( ::Dynamic(new _hx_Closure_0(id,useCache1,promise)))->onError(promise->error_dyn())->onProgress(promise->progress_dyn());
HXLINE( 519)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadFont,return )

 ::lime::app::Future Assets_obj::loadLibrary(::String name){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::String,name) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::lime::utils::AssetLibrary library){
            			HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_534_loadLibrary)
HXLINE( 535)			 ::openfl::utils::AssetLibrary _library = null();
HXLINE( 537)			if (::hx::IsNotNull( library )) {
HXLINE( 539)				if (::Std_obj::isOfType(library,::hx::ClassOf< ::openfl::utils::AssetLibrary >())) {
HXLINE( 541)					_library = ( ( ::openfl::utils::AssetLibrary)(library) );
            				}
            				else {
HXLINE( 545)					_library =  ::openfl::utils::AssetLibrary_obj::__alloc( HX_CTX );
HXLINE( 546)					_library->_hx___proxy = library;
HXLINE( 547)					::lime::utils::Assets_obj::registerLibrary(name,_library);
            				}
            			}
HXLINE( 551)			return ::lime::app::Future_obj::withValue(_library);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_533_loadLibrary)
HXDLIN( 533)		return ::lime::utils::Assets_obj::loadLibrary(name)->then( ::Dynamic(new _hx_Closure_0(name)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadLibrary,return )

 ::lime::app::Future Assets_obj::loadMusic(::String id, ::Dynamic __o_useCache){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::String,id,::Array< ::Dynamic>,useCache1, ::lime::app::Promise_openfl_media_Sound,promise) HXARGC(1)
            		void _hx_run( ::lime::media::AudioBuffer buffer){
            			HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_576_loadMusic)
HXLINE( 576)			if (::hx::IsNotNull( buffer )) {
HXLINE( 581)				 ::openfl::media::Sound sound = ::openfl::media::Sound_obj::fromAudioBuffer(buffer);
HXLINE( 584)				bool _hx_tmp;
HXDLIN( 584)				if (( (bool)(useCache1->__get(0)) )) {
HXLINE( 584)					_hx_tmp = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            				}
            				else {
HXLINE( 584)					_hx_tmp = false;
            				}
HXDLIN( 584)				if (_hx_tmp) {
HXLINE( 586)					::openfl::utils::IAssetCache_obj::setSound(::openfl::utils::Assets_obj::cache,id,sound);
            				}
HXLINE( 589)				promise->complete(sound);
            			}
            			else {
HXLINE( 593)				promise->error(((HX_("[Assets] Could not load Sound \"",64,be,27,e3) + id) + HX_("\"",22,00,00,00)));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		 ::Dynamic useCache = __o_useCache;
            		if (::hx::IsNull(__o_useCache)) useCache = true;
            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_566_loadMusic)
HXDLIN( 566)		::Array< ::Dynamic> useCache1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,useCache);
HXLINE( 567)		if (::hx::IsNull( useCache1->__get(0) )) {
HXLINE( 567)			useCache1[0] = true;
            		}
HXLINE( 571)		 ::lime::app::Promise_openfl_media_Sound promise =  ::lime::app::Promise_openfl_media_Sound_obj::__alloc( HX_CTX );
HXLINE( 573)		::lime::utils::Assets_obj::loadAudioBuffer(id,useCache1->__get(0))->onComplete( ::Dynamic(new _hx_Closure_0(id,useCache1,promise)))->onError(promise->error_dyn())->onProgress(promise->progress_dyn());
HXLINE( 598)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadMusic,return )

 ::lime::app::Future Assets_obj::loadMovieClip(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_616_loadMovieClip)
HXLINE( 618)		 ::lime::app::Promise_openfl_display_MovieClip promise =  ::lime::app::Promise_openfl_display_MovieClip_obj::__alloc( HX_CTX );
HXLINE( 620)		::String libraryName = id.substring(0,id.indexOf(HX_(":",3a,00,00,00),null()));
HXLINE( 621)		::String symbolName = id.substr((id.indexOf(HX_(":",3a,00,00,00),null()) + 1),null());
HXLINE( 622)		 ::lime::utils::AssetLibrary limeLibrary = ::openfl::utils::Assets_obj::getLibrary(libraryName);
HXLINE( 624)		if (::hx::IsNotNull( limeLibrary )) {
HXLINE( 626)			if (::Std_obj::isOfType(limeLibrary,::hx::ClassOf< ::openfl::utils::AssetLibrary >())) {
HXLINE( 628)				 ::openfl::utils::AssetLibrary library = ( ( ::openfl::utils::AssetLibrary)(limeLibrary) );
HXLINE( 630)				if (library->exists(symbolName,HX_("MOVIE_CLIP",1f,e1,aa,77))) {
HXLINE( 632)					promise->completeWith(library->loadMovieClip(symbolName));
HXLINE( 633)					return promise->future;
            				}
            			}
HXLINE( 637)			promise->error(((HX_("[Assets] There is no MovieClip asset with an ID of \"",8f,8e,f2,7d) + id) + HX_("\"",22,00,00,00)));
            		}
            		else {
HXLINE( 641)			promise->error(((HX_("[Assets] There is no asset library named \"",a0,b4,0a,cd) + libraryName) + HX_("\"",22,00,00,00)));
            		}
HXLINE( 644)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadMovieClip,return )

 ::lime::app::Future Assets_obj::loadSound(::String id, ::Dynamic __o_useCache){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::String,id,::Array< ::Dynamic>,useCache1, ::lime::app::Promise_openfl_media_Sound,promise) HXARGC(1)
            		void _hx_run( ::lime::media::AudioBuffer buffer){
            			HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_667_loadSound)
HXLINE( 667)			if (::hx::IsNotNull( buffer )) {
HXLINE( 672)				 ::openfl::media::Sound sound = ::openfl::media::Sound_obj::fromAudioBuffer(buffer);
HXLINE( 675)				bool _hx_tmp;
HXDLIN( 675)				if (( (bool)(useCache1->__get(0)) )) {
HXLINE( 675)					_hx_tmp = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            				}
            				else {
HXLINE( 675)					_hx_tmp = false;
            				}
HXDLIN( 675)				if (_hx_tmp) {
HXLINE( 677)					::openfl::utils::IAssetCache_obj::setSound(::openfl::utils::Assets_obj::cache,id,sound);
            				}
HXLINE( 680)				promise->complete(sound);
            			}
            			else {
HXLINE( 684)				promise->error(((HX_("[Assets] Could not load Sound \"",64,be,27,e3) + id) + HX_("\"",22,00,00,00)));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		 ::Dynamic useCache = __o_useCache;
            		if (::hx::IsNull(__o_useCache)) useCache = true;
            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_658_loadSound)
HXDLIN( 658)		::Array< ::Dynamic> useCache1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,useCache);
HXLINE( 659)		if (::hx::IsNull( useCache1->__get(0) )) {
HXLINE( 659)			useCache1[0] = true;
            		}
HXLINE( 662)		 ::lime::app::Promise_openfl_media_Sound promise =  ::lime::app::Promise_openfl_media_Sound_obj::__alloc( HX_CTX );
HXLINE( 664)		::lime::utils::Assets_obj::loadAudioBuffer(id,useCache1->__get(0))->onComplete( ::Dynamic(new _hx_Closure_0(id,useCache1,promise)))->onError(promise->error_dyn())->onProgress(promise->progress_dyn());
HXLINE( 689)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadSound,return )

 ::lime::app::Future Assets_obj::loadText(::String id){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_703_loadText)
HXLINE( 705)		 ::lime::app::Future future = ::lime::utils::Assets_obj::loadText(id);
HXLINE( 706)		return future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadText,return )

void Assets_obj::registerLibrary(::String name, ::openfl::utils::AssetLibrary library){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_720_registerLibrary)
HXDLIN( 720)		::lime::utils::Assets_obj::registerLibrary(name,library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerLibrary,(void))

void Assets_obj::removeEventListener(::String type, ::Dynamic listener,::hx::Null< bool >  __o_capture){
            		bool capture = __o_capture.Default(false);
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_726_removeEventListener)
HXDLIN( 726)		::openfl::utils::Assets_obj::dispatcher->removeEventListener(type,listener,capture);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,removeEventListener,(void))

::hx::Class Assets_obj::resolveClass(::String name){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_731_resolveClass)
HXDLIN( 731)		return ::Type_obj::resolveClass(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveClass,return )

::hx::Class Assets_obj::resolveEnum(::String name){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_735_resolveEnum)
HXLINE( 736)		::hx::Class value = ::Type_obj::resolveEnum(name);
HXLINE( 745)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveEnum,return )

void Assets_obj::unloadLibrary(::String name){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_751_unloadLibrary)
HXDLIN( 751)		::lime::utils::Assets_obj::unloadLibrary(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,unloadLibrary,(void))

void Assets_obj::LimeAssets_onChange(){
            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_758_LimeAssets_onChange)
HXDLIN( 758)		::openfl::utils::Assets_obj::dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,LimeAssets_onChange,(void))


Assets_obj::Assets_obj()
{
}

bool Assets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { outValue = ( cache ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getText") ) { outValue = getText_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isLocal") ) { outValue = isLocal_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getMusic") ) { outValue = getMusic_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSound") ) { outValue = getSound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadFont") ) { outValue = loadFont_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadText") ) { outValue = loadText_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { outValue = loadBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadMusic") ) { outValue = loadMusic_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadSound") ) { outValue = loadSound_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { outValue = ( dispatcher ); return true; }
		if (HX_FIELD_EQ(inName,"getLibrary") ) { outValue = getLibrary_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hasLibrary") ) { outValue = hasLibrary_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadLibrary") ) { outValue = loadLibrary_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { outValue = resolveEnum_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { outValue = getMovieClip_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isValidSound") ) { outValue = isValidSound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { outValue = dispatchEvent_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { outValue = getBitmapData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadMovieClip") ) { outValue = loadMovieClip_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"unloadLibrary") ) { outValue = unloadLibrary_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadBitmapData") ) { outValue = loadBitmapData_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"registerLibrary") ) { outValue = registerLibrary_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { outValue = addEventListener_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { outValue = hasEventListener_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isValidBitmapData") ) { outValue = isValidBitmapData_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { outValue = removeEventListener_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"LimeAssets_onChange") ) { outValue = LimeAssets_onChange_dyn(); return true; }
	}
	return false;
}

bool Assets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=ioValue.Cast< ::Dynamic >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { dispatcher=ioValue.Cast<  ::openfl::events::EventDispatcher >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Assets_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Assets_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Assets_obj::cache,HX_("cache",42,9a,14,41)},
	{::hx::fsObject /*  ::openfl::events::EventDispatcher */ ,(void *) &Assets_obj::dispatcher,HX_("dispatcher",a7,c9,00,5a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Assets_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::dispatcher,"dispatcher");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Assets_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::dispatcher,"dispatcher");
};

#endif

::hx::Class Assets_obj::__mClass;

static ::String Assets_obj_sStaticFields[] = {
	HX_("cache",42,9a,14,41),
	HX_("dispatcher",a7,c9,00,5a),
	HX_("addEventListener",cd,0b,64,f1),
	HX_("dispatchEvent",00,c7,64,c6),
	HX_("exists",dc,1d,e0,bf),
	HX_("getBitmapData",ef,11,33,90),
	HX_("getBytes",f5,17,6f,1d),
	HX_("getFont",85,0d,43,16),
	HX_("getLibrary",05,ad,d1,8e),
	HX_("getMovieClip",2a,9f,71,27),
	HX_("getMusic",2f,e0,31,70),
	HX_("getPath",5b,95,d4,1c),
	HX_("getSound",59,9c,a3,e0),
	HX_("getText",63,7c,7c,1f),
	HX_("hasEventListener",f4,2e,ea,0c),
	HX_("hasLibrary",c1,0e,24,ca),
	HX_("isLocal",21,6d,76,15),
	HX_("isValidBitmapData",0b,65,e4,e6),
	HX_("isValidSound",bd,1e,2b,a1),
	HX_("list",5e,1c,b3,47),
	HX_("loadBitmapData",7f,bf,71,ca),
	HX_("loadBytes",65,54,cf,d8),
	HX_("loadFont",15,2f,60,b4),
	HX_("loadLibrary",75,e5,0d,10),
	HX_("loadMusic",9f,1c,92,2b),
	HX_("loadMovieClip",9a,d3,80,9a),
	HX_("loadSound",c9,d8,03,9c),
	HX_("loadText",f3,9d,99,bd),
	HX_("registerLibrary",d8,8a,84,f2),
	HX_("removeEventListener",ca,87,75,55),
	HX_("resolveClass",ac,bd,dd,80),
	HX_("resolveEnum",0d,90,51,de),
	HX_("unloadLibrary",bc,5b,48,31),
	HX_("LimeAssets_onChange",b6,36,60,95),
	::String(null())
};

void Assets_obj::__register()
{
	Assets_obj _hx_dummy;
	Assets_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils.Assets",de,b0,04,7c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Assets_obj::__GetStatic;
	__mClass->mSetStaticField = &Assets_obj::__SetStatic;
	__mClass->mMarkFunc = Assets_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Assets_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Assets_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Assets_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Assets_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Assets_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Assets_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_41_boot)
HXDLIN(  41)		cache =  ::openfl::utils::AssetCache_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_42_boot)
HXDLIN(  42)		dispatcher =  ::openfl::events::EventDispatcher_obj::__alloc( HX_CTX ,null());
            	}
}

} // end namespace openfl
} // end namespace utils
