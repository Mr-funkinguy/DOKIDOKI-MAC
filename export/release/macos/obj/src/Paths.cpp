#include <hxcpp.h>

#ifndef INCLUDED_Caching
#include <Caching.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_17_setCurrentLevel,"Paths","setCurrentLevel",0x8a8c27ed,"Paths.setCurrentLevel","Paths.hx",17,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_21_getPath,"Paths","getPath",0x5f104ffb,"Paths.getPath","Paths.hx",21,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_41_getLibraryPath,"Paths","getLibraryPath",0xe56efeaa,"Paths.getLibraryPath","Paths.hx",41,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_46_getLibraryPathForce,"Paths","getLibraryPathForce",0xe1e5bae1,"Paths.getLibraryPathForce","Paths.hx",46,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_51_getPreloadPath,"Paths","getPreloadPath",0x2fdd9e78,"Paths.getPreloadPath","Paths.hx",51,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_56_file,"Paths","file",0x8f872fdc,"Paths.file","Paths.hx",56,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_61_lua,"Paths","lua",0x5a344458,"Paths.lua","Paths.hx",61,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_66_luaImage,"Paths","luaImage",0xedd38be3,"Paths.luaImage","Paths.hx",66,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_71_txt,"Paths","txt",0x5a3a5910,"Paths.txt","Paths.hx",71,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_84_xml,"Paths","xml",0x5a3d5877,"Paths.xml","Paths.hx",84,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_89_json,"Paths","json",0x9233a388,"Paths.json","Paths.hx",89,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_93_sound,"Paths","sound",0x86f65f6f,"Paths.sound","Paths.hx",93,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_100_soundRandom,"Paths","soundRandom",0x8e79b2d2,"Paths.soundRandom","Paths.hx",100,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_104_music,"Paths","music",0x1684a345,"Paths.music","Paths.hx",104,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_110_voices,"Paths","voices",0xbbb84fe1,"Paths.voices","Paths.hx",110,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_116_inst,"Paths","inst",0x9186a526,"Paths.inst","Paths.hx",116,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_122_listSongsToCache,"Paths","listSongsToCache",0xd7d84247,"Paths.listSongsToCache","Paths.hx",122,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_152_listAudioToCache,"Paths","listAudioToCache",0x7bc96b6f,"Paths.listAudioToCache","Paths.hx",152,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_186_doesSoundAssetExist,"Paths","doesSoundAssetExist",0x02ff8e3d,"Paths.doesSoundAssetExist","Paths.hx",186,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_193_loadImage,"Paths","loadImage",0xed380df5,"Paths.loadImage","Paths.hx",193,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_217_image,"Paths","image",0xc392f1fb,"Paths.image","Paths.hx",217,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_230_font,"Paths","font",0x8f8bbf2f,"Paths.font","Paths.hx",230,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_235_getSparrowAtlas,"Paths","getSparrowAtlas",0x5a1f05f5,"Paths.getSparrowAtlas","Paths.hx",235,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_248_getPackerAtlas,"Paths","getPackerAtlas",0xa8de8c4f,"Paths.getPackerAtlas","Paths.hx",248,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_11_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",11,0x309ea470)

void Paths_obj::__construct() { }

Dynamic Paths_obj::__CreateEmpty() { return new Paths_obj; }

void *Paths_obj::_hx_vtable = 0;

Dynamic Paths_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Paths_obj > _hx_result = new Paths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Paths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x44c8e46a;
}

::String Paths_obj::SOUND_EXT;

::String Paths_obj::currentLevel;

void Paths_obj::setCurrentLevel(::String name){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_17_setCurrentLevel)
HXDLIN(  17)		::Paths_obj::currentLevel = name.toLowerCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,setCurrentLevel,(void))

::String Paths_obj::getPath(::String file,::String type,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_21_getPath)
HXLINE(  22)		if (::hx::IsNotNull( library )) {
HXLINE(  23)			return ::Paths_obj::getLibraryPath(file,library);
            		}
HXLINE(  25)		if (::hx::IsNotNull( ::Paths_obj::currentLevel )) {
HXLINE(  27)			::String library = ::Paths_obj::currentLevel;
HXDLIN(  27)			::String levelPath = (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + file);
HXLINE(  28)			if (::openfl::utils::Assets_obj::exists(levelPath,type)) {
HXLINE(  29)				return levelPath;
            			}
HXLINE(  31)			levelPath = ((((HX_("shared",a5,5e,2b,1d) + HX_(":assets/",52,05,4a,2c)) + HX_("shared",a5,5e,2b,1d)) + HX_("/",2f,00,00,00)) + file);
HXLINE(  32)			if (::openfl::utils::Assets_obj::exists(levelPath,type)) {
HXLINE(  33)				return levelPath;
            			}
            		}
HXLINE(  36)		return (HX_("assets/",4c,2a,dc,36) + file);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,getPath,return )

::String Paths_obj::getLibraryPath(::String file,::String __o_library){
            		::String library = __o_library;
            		if (::hx::IsNull(__o_library)) library = HX_("preload",c9,47,43,35);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_41_getLibraryPath)
HXDLIN(  41)		bool _hx_tmp;
HXDLIN(  41)		if ((library != HX_("preload",c9,47,43,35))) {
HXDLIN(  41)			_hx_tmp = (library == HX_("default",c1,d8,c3,9b));
            		}
            		else {
HXDLIN(  41)			_hx_tmp = true;
            		}
HXDLIN(  41)		if (_hx_tmp) {
HXDLIN(  41)			return (HX_("assets/",4c,2a,dc,36) + file);
            		}
            		else {
HXDLIN(  41)			return (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + file);
            		}
HXDLIN(  41)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getLibraryPath,return )

::String Paths_obj::getLibraryPathForce(::String file,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_46_getLibraryPathForce)
HXDLIN(  46)		return (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + file);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getLibraryPathForce,return )

::String Paths_obj::getPreloadPath(::String file){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_51_getPreloadPath)
HXDLIN(  51)		return (HX_("assets/",4c,2a,dc,36) + file);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,getPreloadPath,return )

::String Paths_obj::file(::String file,::String __o_type,::String library){
            		::String type = __o_type;
            		if (::hx::IsNull(__o_type)) type = HX_("TEXT",ad,94,ba,37);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_56_file)
HXDLIN(  56)		return ::Paths_obj::getPath(file,type,library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,file,return )

::String Paths_obj::lua(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_61_lua)
HXDLIN(  61)		return ::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".lua",4a,2a,ba,1e)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,lua,return )

::String Paths_obj::luaImage(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_66_luaImage)
HXDLIN(  66)		return ::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,luaImage,return )

::String Paths_obj::txt(::String key,::String library,::hx::Null< bool >  __o_isLocale){
            		bool isLocale = __o_isLocale.Default(false);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_71_txt)
HXDLIN(  71)		if (isLocale) {
HXLINE(  73)			if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/",2f,00,00,00) + key) + HX_(".txt",02,3f,c0,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE(  74)				return ::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/",2f,00,00,00) + key) + HX_(".txt",02,3f,c0,1e))),HX_("TEXT",ad,94,ba,37),library);
            			}
            			else {
HXLINE(  76)				return ::Paths_obj::getPath(((HX_("locale/en-US/",02,23,bf,a8) + key) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
            		}
            		else {
HXLINE(  79)			return ::Paths_obj::getPath(((HX_("",00,00,00,00) + key) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXLINE(  71)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,txt,return )

::String Paths_obj::xml(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_84_xml)
HXDLIN(  84)		return ::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,xml,return )

::String Paths_obj::json(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_89_json)
HXDLIN(  89)		return ::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".json",56,f1,d6,c2)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,json,return )

::String Paths_obj::sound(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_93_sound)
HXLINE(  94)		::String result = ::Paths_obj::getPath((((HX_("sounds/",eb,02,a5,b6) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("SOUND",af,c4,ba,fe),library);
HXLINE(  95)		if (::Paths_obj::doesSoundAssetExist(result)) {
HXLINE(  95)			return result;
            		}
            		else {
HXLINE(  95)			return null();
            		}
HXDLIN(  95)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,sound,return )

::String Paths_obj::soundRandom(::String key,int min,int max,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_100_soundRandom)
HXDLIN( 100)		return ::Paths_obj::sound((key + ::flixel::FlxG_obj::random->_hx_int(min,max,null())),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Paths_obj,soundRandom,return )

::String Paths_obj::music(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_104_music)
HXLINE( 105)		::String result = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
HXLINE( 106)		if (::Paths_obj::doesSoundAssetExist(result)) {
HXLINE( 106)			return result;
            		}
            		else {
HXLINE( 106)			return null();
            		}
HXDLIN( 106)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,music,return )

::String Paths_obj::voices(::String song){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_110_voices)
HXLINE( 111)		::String result = (((HX_("songs:assets/songs/",c1,ed,e6,7e) + song.toLowerCase()) + HX_("/Voices.",1e,f6,e5,90)) + HX_("ogg",4f,94,54,00));
HXLINE( 112)		if (::Paths_obj::doesSoundAssetExist(result)) {
HXLINE( 112)			return result;
            		}
            		else {
HXLINE( 112)			return null();
            		}
HXDLIN( 112)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,voices,return )

::String Paths_obj::inst(::String song){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_116_inst)
HXLINE( 117)		::String result = (((HX_("songs:assets/songs/",c1,ed,e6,7e) + song.toLowerCase()) + HX_("/Inst.",f9,6e,13,1c)) + HX_("ogg",4f,94,54,00));
HXLINE( 118)		if (::Paths_obj::doesSoundAssetExist(result)) {
HXLINE( 118)			return result;
            		}
            		else {
HXLINE( 118)			return null();
            		}
HXDLIN( 118)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,inst,return )

::Array< ::String > Paths_obj::listSongsToCache(){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_122_listSongsToCache)
HXLINE( 124)		::Array< ::String > soundAssets = ::openfl::utils::Assets_obj::list(HX_("MUSIC",85,08,49,8e));
HXDLIN( 124)		::Array< ::String > soundAssets1 = soundAssets->concat(::openfl::utils::Assets_obj::list(HX_("SOUND",af,c4,ba,fe)));
HXLINE( 127)		::Array< ::String > songNames = ::Array_obj< ::String >::__new(0);
HXLINE( 129)		{
HXLINE( 129)			int _g = 0;
HXDLIN( 129)			while((_g < soundAssets1->length)){
HXLINE( 129)				::String sound = soundAssets1->__get(_g);
HXDLIN( 129)				_g = (_g + 1);
HXLINE( 132)				::Array< ::String > path = sound.split(HX_("/",2f,00,00,00));
HXLINE( 133)				path->reverse();
HXLINE( 135)				::String fileName = path->__get(0);
HXLINE( 136)				::String songName = path->__get(1);
HXLINE( 138)				if ((path->__get(2) != HX_("songs",fe,36,c7,80))) {
HXLINE( 139)					continue;
            				}
HXLINE( 142)				if ((songNames->indexOf(songName,null()) != -1)) {
HXLINE( 143)					continue;
            				}
HXLINE( 145)				songNames->push(songName);
            			}
            		}
HXLINE( 148)		return songNames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Paths_obj,listSongsToCache,return )

::Array< ::String > Paths_obj::listAudioToCache(bool isSound){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_152_listAudioToCache)
HXLINE( 154)		::Array< ::String > soundAssets = ::openfl::utils::Assets_obj::list(HX_("MUSIC",85,08,49,8e));
HXDLIN( 154)		::Array< ::String > soundAssets1 = soundAssets->concat(::openfl::utils::Assets_obj::list(HX_("SOUND",af,c4,ba,fe)));
HXLINE( 157)		::Array< ::String > fileNames = ::Array_obj< ::String >::__new(0);
HXLINE( 159)		::String folderName = HX_("music",a5,d0,5a,10);
HXLINE( 161)		if (isSound) {
HXLINE( 162)			folderName = HX_("sounds",c4,a8,2e,32);
            		}
HXLINE( 164)		{
HXLINE( 164)			int _g = 0;
HXDLIN( 164)			while((_g < soundAssets1->length)){
HXLINE( 164)				::String sound = soundAssets1->__get(_g);
HXDLIN( 164)				_g = (_g + 1);
HXLINE( 167)				::Array< ::String > path = sound.split(HX_("/",2f,00,00,00));
HXLINE( 168)				path->reverse();
HXLINE( 170)				::String fileName = path->__get(0);
HXLINE( 172)				if ((path->__get(1) != folderName)) {
HXLINE( 173)					continue;
            				}
HXLINE( 176)				if ((fileNames->indexOf(fileName,null()) != -1)) {
HXLINE( 177)					continue;
            				}
HXLINE( 179)				fileNames->push(fileName);
            			}
            		}
HXLINE( 182)		return fileNames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,listAudioToCache,return )

bool Paths_obj::doesSoundAssetExist(::String path){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_186_doesSoundAssetExist)
HXLINE( 187)		bool _hx_tmp;
HXDLIN( 187)		if (::hx::IsNotNull( path )) {
HXLINE( 187)			_hx_tmp = (path == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 187)			_hx_tmp = true;
            		}
HXDLIN( 187)		if (_hx_tmp) {
HXLINE( 188)			return false;
            		}
HXLINE( 189)		if (!(::openfl::utils::Assets_obj::exists(path,HX_("SOUND",af,c4,ba,fe)))) {
HXLINE( 189)			return ::openfl::utils::Assets_obj::exists(path,HX_("MUSIC",85,08,49,8e));
            		}
            		else {
HXLINE( 189)			return true;
            		}
HXDLIN( 189)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,doesSoundAssetExist,return )

 ::flixel::graphics::FlxGraphic Paths_obj::loadImage(::String key,::String library,::hx::Null< bool >  __o_isLocale){
            		bool isLocale = __o_isLocale.Default(false);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_193_loadImage)
HXLINE( 194)		::String path;
HXDLIN( 194)		if (isLocale) {
HXLINE( 194)			if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + key) + HX_(".png",3b,2d,bd,1e))),HX_("IMAGE",3b,57,57,3b),library),null())) {
HXLINE( 194)				path = ::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + key) + HX_(".png",3b,2d,bd,1e))),HX_("IMAGE",3b,57,57,3b),library);
            			}
            			else {
HXLINE( 194)				path = ::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
            		}
            		else {
HXLINE( 194)			path = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXLINE( 197)		if (::hx::IsNotNull( ::Caching_obj::bitmapData )) {
HXLINE( 199)			if (::Caching_obj::bitmapData->exists(key)) {
HXLINE( 201)				return ( ( ::flixel::graphics::FlxGraphic)(::Caching_obj::bitmapData->get(key)) );
            			}
            		}
HXLINE( 205)		if (::openfl::utils::Assets_obj::exists(path,HX_("IMAGE",3b,57,57,3b))) {
HXLINE( 207)			 ::openfl::display::BitmapData bitmap = ::openfl::utils::Assets_obj::getBitmapData(path,null());
HXLINE( 208)			return ::flixel::graphics::FlxGraphic_obj::fromBitmapData(bitmap,null(),null(),null());
            		}
            		else {
HXLINE( 212)			return null();
            		}
HXLINE( 205)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,loadImage,return )

::String Paths_obj::image(::String key,::String library,::hx::Null< bool >  __o_isLocale){
            		bool isLocale = __o_isLocale.Default(false);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_217_image)
HXDLIN( 217)		if (isLocale) {
HXLINE( 219)			if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + key) + HX_(".png",3b,2d,bd,1e))),HX_("IMAGE",3b,57,57,3b),library),null())) {
HXLINE( 220)				return ::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + key) + HX_(".png",3b,2d,bd,1e))),HX_("IMAGE",3b,57,57,3b),library);
            			}
            			else {
HXLINE( 222)				return ::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
            		}
            		else {
HXLINE( 225)			return ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXLINE( 217)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,image,return )

::String Paths_obj::font(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_230_font)
HXDLIN( 230)		return (HX_("assets/fonts/",37,ff,a5,9c) + key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,font,return )

 ::flixel::graphics::frames::FlxAtlasFrames Paths_obj::getSparrowAtlas(::String key,::String library,::hx::Null< bool >  __o_isLocale){
            		bool isLocale = __o_isLocale.Default(false);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_235_getSparrowAtlas)
HXDLIN( 235)		if (isLocale) {
HXLINE( 237)			if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + key) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 238)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(key,library,isLocale);
HXDLIN( 238)				return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + key) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            			}
            			else {
HXLINE( 240)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(key,library,isLocale);
HXDLIN( 240)				return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
            		}
            		else {
HXLINE( 243)			 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(key,library,null());
HXDLIN( 243)			return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            		}
HXLINE( 235)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,getSparrowAtlas,return )

 ::flixel::graphics::frames::FlxAtlasFrames Paths_obj::getPackerAtlas(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_248_getPackerAtlas)
HXDLIN( 248)		 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(key,library,null());
HXDLIN( 248)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getPackerAtlas,return )


Paths_obj::Paths_obj()
{
}

bool Paths_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lua") ) { outValue = lua_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"txt") ) { outValue = txt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"xml") ) { outValue = xml_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { outValue = file_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"json") ) { outValue = json_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"inst") ) { outValue = inst_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"font") ) { outValue = font_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { outValue = sound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"music") ) { outValue = music_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"image") ) { outValue = image_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"voices") ) { outValue = voices_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"luaImage") ) { outValue = luaImage_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadImage") ) { outValue = loadImage_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"soundRandom") ) { outValue = soundRandom_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentLevel") ) { outValue = ( currentLevel ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getLibraryPath") ) { outValue = getLibraryPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPreloadPath") ) { outValue = getPreloadPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPackerAtlas") ) { outValue = getPackerAtlas_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setCurrentLevel") ) { outValue = setCurrentLevel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSparrowAtlas") ) { outValue = getSparrowAtlas_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"listSongsToCache") ) { outValue = listSongsToCache_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"listAudioToCache") ) { outValue = listAudioToCache_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getLibraryPathForce") ) { outValue = getLibraryPathForce_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"doesSoundAssetExist") ) { outValue = doesSoundAssetExist_dyn(); return true; }
	}
	return false;
}

bool Paths_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"currentLevel") ) { currentLevel=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Paths_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Paths_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Paths_obj::SOUND_EXT,HX_("SOUND_EXT",b1,35,8c,6f)},
	{::hx::fsString,(void *) &Paths_obj::currentLevel,HX_("currentLevel",8b,fa,6e,b9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Paths_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Paths_obj::SOUND_EXT,"SOUND_EXT");
	HX_MARK_MEMBER_NAME(Paths_obj::currentLevel,"currentLevel");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Paths_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Paths_obj::SOUND_EXT,"SOUND_EXT");
	HX_VISIT_MEMBER_NAME(Paths_obj::currentLevel,"currentLevel");
};

#endif

::hx::Class Paths_obj::__mClass;

static ::String Paths_obj_sStaticFields[] = {
	HX_("SOUND_EXT",b1,35,8c,6f),
	HX_("currentLevel",8b,fa,6e,b9),
	HX_("setCurrentLevel",4d,cd,24,d8),
	HX_("getPath",5b,95,d4,1c),
	HX_("getLibraryPath",4a,25,d8,33),
	HX_("getLibraryPathForce",41,90,ac,3f),
	HX_("getPreloadPath",18,c5,46,7e),
	HX_("file",7c,ce,bb,43),
	HX_("lua",b8,59,52,00),
	HX_("luaImage",83,fa,cb,3b),
	HX_("txt",70,6e,58,00),
	HX_("xml",d7,6d,5b,00),
	HX_("json",28,42,68,46),
	HX_("sound",cf,8c,cc,80),
	HX_("soundRandom",32,28,bc,6a),
	HX_("music",a5,d0,5a,10),
	HX_("voices",81,d6,49,5d),
	HX_("inst",c6,43,bb,45),
	HX_("listSongsToCache",e7,50,d0,6f),
	HX_("listAudioToCache",0f,7a,c1,13),
	HX_("doesSoundAssetExist",9d,63,c6,60),
	HX_("loadImage",55,6b,a0,d8),
	HX_("image",5b,1f,69,bd),
	HX_("font",cf,5d,c0,43),
	HX_("getSparrowAtlas",55,ab,b7,a7),
	HX_("getPackerAtlas",ef,b2,47,f7),
	::String(null())
};

void Paths_obj::__register()
{
	Paths_obj _hx_dummy;
	Paths_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Paths",0e,7b,84,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Paths_obj::__GetStatic;
	__mClass->mSetStaticField = &Paths_obj::__SetStatic;
	__mClass->mMarkFunc = Paths_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Paths_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Paths_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Paths_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Paths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Paths_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Paths_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_11_boot)
HXDLIN(  11)		SOUND_EXT = HX_("ogg",4f,94,54,00);
            	}
}

