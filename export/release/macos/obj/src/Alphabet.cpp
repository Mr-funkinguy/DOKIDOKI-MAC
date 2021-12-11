#include <hxcpp.h>

#ifndef INCLUDED_AlphaCharacter
#include <AlphaCharacter.h>
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
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
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4c95a0630eaf1443_16_new,"Alphabet","new",0xc4ae3f45,"Alphabet.new","Alphabet.hx",16,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_66_addText,"Alphabet","addText",0x712354d3,"Alphabet.addText","Alphabet.hx",66,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_116_doSplitWords,"Alphabet","doSplitWords",0x060ce215,"Alphabet.doSplitWords","Alphabet.hx",116,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_134_startTypedText,"Alphabet","startTypedText",0x740816b0,"Alphabet.startTypedText","Alphabet.hx",134,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_122_startTypedText,"Alphabet","startTypedText",0x740816b0,"Alphabet.startTypedText","Alphabet.hx",122,0xc2e40fcb)
static const int _hx_array_data_faea38d3_6[] = {
	(int)0,
};
static const Float _hx_array_data_faea38d3_7[] = {
	(Float)0,
};
static const int _hx_array_data_faea38d3_8[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_223_update,"Alphabet","update",0xc3c1b444,"Alphabet.update","Alphabet.hx",223,0xc2e40fcb)

void Alphabet_obj::__construct(Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed){
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            		 ::Dynamic bold = __o_bold;
            		if (::hx::IsNull(__o_bold)) bold = false;
            		bool typed = __o_typed.Default(false);
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_16_new)
HXLINE( 119)		this->personTalking = HX_("gf",1f,5a,00,00);
HXLINE(  42)		this->isBold = false;
HXLINE(  40)		this->splitWords = ::Array_obj< ::String >::__new(0);
HXLINE(  38)		this->lastWasSpace = false;
HXLINE(  37)		this->xPosResetted = false;
HXLINE(  32)		this->yMulti = ((Float)1);
HXLINE(  30)		this->widthOfWords = ( (Float)(::flixel::FlxG_obj::width) );
HXLINE(  28)		this->_curText = HX_("",00,00,00,00);
HXLINE(  27)		this->_finalText = HX_("",00,00,00,00);
HXLINE(  25)		this->text = HX_("",00,00,00,00);
HXLINE(  23)		this->isMenuItem = false;
HXLINE(  22)		this->targetY = ((Float)0);
HXLINE(  19)		this->paused = false;
HXLINE(  18)		this->delay = ((Float)0.05);
HXLINE(  46)		super::__construct(x,y,null());
HXLINE(  48)		this->_finalText = text;
HXLINE(  49)		this->text = text;
HXLINE(  50)		this->isBold = ( (bool)(bold) );
HXLINE(  52)		if ((text != HX_("",00,00,00,00))) {
HXLINE(  54)			if (typed) {
HXLINE(  56)				this->startTypedText();
            			}
            			else {
HXLINE(  60)				this->addText();
            			}
            		}
            	}

Dynamic Alphabet_obj::__CreateEmpty() { return new Alphabet_obj; }

void *Alphabet_obj::_hx_vtable = 0;

Dynamic Alphabet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Alphabet_obj > _hx_result = new Alphabet_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Alphabet_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x567b2b93) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x567b2b93;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Alphabet_obj::addText(){
            	HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_66_addText)
HXLINE(  67)		this->doSplitWords();
HXLINE(  69)		Float xPos = ( (Float)(0) );
HXLINE(  70)		{
HXLINE(  70)			int _g = 0;
HXDLIN(  70)			::Array< ::String > _g1 = this->splitWords;
HXDLIN(  70)			while((_g < _g1->length)){
HXLINE(  70)				::String character = _g1->__get(_g);
HXDLIN(  70)				_g = (_g + 1);
HXLINE(  76)				bool _hx_tmp;
HXDLIN(  76)				if ((character != HX_(" ",20,00,00,00))) {
HXLINE(  76)					_hx_tmp = (character == HX_("-",2d,00,00,00));
            				}
            				else {
HXLINE(  76)					_hx_tmp = true;
            				}
HXDLIN(  76)				if (_hx_tmp) {
HXLINE(  78)					this->lastWasSpace = true;
            				}
HXLINE(  81)				::String _hx_tmp1 = ::AlphaCharacter_obj::alphabet;
HXDLIN(  81)				if ((_hx_tmp1.indexOf(character.toLowerCase(),null()) != -1)) {
HXLINE(  84)					if (::hx::IsNotNull( this->lastSprite )) {
HXLINE(  86)						Float xPos1 = this->lastSprite->x;
HXDLIN(  86)						xPos = (xPos1 + this->lastSprite->get_width());
            					}
HXLINE(  89)					if (this->lastWasSpace) {
HXLINE(  91)						xPos = (xPos + 40);
HXLINE(  92)						this->lastWasSpace = false;
            					}
HXLINE(  96)					 ::AlphaCharacter letter =  ::AlphaCharacter_obj::__alloc( HX_CTX ,xPos,( (Float)(0) ));
HXLINE(  98)					if (this->isBold) {
HXLINE(  99)						letter->createBold(character);
            					}
            					else {
HXLINE( 102)						letter->createLetter(character);
            					}
HXLINE( 105)					this->add(letter);
HXLINE( 107)					this->lastSprite = letter;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,addText,(void))

void Alphabet_obj::doSplitWords(){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_116_doSplitWords)
HXDLIN( 116)		this->splitWords = this->_finalText.split(HX_("",00,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,doSplitWords,(void))

void Alphabet_obj::startTypedText(){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::Alphabet,_gthis,::Array< Float >,xPos,::Array< int >,loopNum,::Array< int >,curRow) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_134_startTypedText)
HXLINE( 136)			if ((_gthis->_finalText.cca(loopNum->__get(0)) == 10)) {
HXLINE( 138)				 ::Alphabet _gthis1 = _gthis;
HXDLIN( 138)				_gthis1->yMulti = (_gthis1->yMulti + 1);
HXLINE( 139)				_gthis->xPosResetted = true;
HXLINE( 140)				xPos[0] = ( (Float)(0) );
HXLINE( 141)				::Array< int > curRow1 = curRow;
HXDLIN( 141)				int _hx_tmp = 0;
HXDLIN( 141)				curRow1[_hx_tmp] = (curRow1->__get(_hx_tmp) + 1);
            			}
HXLINE( 144)			if ((_gthis->splitWords->__get(loopNum->__get(0)) == HX_(" ",20,00,00,00))) {
HXLINE( 146)				_gthis->lastWasSpace = true;
            			}
HXLINE( 150)			bool isNumber = (::AlphaCharacter_obj::numbers.indexOf(_gthis->splitWords->__get(loopNum->__get(0)),null()) != -1);
HXLINE( 151)			bool isSymbol = (::AlphaCharacter_obj::symbols.indexOf(_gthis->splitWords->__get(loopNum->__get(0)),null()) != -1);
HXLINE( 157)			bool _hx_tmp;
HXDLIN( 157)			bool _hx_tmp1;
HXDLIN( 157)			::String _hx_tmp2 = ::AlphaCharacter_obj::alphabet;
HXDLIN( 157)			if ((_hx_tmp2.indexOf(_gthis->splitWords->__get(loopNum->__get(0)).toLowerCase(),null()) == -1)) {
HXLINE( 157)				_hx_tmp1 = isNumber;
            			}
            			else {
HXLINE( 157)				_hx_tmp1 = true;
            			}
HXDLIN( 157)			if (!(_hx_tmp1)) {
HXLINE( 157)				_hx_tmp = isSymbol;
            			}
            			else {
HXLINE( 157)				_hx_tmp = true;
            			}
HXDLIN( 157)			if (_hx_tmp) {
HXLINE( 161)				bool _hx_tmp;
HXDLIN( 161)				if (::hx::IsNotNull( _gthis->lastSprite )) {
HXLINE( 161)					_hx_tmp = !(_gthis->xPosResetted);
            				}
            				else {
HXLINE( 161)					_hx_tmp = false;
            				}
HXDLIN( 161)				if (_hx_tmp) {
HXLINE( 163)					_gthis->lastSprite->updateHitbox();
HXLINE( 164)					::Array< Float > xPos1 = xPos;
HXDLIN( 164)					int _hx_tmp = 0;
HXDLIN( 164)					Float xPos2 = xPos1->__get(_hx_tmp);
HXDLIN( 164)					xPos1[_hx_tmp] = (xPos2 + (_gthis->lastSprite->get_width() + 3));
            				}
            				else {
HXLINE( 170)					_gthis->xPosResetted = false;
            				}
HXLINE( 173)				if (_gthis->lastWasSpace) {
HXLINE( 175)					::Array< Float > xPos1 = xPos;
HXDLIN( 175)					int _hx_tmp = 0;
HXDLIN( 175)					xPos1[_hx_tmp] = (xPos1->__get(_hx_tmp) + 20);
HXLINE( 176)					_gthis->lastWasSpace = false;
            				}
HXLINE( 181)				 ::AlphaCharacter letter =  ::AlphaCharacter_obj::__alloc( HX_CTX ,xPos->__get(0),(( (Float)(55) ) * _gthis->yMulti));
HXLINE( 182)				letter->row = curRow->__get(0);
HXLINE( 183)				if (_gthis->isBold) {
HXLINE( 185)					letter->createBold(_gthis->splitWords->__get(loopNum->__get(0)));
            				}
            				else {
HXLINE( 189)					if (isNumber) {
HXLINE( 191)						letter->createNumber(_gthis->splitWords->__get(loopNum->__get(0)));
            					}
            					else {
HXLINE( 193)						if (isSymbol) {
HXLINE( 195)							letter->createSymbol(_gthis->splitWords->__get(loopNum->__get(0)));
            						}
            						else {
HXLINE( 199)							letter->createLetter(_gthis->splitWords->__get(loopNum->__get(0)));
            						}
            					}
HXLINE( 202)					letter->set_x((letter->x + 90));
            				}
HXLINE( 205)				if ((::flixel::FlxG_obj::random->_hx_float(0,100,null()) < 40)) {
HXLINE( 207)					::String daSound = HX_("GF_",60,1d,36,00);
HXLINE( 208)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 208)					::String library = null();
HXDLIN( 208)					_hx_tmp->play(::Paths_obj::sound((daSound + ::flixel::FlxG_obj::random->_hx_int(1,4,null())),library),null(),null(),null(),null(),null());
            				}
HXLINE( 211)				_gthis->add(letter).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 213)				_gthis->lastSprite = letter;
            			}
HXLINE( 216)			::Array< int > loopNum1 = loopNum;
HXDLIN( 216)			int _hx_tmp3 = 0;
HXDLIN( 216)			loopNum1[_hx_tmp3] = (loopNum1->__get(_hx_tmp3) + 1);
HXLINE( 218)			tmr->time = ::flixel::FlxG_obj::random->_hx_float(((Float)0.04),((Float)0.09),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_122_startTypedText)
HXDLIN( 122)		 ::Alphabet _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 123)		this->_finalText = this->text;
HXLINE( 124)		this->doSplitWords();
HXLINE( 128)		::Array< int > loopNum = ::Array_obj< int >::fromData( _hx_array_data_faea38d3_6,1);
HXLINE( 130)		::Array< Float > xPos = ::Array_obj< Float >::fromData( _hx_array_data_faea38d3_7,1);
HXLINE( 131)		::Array< int > curRow = ::Array_obj< int >::fromData( _hx_array_data_faea38d3_8,1);
HXLINE( 133)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.05), ::Dynamic(new _hx_Closure_0(_gthis,xPos,loopNum,curRow)),this->splitWords->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,startTypedText,(void))

void Alphabet_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_223_update)
HXLINE( 224)		if (this->isMenuItem) {
HXLINE( 226)			Float scaledY = ::flixel::math::FlxMath_obj::remapToRange(this->targetY,( (Float)(0) ),( (Float)(1) ),( (Float)(0) ),((Float)1.3));
HXLINE( 228)			Float a = this->y;
HXDLIN( 228)			this->set_y((a + (((Float)0.30) * (((scaledY * ( (Float)(120) )) + (( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.48))) - a))));
HXLINE( 229)			Float a1 = this->x;
HXDLIN( 229)			this->set_x((a1 + (((Float)0.30) * (((this->targetY * ( (Float)(20) )) + 90) - a1))));
            		}
HXLINE( 232)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< Alphabet_obj > Alphabet_obj::__new(Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed) {
	::hx::ObjectPtr< Alphabet_obj > __this = new Alphabet_obj();
	__this->__construct(x,y,__o_text,__o_bold,__o_typed);
	return __this;
}

::hx::ObjectPtr< Alphabet_obj > Alphabet_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed) {
	Alphabet_obj *__this = (Alphabet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Alphabet_obj), true, "Alphabet"));
	*(void **)__this = Alphabet_obj::_hx_vtable;
	__this->__construct(x,y,__o_text,__o_bold,__o_typed);
	return __this;
}

Alphabet_obj::Alphabet_obj()
{
}

void Alphabet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Alphabet);
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(targetY,"targetY");
	HX_MARK_MEMBER_NAME(isMenuItem,"isMenuItem");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(_finalText,"_finalText");
	HX_MARK_MEMBER_NAME(_curText,"_curText");
	HX_MARK_MEMBER_NAME(widthOfWords,"widthOfWords");
	HX_MARK_MEMBER_NAME(yMulti,"yMulti");
	HX_MARK_MEMBER_NAME(lastSprite,"lastSprite");
	HX_MARK_MEMBER_NAME(xPosResetted,"xPosResetted");
	HX_MARK_MEMBER_NAME(lastWasSpace,"lastWasSpace");
	HX_MARK_MEMBER_NAME(splitWords,"splitWords");
	HX_MARK_MEMBER_NAME(isBold,"isBold");
	HX_MARK_MEMBER_NAME(personTalking,"personTalking");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Alphabet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(targetY,"targetY");
	HX_VISIT_MEMBER_NAME(isMenuItem,"isMenuItem");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(_finalText,"_finalText");
	HX_VISIT_MEMBER_NAME(_curText,"_curText");
	HX_VISIT_MEMBER_NAME(widthOfWords,"widthOfWords");
	HX_VISIT_MEMBER_NAME(yMulti,"yMulti");
	HX_VISIT_MEMBER_NAME(lastSprite,"lastSprite");
	HX_VISIT_MEMBER_NAME(xPosResetted,"xPosResetted");
	HX_VISIT_MEMBER_NAME(lastWasSpace,"lastWasSpace");
	HX_VISIT_MEMBER_NAME(splitWords,"splitWords");
	HX_VISIT_MEMBER_NAME(isBold,"isBold");
	HX_VISIT_MEMBER_NAME(personTalking,"personTalking");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Alphabet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return ::hx::Val( paused ); }
		if (HX_FIELD_EQ(inName,"yMulti") ) { return ::hx::Val( yMulti ); }
		if (HX_FIELD_EQ(inName,"isBold") ) { return ::hx::Val( isBold ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { return ::hx::Val( targetY ); }
		if (HX_FIELD_EQ(inName,"addText") ) { return ::hx::Val( addText_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_curText") ) { return ::hx::Val( _curText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isMenuItem") ) { return ::hx::Val( isMenuItem ); }
		if (HX_FIELD_EQ(inName,"_finalText") ) { return ::hx::Val( _finalText ); }
		if (HX_FIELD_EQ(inName,"lastSprite") ) { return ::hx::Val( lastSprite ); }
		if (HX_FIELD_EQ(inName,"splitWords") ) { return ::hx::Val( splitWords ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthOfWords") ) { return ::hx::Val( widthOfWords ); }
		if (HX_FIELD_EQ(inName,"xPosResetted") ) { return ::hx::Val( xPosResetted ); }
		if (HX_FIELD_EQ(inName,"lastWasSpace") ) { return ::hx::Val( lastWasSpace ); }
		if (HX_FIELD_EQ(inName,"doSplitWords") ) { return ::hx::Val( doSplitWords_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"personTalking") ) { return ::hx::Val( personTalking ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"startTypedText") ) { return ::hx::Val( startTypedText_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Alphabet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yMulti") ) { yMulti=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isBold") ) { isBold=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { targetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_curText") ) { _curText=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isMenuItem") ) { isMenuItem=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_finalText") ) { _finalText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastSprite") ) { lastSprite=inValue.Cast<  ::AlphaCharacter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"splitWords") ) { splitWords=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthOfWords") ) { widthOfWords=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xPosResetted") ) { xPosResetted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastWasSpace") ) { lastWasSpace=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"personTalking") ) { personTalking=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Alphabet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("paused",ae,40,84,ef));
	outFields->push(HX_("targetY",e8,f3,67,88));
	outFields->push(HX_("isMenuItem",5c,04,de,c6));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("_finalText",04,c7,73,eb));
	outFields->push(HX_("_curText",ce,97,c7,f1));
	outFields->push(HX_("widthOfWords",6c,29,47,59));
	outFields->push(HX_("yMulti",40,a3,b1,04));
	outFields->push(HX_("lastSprite",fb,be,70,8e));
	outFields->push(HX_("xPosResetted",80,a7,a1,63));
	outFields->push(HX_("lastWasSpace",53,93,45,c9));
	outFields->push(HX_("splitWords",2f,7e,9f,9d));
	outFields->push(HX_("isBold",8f,46,82,5e));
	outFields->push(HX_("personTalking",21,d4,8f,27));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Alphabet_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,paused),HX_("paused",ae,40,84,ef)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,targetY),HX_("targetY",e8,f3,67,88)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,isMenuItem),HX_("isMenuItem",5c,04,de,c6)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,_finalText),HX_("_finalText",04,c7,73,eb)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,_curText),HX_("_curText",ce,97,c7,f1)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,widthOfWords),HX_("widthOfWords",6c,29,47,59)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,yMulti),HX_("yMulti",40,a3,b1,04)},
	{::hx::fsObject /*  ::AlphaCharacter */ ,(int)offsetof(Alphabet_obj,lastSprite),HX_("lastSprite",fb,be,70,8e)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,xPosResetted),HX_("xPosResetted",80,a7,a1,63)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,lastWasSpace),HX_("lastWasSpace",53,93,45,c9)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Alphabet_obj,splitWords),HX_("splitWords",2f,7e,9f,9d)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,isBold),HX_("isBold",8f,46,82,5e)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,personTalking),HX_("personTalking",21,d4,8f,27)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Alphabet_obj_sStaticStorageInfo = 0;
#endif

static ::String Alphabet_obj_sMemberFields[] = {
	HX_("delay",83,d7,26,d7),
	HX_("paused",ae,40,84,ef),
	HX_("targetY",e8,f3,67,88),
	HX_("isMenuItem",5c,04,de,c6),
	HX_("text",ad,cc,f9,4c),
	HX_("_finalText",04,c7,73,eb),
	HX_("_curText",ce,97,c7,f1),
	HX_("widthOfWords",6c,29,47,59),
	HX_("yMulti",40,a3,b1,04),
	HX_("lastSprite",fb,be,70,8e),
	HX_("xPosResetted",80,a7,a1,63),
	HX_("lastWasSpace",53,93,45,c9),
	HX_("splitWords",2f,7e,9f,9d),
	HX_("isBold",8f,46,82,5e),
	HX_("addText",6e,0f,37,89),
	HX_("doSplitWords",9a,d5,87,23),
	HX_("personTalking",21,d4,8f,27),
	HX_("startTypedText",75,b5,ca,1c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class Alphabet_obj::__mClass;

void Alphabet_obj::__register()
{
	Alphabet_obj _hx_dummy;
	Alphabet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Alphabet",d3,38,ea,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Alphabet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Alphabet_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Alphabet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Alphabet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

