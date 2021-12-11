#include <hxcpp.h>

#ifndef INCLUDED_IntIterator
#include <IntIterator.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hscript_CType
#include <hscript/CType.h>
#endif
#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript__Interp_Stop
#include <hscript/_Interp/Stop.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f37559d470356c9e_53_new,"hscript.Interp","new",0xf7e71101,"hscript.Interp.new","hscript/Interp.hx",53,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_64_resetVariables,"hscript.Interp","resetVariables",0x6cebf7e7,"hscript.Interp.resetVariables","hscript/Interp.hx",64,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_74_resetVariables,"hscript.Interp","resetVariables",0x6cebf7e7,"hscript.Interp.resetVariables","hscript/Interp.hx",74,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_87_posInfos,"hscript.Interp","posInfos",0x444859d0,"hscript.Interp.posInfos","hscript/Interp.hx",87,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_97_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",97,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_98_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",98,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_99_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",99,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_100_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",100,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_101_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",101,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_102_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",102,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_103_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",103,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_104_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",104,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_105_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",105,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_106_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",106,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_107_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",107,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_108_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",108,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_109_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",109,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_110_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",110,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_111_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",111,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_112_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",112,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_113_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",113,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_114_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",114,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_115_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",115,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_117_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",117,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_118_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",118,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_119_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",119,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_120_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",120,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_121_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",121,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_122_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",122,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_123_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",123,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_124_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",124,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_125_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",125,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_126_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",126,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_127_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",127,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_128_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",128,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_90_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",90,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_131_assign,"hscript.Interp","assign",0xca66602e,"hscript.Interp.assign","hscript/Interp.hx",131,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_160_assignOp,"hscript.Interp","assignOp",0xf8e18cef,"hscript.Interp.assignOp","hscript/Interp.hx",160,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_158_assignOp,"hscript.Interp","assignOp",0xf8e18cef,"hscript.Interp.assignOp","hscript/Interp.hx",158,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_163_evalAssignOp,"hscript.Interp","evalAssignOp",0xa46efc2b,"hscript.Interp.evalAssignOp","hscript/Interp.hx",163,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_199_increment,"hscript.Interp","increment",0x1e81f590,"hscript.Interp.increment","hscript/Interp.hx",199,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_246_execute,"hscript.Interp","execute",0xe1c3af56,"hscript.Interp.execute","hscript/Interp.hx",246,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_258_exprReturn,"hscript.Interp","exprReturn",0x8cfbf144,"hscript.Interp.exprReturn","hscript/Interp.hx",258,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_273_duplicate,"hscript.Interp","duplicate",0x8d9a10ec,"hscript.Interp.duplicate","hscript/Interp.hx",273,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_285_restore,"hscript.Interp","restore",0x80670c6f,"hscript.Interp.restore","hscript/Interp.hx",285,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_293_error,"hscript.Interp","error",0xe68736a9,"hscript.Interp.error","hscript/Interp.hx",293,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_301_rethrow,"hscript.Interp","rethrow",0x0be155b4,"hscript.Interp.rethrow","hscript/Interp.hx",301,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_305_resolve,"hscript.Interp","resolve",0x7d16b80d,"hscript.Interp.resolve","hscript/Interp.hx",305,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_315_expr,"hscript.Interp","expr",0xec634974,"hscript.Interp.expr","hscript/Interp.hx",315,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_410_expr,"hscript.Interp","expr",0xec634974,"hscript.Interp.expr","hscript/Interp.hx",410,0xf078416e)
static const int _hx_array_data_9af07c8f_65[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_583_doWhileLoop,"hscript.Interp","doWhileLoop",0x813d4b4b,"hscript.Interp.doWhileLoop","hscript/Interp.hx",583,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_600_whileLoop,"hscript.Interp","whileLoop",0xce1b3216,"hscript.Interp.whileLoop","hscript/Interp.hx",600,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_616_makeIterator,"hscript.Interp","makeIterator",0x634d013b,"hscript.Interp.makeIterator","hscript/Interp.hx",616,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_626_forLoop,"hscript.Interp","forLoop",0xdf1ff72e,"hscript.Interp.forLoop","hscript/Interp.hx",626,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_646_isMap,"hscript.Interp","isMap",0x34ae9fb3,"hscript.Interp.isMap","hscript/Interp.hx",646,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_650_getMapValue,"hscript.Interp","getMapValue",0x1594fb8c,"hscript.Interp.getMapValue","hscript/Interp.hx",650,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_654_setMapValue,"hscript.Interp","setMapValue",0x20020298,"hscript.Interp.setMapValue","hscript/Interp.hx",654,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_657_get,"hscript.Interp","get",0xf7e1c137,"hscript.Interp.get","hscript/Interp.hx",657,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_673_set,"hscript.Interp","set",0xf7eadc43,"hscript.Interp.set","hscript/Interp.hx",673,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_680_fcall,"hscript.Interp","fcall",0x6ff6aee5,"hscript.Interp.fcall","hscript/Interp.hx",680,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_684_call,"hscript.Interp","call",0xeaff64dd,"hscript.Interp.call","hscript/Interp.hx",684,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_687_cnew,"hscript.Interp","cnew",0xeb093c1c,"hscript.Interp.cnew","hscript/Interp.hx",687,0xf078416e)
namespace hscript{

void Interp_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_53_new)
HXLINE(  55)		this->locals =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  59)		this->declared = ::Array_obj< ::Dynamic>::__new();
HXLINE(  60)		this->resetVariables();
HXLINE(  61)		this->initOps();
            	}

Dynamic Interp_obj::__CreateEmpty() { return new Interp_obj; }

void *Interp_obj::_hx_vtable = 0;

Dynamic Interp_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Interp_obj > _hx_result = new Interp_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Interp_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2a95eb9f;
}

void Interp_obj::resetVariables(){
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_64_resetVariables)
HXDLIN(  64)		 ::hscript::Interp _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  66)		this->variables =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  71)		{
HXLINE(  71)			 ::Dynamic value = null();
HXDLIN(  71)			this->variables->set(HX_("null",87,9e,0e,49),value);
            		}
HXLINE(  72)		this->variables->set(HX_("true",4e,a7,03,4d),true);
HXLINE(  73)		this->variables->set(HX_("false",a3,35,4f,fb),false);
HXLINE(  74)		{
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::hscript::Interp,_gthis) HXARGC(1)
            			void _hx_run(::cpp::VirtualArray el){
            				HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_74_resetVariables)
HXLINE(  75)				 ::Dynamic inf = _gthis->posInfos();
HXLINE(  76)				 ::Dynamic v = el->shift();
HXLINE(  77)				if ((el->get_length() > 0)) {
HXLINE(  77)					inf->__SetField(HX_("customParams",d7,51,18,ed),el,::hx::paccDynamic);
            				}
HXLINE(  78)				 ::Dynamic value = ::haxe::Log_obj::trace;
HXDLIN(  78)				value(::Std_obj::string(v),inf);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  74)			::Dynamic this1 = this->variables;
HXDLIN(  74)			( ( ::haxe::ds::StringMap)(this1) )->set(HX_("trace",85,8e,1f,16),::Reflect_obj::makeVarArgs( ::Dynamic(new _hx_Closure_0(_gthis))));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interp_obj,resetVariables,(void))

 ::Dynamic Interp_obj::posInfos(){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_87_posInfos)
HXDLIN(  87)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fileName",e7,5a,43,62),HX_("hscript",73,8c,18,2c))
            			->setFixed(1,HX_("lineNumber",dd,81,22,76),0));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interp_obj,posInfos,return )

void Interp_obj::initOps(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::hscript::Interp,me) HXARGC(2)
            		 ::Dynamic _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_97_initOps)
HXLINE(  97)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  97)			return (_hx_tmp + me->expr(e2));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::hscript::Interp,me) HXARGC(2)
            		Float _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_98_initOps)
HXLINE(  98)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  98)			return (( (Float)(_hx_tmp) ) - ( (Float)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::hscript::Interp,me) HXARGC(2)
            		Float _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_99_initOps)
HXLINE(  99)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  99)			return (( (Float)(_hx_tmp) ) * ( (Float)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::hscript::Interp,me) HXARGC(2)
            		Float _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_100_initOps)
HXLINE( 100)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 100)			return (( (Float)(_hx_tmp) ) / ( (Float)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_4, ::hscript::Interp,me) HXARGC(2)
            		Float _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_101_initOps)
HXLINE( 101)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 101)			return ::hx::Mod(_hx_tmp,me->expr(e2));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_5, ::hscript::Interp,me) HXARGC(2)
            		int _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_102_initOps)
HXLINE( 102)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 102)			return (( (int)(_hx_tmp) ) & ( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_6, ::hscript::Interp,me) HXARGC(2)
            		int _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_103_initOps)
HXLINE( 103)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 103)			return (( (int)(_hx_tmp) ) | ( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_7, ::hscript::Interp,me) HXARGC(2)
            		int _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_104_initOps)
HXLINE( 104)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 104)			return (( (int)(_hx_tmp) ) ^ ( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_8, ::hscript::Interp,me) HXARGC(2)
            		int _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_105_initOps)
HXLINE( 105)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 105)			return (( (int)(_hx_tmp) ) << ( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_9, ::hscript::Interp,me) HXARGC(2)
            		int _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_106_initOps)
HXLINE( 106)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 106)			return (( (int)(_hx_tmp) ) >> ( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_10, ::hscript::Interp,me) HXARGC(2)
            		int _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_107_initOps)
HXLINE( 107)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 107)			return ::hx::UShr(( (int)(_hx_tmp) ),( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_11, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_108_initOps)
HXLINE( 108)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 108)			return ::hx::IsEq( _hx_tmp,me->expr(e2) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_12, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_109_initOps)
HXLINE( 109)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 109)			return ::hx::IsNotEq( _hx_tmp,me->expr(e2) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_13, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_110_initOps)
HXLINE( 110)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 110)			return ::hx::IsGreaterEq( _hx_tmp,me->expr(e2) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_14, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_111_initOps)
HXLINE( 111)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 111)			return ::hx::IsLessEq( _hx_tmp,me->expr(e2) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_15, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_112_initOps)
HXLINE( 112)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 112)			return ::hx::IsGreater( _hx_tmp,me->expr(e2) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_16, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_113_initOps)
HXLINE( 113)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 113)			return ::hx::IsLess( _hx_tmp,me->expr(e2) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_17, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_114_initOps)
HXLINE( 114)			if (::hx::IsNotEq( me->expr(e1),true )) {
HXLINE( 114)				return ::hx::IsEq( me->expr(e2),true );
            			}
            			else {
HXLINE( 114)				return true;
            			}
HXDLIN( 114)			return false;
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_18, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_115_initOps)
HXLINE( 115)			if (::hx::IsEq( me->expr(e1),true )) {
HXLINE( 115)				return ::hx::IsEq( me->expr(e2),true );
            			}
            			else {
HXLINE( 115)				return false;
            			}
HXDLIN( 115)			return false;
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_19, ::hscript::Interp,me) HXARGC(2)
            		 ::IntIterator _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_117_initOps)
HXLINE( 117)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 117)			return  ::IntIterator_obj::__alloc( HX_CTX ,( (int)(_hx_tmp) ),( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_20) HXARGC(2)
            		 ::Dynamic _hx_run( ::Dynamic v1, ::Dynamic v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_118_initOps)
HXLINE( 118)			return (v1 + v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_21) HXARGC(2)
            		Float _hx_run(Float v1,Float v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_119_initOps)
HXLINE( 119)			return (v1 - v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_22) HXARGC(2)
            		Float _hx_run(Float v1,Float v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_120_initOps)
HXLINE( 120)			return (v1 * v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_23) HXARGC(2)
            		Float _hx_run(Float v1,Float v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_121_initOps)
HXLINE( 121)			return (v1 / v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_24) HXARGC(2)
            		Float _hx_run(Float v1,Float v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_122_initOps)
HXLINE( 122)			return ::hx::Mod(v1,v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_25) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_123_initOps)
HXLINE( 123)			return (v1 & v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_26) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_124_initOps)
HXLINE( 124)			return (v1 | v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_27) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_125_initOps)
HXLINE( 125)			return (v1 ^ v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_28) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_126_initOps)
HXLINE( 126)			return (v1 << v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_29) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_127_initOps)
HXLINE( 127)			return (v1 >> v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_30) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_128_initOps)
HXLINE( 128)			return ::hx::UShr(v1,v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_90_initOps)
HXLINE(  91)		 ::hscript::Interp me = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  93)		this->binops =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  97)		this->binops->set(HX_("+",2b,00,00,00), ::Dynamic(new _hx_Closure_0(me)));
HXLINE(  98)		this->binops->set(HX_("-",2d,00,00,00), ::Dynamic(new _hx_Closure_1(me)));
HXLINE(  99)		this->binops->set(HX_("*",2a,00,00,00), ::Dynamic(new _hx_Closure_2(me)));
HXLINE( 100)		this->binops->set(HX_("/",2f,00,00,00), ::Dynamic(new _hx_Closure_3(me)));
HXLINE( 101)		this->binops->set(HX_("%",25,00,00,00), ::Dynamic(new _hx_Closure_4(me)));
HXLINE( 102)		this->binops->set(HX_("&",26,00,00,00), ::Dynamic(new _hx_Closure_5(me)));
HXLINE( 103)		this->binops->set(HX_("|",7c,00,00,00), ::Dynamic(new _hx_Closure_6(me)));
HXLINE( 104)		this->binops->set(HX_("^",5e,00,00,00), ::Dynamic(new _hx_Closure_7(me)));
HXLINE( 105)		this->binops->set(HX_("<<",80,34,00,00), ::Dynamic(new _hx_Closure_8(me)));
HXLINE( 106)		this->binops->set(HX_(">>",40,36,00,00), ::Dynamic(new _hx_Closure_9(me)));
HXLINE( 107)		this->binops->set(HX_(">>>",fe,41,2f,00), ::Dynamic(new _hx_Closure_10(me)));
HXLINE( 108)		this->binops->set(HX_("==",60,35,00,00), ::Dynamic(new _hx_Closure_11(me)));
HXLINE( 109)		this->binops->set(HX_("!=",fc,1c,00,00), ::Dynamic(new _hx_Closure_12(me)));
HXLINE( 110)		this->binops->set(HX_(">=",3f,36,00,00), ::Dynamic(new _hx_Closure_13(me)));
HXLINE( 111)		this->binops->set(HX_("<=",81,34,00,00), ::Dynamic(new _hx_Closure_14(me)));
HXLINE( 112)		this->binops->set(HX_(">",3e,00,00,00), ::Dynamic(new _hx_Closure_15(me)));
HXLINE( 113)		this->binops->set(HX_("<",3c,00,00,00), ::Dynamic(new _hx_Closure_16(me)));
HXLINE( 114)		this->binops->set(HX_("||",80,6c,00,00), ::Dynamic(new _hx_Closure_17(me)));
HXLINE( 115)		this->binops->set(HX_("&&",40,21,00,00), ::Dynamic(new _hx_Closure_18(me)));
HXLINE( 116)		this->binops->set(HX_("=",3d,00,00,00),this->assign_dyn());
HXLINE( 117)		this->binops->set(HX_("...",ee,0f,23,00), ::Dynamic(new _hx_Closure_19(me)));
HXLINE( 118)		this->assignOp(HX_("+=",b2,25,00,00), ::Dynamic(new _hx_Closure_20()));
HXLINE( 119)		this->assignOp(HX_("-=",70,27,00,00), ::Dynamic(new _hx_Closure_21()));
HXLINE( 120)		this->assignOp(HX_("*=",d3,24,00,00), ::Dynamic(new _hx_Closure_22()));
HXLINE( 121)		this->assignOp(HX_("/=",2e,29,00,00), ::Dynamic(new _hx_Closure_23()));
HXLINE( 122)		this->assignOp(HX_("%=",78,20,00,00), ::Dynamic(new _hx_Closure_24()));
HXLINE( 123)		this->assignOp(HX_("&=",57,21,00,00), ::Dynamic(new _hx_Closure_25()));
HXLINE( 124)		this->assignOp(HX_("|=",41,6c,00,00), ::Dynamic(new _hx_Closure_26()));
HXLINE( 125)		this->assignOp(HX_("^=",1f,52,00,00), ::Dynamic(new _hx_Closure_27()));
HXLINE( 126)		this->assignOp(HX_("<<=",bd,bb,2d,00), ::Dynamic(new _hx_Closure_28()));
HXLINE( 127)		this->assignOp(HX_(">>=",fd,41,2f,00), ::Dynamic(new _hx_Closure_29()));
HXLINE( 128)		this->assignOp(HX_(">>>=",7f,7c,2a,29), ::Dynamic(new _hx_Closure_30()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interp_obj,initOps,(void))

 ::Dynamic Interp_obj::assign( ::hscript::Expr e1, ::hscript::Expr e2){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_131_assign)
HXLINE( 132)		 ::Dynamic v = this->expr(e2);
HXLINE( 133)		switch((int)(e1->_hx_getIndex())){
            			case (int)1: {
HXLINE( 134)				::String id = e1->_hx_getString(0);
HXDLIN( 134)				{
HXLINE( 135)					 ::Dynamic l = this->locals->get(id);
HXLINE( 136)					if (::hx::IsNull( l )) {
HXLINE( 137)						this->variables->set(id,v);
            					}
            					else {
HXLINE( 139)						l->__SetField(HX_("r",72,00,00,00),v,::hx::paccDynamic);
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 140)				 ::hscript::Expr e = e1->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 140)				::String f = e1->_hx_getString(1);
HXLINE( 141)				v = this->set(this->expr(e),f,v);
            			}
            			break;
            			case (int)16: {
HXLINE( 142)				 ::hscript::Expr e = e1->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 142)				 ::hscript::Expr index = e1->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 142)				{
HXLINE( 143)					 ::Dynamic arr = this->expr(e);
HXLINE( 144)					 ::Dynamic index1 = this->expr(index);
HXLINE( 145)					if (::Std_obj::isOfType(arr,( ( ::Dynamic)(::hx::ClassOf< ::haxe::IMap >()) ))) {
HXLINE( 146)						::haxe::IMap_obj::set( ::hx::interface_check(arr,0x09c2bd39),index1,v);
            					}
            					else {
HXLINE( 149)						arr->__SetItem(( (int)(index1) ),v);
            					}
            				}
            			}
            			break;
            			default:{
HXLINE( 153)				 ::hscript::Error e = ::hscript::Error_obj::EInvalidOp(HX_("=",3d,00,00,00));
HXDLIN( 153)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            			}
            		}
HXLINE( 155)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,assign,return )

void Interp_obj::assignOp(::String op, ::Dynamic fop){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::String,op, ::hscript::Interp,me, ::Dynamic,fop) HXARGC(2)
            		 ::Dynamic _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_STACKFRAME(&_hx_pos_f37559d470356c9e_160_assignOp)
HXLINE( 160)			return me->evalAssignOp(op,fop,e1,e2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_158_assignOp)
HXLINE( 159)		 ::hscript::Interp me = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 160)		this->binops->set(op, ::Dynamic(new _hx_Closure_0(op,me,fop)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,assignOp,(void))

 ::Dynamic Interp_obj::evalAssignOp(::String op, ::Dynamic fop, ::hscript::Expr e1, ::hscript::Expr e2){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_163_evalAssignOp)
HXLINE( 164)		 ::Dynamic v;
HXLINE( 165)		switch((int)(e1->_hx_getIndex())){
            			case (int)1: {
HXLINE( 166)				::String id = e1->_hx_getString(0);
HXDLIN( 166)				{
HXLINE( 167)					 ::Dynamic l = this->locals->get(id);
HXLINE( 168)					 ::Dynamic v1 = this->expr(e1);
HXDLIN( 168)					v = fop(v1,this->expr(e2));
HXLINE( 169)					if (::hx::IsNull( l )) {
HXLINE( 170)						this->variables->set(id,v);
            					}
            					else {
HXLINE( 172)						l->__SetField(HX_("r",72,00,00,00),v,::hx::paccDynamic);
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 173)				 ::hscript::Expr e = e1->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 173)				::String f = e1->_hx_getString(1);
HXDLIN( 173)				{
HXLINE( 174)					 ::Dynamic obj = this->expr(e);
HXLINE( 175)					 ::Dynamic v1 = this->get(obj,f);
HXDLIN( 175)					v = fop(v1,this->expr(e2));
HXLINE( 176)					v = this->set(obj,f,v);
            				}
            			}
            			break;
            			case (int)16: {
HXLINE( 177)				 ::hscript::Expr e = e1->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 177)				 ::hscript::Expr index = e1->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 177)				{
HXLINE( 178)					 ::Dynamic arr = this->expr(e);
HXLINE( 179)					 ::Dynamic index1 = this->expr(index);
HXLINE( 180)					if (::Std_obj::isOfType(arr,( ( ::Dynamic)(::hx::ClassOf< ::haxe::IMap >()) ))) {
HXLINE( 181)						 ::Dynamic v1 = ::haxe::IMap_obj::get( ::hx::interface_check(arr,0x09c2bd39),index1);
HXDLIN( 181)						v = fop(v1,this->expr(e2));
HXLINE( 182)						::haxe::IMap_obj::set( ::hx::interface_check(arr,0x09c2bd39),index1,v);
            					}
            					else {
HXLINE( 185)						 ::Dynamic arr1 = arr->__GetItem(( (int)(index1) ));
HXDLIN( 185)						v = fop(arr1,this->expr(e2));
HXLINE( 186)						arr->__SetItem(( (int)(index1) ),v);
            					}
            				}
            			}
            			break;
            			default:{
HXLINE( 189)				 ::hscript::Error e = ::hscript::Error_obj::EInvalidOp(op);
HXDLIN( 189)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            			}
            		}
HXLINE( 191)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Interp_obj,evalAssignOp,return )

 ::Dynamic Interp_obj::increment( ::hscript::Expr e,bool prefix,int delta){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_199_increment)
HXDLIN( 199)		switch((int)(e->_hx_getIndex())){
            			case (int)1: {
HXLINE( 200)				::String id = e->_hx_getString(0);
HXLINE( 201)				 ::Dynamic l = this->locals->get(id);
HXLINE( 202)				 ::Dynamic v;
HXDLIN( 202)				if (::hx::IsNull( l )) {
HXLINE( 202)					v = this->variables->get(id);
            				}
            				else {
HXLINE( 202)					v =  ::Dynamic(l->__Field(HX_("r",72,00,00,00),::hx::paccDynamic));
            				}
HXLINE( 203)				if (prefix) {
HXLINE( 204)					v = (v + delta);
HXLINE( 205)					if (::hx::IsNull( l )) {
HXLINE( 205)						this->variables->set(id,v);
            					}
            					else {
HXLINE( 205)						l->__SetField(HX_("r",72,00,00,00),v,::hx::paccDynamic);
            					}
            				}
            				else {
HXLINE( 207)					if (::hx::IsNull( l )) {
HXLINE( 207)						this->variables->set(id,(v + delta));
            					}
            					else {
HXLINE( 207)						l->__SetField(HX_("r",72,00,00,00),(v + delta),::hx::paccDynamic);
            					}
            				}
HXLINE( 208)				return v;
            			}
            			break;
            			case (int)5: {
HXLINE( 209)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 209)				::String f = e->_hx_getString(1);
HXLINE( 210)				 ::Dynamic obj = this->expr(e1);
HXLINE( 211)				 ::Dynamic v = this->get(obj,f);
HXLINE( 212)				if (prefix) {
HXLINE( 213)					v = (v + delta);
HXLINE( 214)					this->set(obj,f,v);
            				}
            				else {
HXLINE( 216)					this->set(obj,f,(v + delta));
            				}
HXLINE( 217)				return v;
            			}
            			break;
            			case (int)16: {
HXLINE( 218)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 218)				 ::hscript::Expr index = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXLINE( 219)				 ::Dynamic arr = this->expr(e1);
HXLINE( 220)				 ::Dynamic index1 = this->expr(index);
HXLINE( 221)				if (::Std_obj::isOfType(arr,( ( ::Dynamic)(::hx::ClassOf< ::haxe::IMap >()) ))) {
HXLINE( 222)					int v = ( (int)(::haxe::IMap_obj::get( ::hx::interface_check(arr,0x09c2bd39),index1)) );
HXLINE( 223)					if (prefix) {
HXLINE( 224)						v = (v + delta);
HXLINE( 225)						::haxe::IMap_obj::set( ::hx::interface_check(arr,0x09c2bd39),index1,v);
            					}
            					else {
HXLINE( 228)						::haxe::IMap_obj::set( ::hx::interface_check(arr,0x09c2bd39),index1,(v + delta));
            					}
HXLINE( 230)					return v;
            				}
            				else {
HXLINE( 233)					int v = ( (int)(arr->__GetItem(( (int)(index1) ))) );
HXLINE( 234)					if (prefix) {
HXLINE( 235)						v = (v + delta);
HXLINE( 236)						arr->__SetItem(( (int)(index1) ),v);
            					}
            					else {
HXLINE( 238)						arr->__SetItem(( (int)(index1) ),(v + delta));
            					}
HXLINE( 239)					return v;
            				}
            			}
            			break;
            			default:{
HXLINE( 242)				::String e;
HXDLIN( 242)				if ((delta > 0)) {
HXLINE( 242)					e = HX_("++",a0,25,00,00);
            				}
            				else {
HXLINE( 242)					e = HX_("--",60,27,00,00);
            				}
HXDLIN( 242)				 ::hscript::Error e1 = ::hscript::Error_obj::EInvalidOp(e);
HXDLIN( 242)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e1));
            			}
            		}
HXLINE( 199)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,increment,return )

 ::Dynamic Interp_obj::execute( ::hscript::Expr expr){
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_246_execute)
HXLINE( 247)		this->depth = 0;
HXLINE( 249)		this->locals =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 253)		this->declared = ::Array_obj< ::Dynamic>::__new();
HXLINE( 254)		return this->exprReturn(expr);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,execute,return )

 ::Dynamic Interp_obj::exprReturn( ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_258_exprReturn)
HXDLIN( 258)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 259)			return this->expr(e);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 260)				{
HXLINE( 260)					null();
            				}
HXDLIN( 260)				 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 258)				if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hscript::_Interp::Stop >())) {
HXLINE( 260)					 ::hscript::_Interp::Stop e = _g1;
HXLINE( 261)					switch((int)(e->_hx_getIndex())){
            						case (int)0: {
HXLINE( 262)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid break",b6,ee,24,9d)));
            						}
            						break;
            						case (int)1: {
HXLINE( 263)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid continue",d0,6a,b7,3f)));
            						}
            						break;
            						case (int)2: {
HXLINE( 265)							 ::Dynamic v = this->returnValue;
HXLINE( 266)							this->returnValue = null();
HXLINE( 267)							return v;
            						}
            						break;
            					}
            				}
            				else {
HXDLIN( 258)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXDLIN( 258)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,exprReturn,return )

 ::haxe::ds::StringMap Interp_obj::duplicate( ::haxe::ds::StringMap h){
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_273_duplicate)
HXLINE( 275)		 ::haxe::ds::StringMap h2 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 279)		{
HXLINE( 279)			 ::Dynamic k = h->keys();
HXDLIN( 279)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 279)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 280)				h2->set(k1,h->get(k1));
            			}
            		}
HXLINE( 281)		return h2;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,duplicate,return )

void Interp_obj::restore(int old){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_285_restore)
HXDLIN( 285)		while((this->declared->length > old)){
HXLINE( 286)			 ::Dynamic d = this->declared->pop();
HXLINE( 287)			this->locals->set(( (::String)(d->__Field(HX_("n",6e,00,00,00),::hx::paccDynamic)) ), ::Dynamic(d->__Field(HX_("old",a7,98,54,00),::hx::paccDynamic)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,restore,(void))

 ::Dynamic Interp_obj::error( ::hscript::Error e,::hx::Null< bool >  __o_rethrow){
            		bool rethrow = __o_rethrow.Default(false);
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_293_error)
HXDLIN( 293)		if (rethrow) {
HXDLIN( 293)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
            		else {
HXDLIN( 293)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
HXDLIN( 293)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,error,return )

void Interp_obj::rethrow( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_301_rethrow)
HXDLIN( 301)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,rethrow,(void))

 ::Dynamic Interp_obj::resolve(::String id){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_305_resolve)
HXLINE( 306)		 ::Dynamic l = this->locals->get(id);
HXLINE( 307)		if (::hx::IsNotNull( l )) {
HXLINE( 308)			return  ::Dynamic(l->__Field(HX_("r",72,00,00,00),::hx::paccDynamic));
            		}
HXLINE( 309)		 ::Dynamic v = this->variables->get(id);
HXLINE( 310)		bool _hx_tmp;
HXDLIN( 310)		if (::hx::IsNull( v )) {
HXLINE( 310)			_hx_tmp = !(this->variables->exists(id));
            		}
            		else {
HXLINE( 310)			_hx_tmp = false;
            		}
HXDLIN( 310)		if (_hx_tmp) {
HXLINE( 311)			 ::hscript::Error e = ::hscript::Error_obj::EUnknownVariable(id);
HXDLIN( 311)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
HXLINE( 312)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,resolve,return )

 ::Dynamic Interp_obj::expr( ::hscript::Expr e){
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_315_expr)
HXDLIN( 315)		 ::hscript::Interp _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 320)		switch((int)(e->_hx_getIndex())){
            			case (int)0: {
HXLINE( 321)				 ::hscript::Const c = e->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXLINE( 322)				switch((int)(c->_hx_getIndex())){
            					case (int)0: {
HXLINE( 323)						int v = c->_hx_getInt(0);
HXDLIN( 323)						return v;
            					}
            					break;
            					case (int)1: {
HXLINE( 324)						Float f = c->_hx_getFloat(0);
HXDLIN( 324)						return f;
            					}
            					break;
            					case (int)2: {
HXLINE( 325)						::String s = c->_hx_getString(0);
HXDLIN( 325)						return s;
            					}
            					break;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 330)				::String id = e->_hx_getString(0);
HXLINE( 331)				return this->resolve(id);
            			}
            			break;
            			case (int)2: {
HXLINE( 332)				 ::hscript::CType _g = e->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXDLIN( 332)				::String n = e->_hx_getString(0);
HXDLIN( 332)				 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXLINE( 333)				::Array< ::Dynamic> _hx_tmp = this->declared;
HXDLIN( 333)				_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("n",6e,00,00,00),n)
            					->setFixed(1,HX_("old",a7,98,54,00),this->locals->get(n))));
HXLINE( 334)				{
HXLINE( 334)					::Dynamic this1 = this->locals;
HXDLIN( 334)					 ::Dynamic value;
HXDLIN( 334)					if (::hx::IsNull( e1 )) {
HXLINE( 334)						value = null();
            					}
            					else {
HXLINE( 334)						value = this->expr(e1);
            					}
HXDLIN( 334)					( ( ::haxe::ds::StringMap)(this1) )->set(n, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("r",72,00,00,00),value)));
            				}
HXLINE( 335)				return null();
            			}
            			break;
            			case (int)3: {
HXLINE( 336)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 337)				return this->expr(e1);
            			}
            			break;
            			case (int)4: {
HXLINE( 338)				::Array< ::Dynamic> exprs = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 339)				int old = this->declared->length;
HXLINE( 340)				 ::Dynamic v = null();
HXLINE( 341)				{
HXLINE( 341)					int _g = 0;
HXDLIN( 341)					while((_g < exprs->length)){
HXLINE( 341)						 ::hscript::Expr e = exprs->__get(_g).StaticCast<  ::hscript::Expr >();
HXDLIN( 341)						_g = (_g + 1);
HXLINE( 342)						v = this->expr(e);
            					}
            				}
HXLINE( 343)				this->restore(old);
HXLINE( 344)				return v;
            			}
            			break;
            			case (int)5: {
HXLINE( 345)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 345)				::String f = e->_hx_getString(1);
HXLINE( 346)				return this->get(this->expr(e1),f);
            			}
            			break;
            			case (int)6: {
HXLINE( 347)				::String op = e->_hx_getString(0);
HXDLIN( 347)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 347)				 ::hscript::Expr e2 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXLINE( 348)				 ::Dynamic fop = this->binops->get(op);
HXLINE( 349)				if (::hx::IsNull( fop )) {
HXLINE( 349)					 ::hscript::Error e = ::hscript::Error_obj::EInvalidOp(op);
HXDLIN( 349)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            				}
HXLINE( 350)				return fop(e1,e2);
            			}
            			break;
            			case (int)7: {
HXLINE( 351)				::String op = e->_hx_getString(0);
HXDLIN( 351)				bool prefix = e->_hx_getBool(1);
HXDLIN( 351)				 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXLINE( 352)				::String _hx_switch_0 = op;
            				if (  (_hx_switch_0==HX_("!",21,00,00,00)) ){
HXLINE( 354)					return ::hx::IsNotEq( this->expr(e1),true );
HXDLIN( 354)					goto _hx_goto_51;
            				}
            				if (  (_hx_switch_0==HX_("++",a0,25,00,00)) ){
HXLINE( 358)					return this->increment(e1,prefix,1);
HXDLIN( 358)					goto _hx_goto_51;
            				}
            				if (  (_hx_switch_0==HX_("-",2d,00,00,00)) ){
HXLINE( 356)					return -(this->expr(e1));
HXDLIN( 356)					goto _hx_goto_51;
            				}
            				if (  (_hx_switch_0==HX_("--",60,27,00,00)) ){
HXLINE( 360)					return this->increment(e1,prefix,-1);
HXDLIN( 360)					goto _hx_goto_51;
            				}
            				if (  (_hx_switch_0==HX_("~",7e,00,00,00)) ){
HXLINE( 365)					return ~(( (int)(this->expr(e1)) ));
HXDLIN( 365)					goto _hx_goto_51;
            				}
            				/* default */{
HXLINE( 368)					 ::hscript::Error e = ::hscript::Error_obj::EInvalidOp(op);
HXDLIN( 368)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            				}
            				_hx_goto_51:;
            			}
            			break;
            			case (int)8: {
HXLINE( 370)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 370)				::Array< ::Dynamic> params = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 371)				::cpp::VirtualArray args = ::cpp::VirtualArray_obj::__new();
HXLINE( 372)				{
HXLINE( 372)					int _g = 0;
HXDLIN( 372)					while((_g < params->length)){
HXLINE( 372)						 ::hscript::Expr p = params->__get(_g).StaticCast<  ::hscript::Expr >();
HXDLIN( 372)						_g = (_g + 1);
HXLINE( 373)						args->push(this->expr(p));
            					}
            				}
HXLINE( 375)				if ((e1->_hx_getIndex() == 5)) {
HXLINE( 376)					 ::hscript::Expr e = e1->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 376)					::String f = e1->_hx_getString(1);
HXLINE( 377)					 ::Dynamic obj = this->expr(e);
HXLINE( 378)					if (::hx::IsNull( obj )) {
HXLINE( 378)						 ::hscript::Error e = ::hscript::Error_obj::EInvalidAccess(f);
HXDLIN( 378)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            					}
HXLINE( 379)					return this->fcall(obj,f,args);
            				}
            				else {
HXLINE( 381)					return this->call(null(),this->expr(e1),args);
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 383)				 ::hscript::Expr econd = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 383)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 383)				 ::hscript::Expr e2 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXLINE( 384)				if (::hx::IsEq( this->expr(econd),true )) {
HXLINE( 384)					return this->expr(e1);
            				}
            				else {
HXLINE( 384)					if (::hx::IsNull( e2 )) {
HXLINE( 384)						return null();
            					}
            					else {
HXLINE( 384)						return this->expr(e2);
            					}
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 385)				 ::hscript::Expr econd = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 385)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXLINE( 386)				this->whileLoop(econd,e1);
HXLINE( 387)				return null();
            			}
            			break;
            			case (int)11: {
HXLINE( 391)				::String v = e->_hx_getString(0);
HXDLIN( 391)				 ::hscript::Expr it = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 391)				 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXLINE( 392)				this->forLoop(v,it,e1);
HXLINE( 393)				return null();
            			}
            			break;
            			case (int)12: {
HXLINE( 395)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hscript::_Interp::Stop_obj::SBreak_dyn()));
            			}
            			break;
            			case (int)13: {
HXLINE( 397)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hscript::_Interp::Stop_obj::SContinue_dyn()));
            			}
            			break;
            			case (int)14: {
            				HX_BEGIN_LOCAL_FUNC_S7(::hx::LocalFunc,_hx_Closure_0,::String,name, ::hscript::Expr,fexpr, ::hscript::Interp,_gthis,::Array< int >,minParams, ::hscript::Interp,me,::Array< ::Dynamic>,params, ::haxe::ds::StringMap,capturedLocals) HXARGC(1)
            				 ::Dynamic _hx_run(::cpp::VirtualArray args){
            					HX_STACKFRAME(&_hx_pos_f37559d470356c9e_410_expr)
HXLINE( 411)					int f;
HXDLIN( 411)					if (::hx::IsNull( args )) {
HXLINE( 411)						f = 0;
            					}
            					else {
HXLINE( 411)						f = args->get_length();
            					}
HXDLIN( 411)					if ((f != params->length)) {
HXLINE( 412)						if ((args->get_length() < minParams->__get(0))) {
HXLINE( 413)							::String str = (((HX_("Invalid number of parameters. Got ",cb,2b,d9,b1) + args->get_length()) + HX_(", required ",ed,0c,66,93)) + minParams->__get(0));
HXLINE( 414)							if (::hx::IsNotNull( name )) {
HXLINE( 414)								str = (str + ((HX_(" for function '",f6,90,ab,a0) + name) + HX_("'",27,00,00,00)));
            							}
HXLINE( 415)							 ::hscript::Error e = ::hscript::Error_obj::ECustom(str);
HXDLIN( 415)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            						}
HXLINE( 418)						::cpp::VirtualArray args2 = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 419)						int extraParams = (args->get_length() - minParams->__get(0));
HXLINE( 420)						int pos = 0;
HXLINE( 421)						{
HXLINE( 421)							int _g = 0;
HXDLIN( 421)							while((_g < params->length)){
HXLINE( 421)								 ::Dynamic p = params->__get(_g);
HXDLIN( 421)								_g = (_g + 1);
HXLINE( 422)								if (( (bool)(p->__Field(HX_("opt",33,9c,54,00),::hx::paccDynamic)) )) {
HXLINE( 423)									if ((extraParams > 0)) {
HXLINE( 424)										pos = (pos + 1);
HXDLIN( 424)										args2->push(args->__get((pos - 1)));
HXLINE( 425)										extraParams = (extraParams - 1);
            									}
            									else {
HXLINE( 427)										args2->push(null());
            									}
            								}
            								else {
HXLINE( 429)									pos = (pos + 1);
HXDLIN( 429)									args2->push(args->__get((pos - 1)));
            								}
            							}
            						}
HXLINE( 430)						args = args2;
            					}
HXLINE( 432)					 ::haxe::ds::StringMap old = me->locals;
HXDLIN( 432)					int depth = me->depth;
HXLINE( 433)					me->depth++;
HXLINE( 434)					me->locals = me->duplicate(capturedLocals);
HXLINE( 435)					{
HXLINE( 435)						int _g = 0;
HXDLIN( 435)						int _g1 = params->length;
HXDLIN( 435)						while((_g < _g1)){
HXLINE( 435)							_g = (_g + 1);
HXDLIN( 435)							int i = (_g - 1);
HXLINE( 436)							me->locals->set(( (::String)(params->__get(i)->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ), ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("r",72,00,00,00),args->__get(i))));
            						}
            					}
HXLINE( 437)					 ::Dynamic r = null();
HXLINE( 438)					if (_gthis->inTry) {
HXLINE( 439)						try {
            							HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 440)							r = me->exprReturn(fexpr);
            						} catch( ::Dynamic _hx_e) {
            							if (_hx_e.IsClass<  ::Dynamic >() ){
            								HX_STACK_BEGIN_CATCH
            								 ::Dynamic _g = _hx_e;
HXLINE( 441)								{
HXLINE( 441)									null();
            								}
HXDLIN( 441)								 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 442)								me->locals = old;
HXLINE( 443)								me->depth = depth;
HXLINE( 447)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            							}
            							else {
            								HX_STACK_DO_THROW(_hx_e);
            							}
            						}
            					}
            					else {
HXLINE( 451)						r = me->exprReturn(fexpr);
            					}
HXLINE( 452)					me->locals = old;
HXLINE( 453)					me->depth = depth;
HXLINE( 454)					return r;
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 401)				 ::hscript::CType _g = e->_hx_getObject(3).StaticCast<  ::hscript::CType >();
HXDLIN( 401)				::Array< ::Dynamic> params = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 401)				 ::hscript::Expr fexpr = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 401)				::String name = e->_hx_getString(2);
HXLINE( 402)				 ::haxe::ds::StringMap capturedLocals = this->duplicate(this->locals);
HXLINE( 403)				 ::hscript::Interp me = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 404)				bool hasOpt = false;
HXDLIN( 404)				::Array< int > minParams = ::Array_obj< int >::fromData( _hx_array_data_9af07c8f_65,1);
HXLINE( 405)				{
HXLINE( 405)					int _g1 = 0;
HXDLIN( 405)					while((_g1 < params->length)){
HXLINE( 405)						 ::Dynamic p = params->__get(_g1);
HXDLIN( 405)						_g1 = (_g1 + 1);
HXLINE( 406)						if (( (bool)(p->__Field(HX_("opt",33,9c,54,00),::hx::paccDynamic)) )) {
HXLINE( 407)							hasOpt = true;
            						}
            						else {
HXLINE( 409)							minParams[0]++;
            						}
            					}
            				}
HXLINE( 410)				 ::Dynamic f =  ::Dynamic(new _hx_Closure_0(name,fexpr,_gthis,minParams,me,params,capturedLocals));
HXLINE( 456)				 ::Dynamic f1 = ::Reflect_obj::makeVarArgs(f);
HXLINE( 457)				if (::hx::IsNotNull( name )) {
HXLINE( 458)					if ((this->depth == 0)) {
HXLINE( 460)						this->variables->set(name,f1);
            					}
            					else {
HXLINE( 463)						::Array< ::Dynamic> _hx_tmp = this->declared;
HXDLIN( 463)						::String name1 = name;
HXDLIN( 463)						_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("n",6e,00,00,00),name1)
            							->setFixed(1,HX_("old",a7,98,54,00),this->locals->get(name))));
HXLINE( 464)						 ::Dynamic ref =  ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("r",72,00,00,00),f1));
HXLINE( 465)						this->locals->set(name,ref);
HXLINE( 466)						capturedLocals->set(name,ref);
            					}
            				}
HXLINE( 469)				return f1;
            			}
            			break;
            			case (int)15: {
HXLINE( 398)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 399)				 ::Dynamic _hx_tmp;
HXDLIN( 399)				if (::hx::IsNull( e1 )) {
HXLINE( 399)					_hx_tmp = null();
            				}
            				else {
HXLINE( 399)					_hx_tmp = this->expr(e1);
            				}
HXDLIN( 399)				this->returnValue = _hx_tmp;
HXLINE( 400)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hscript::_Interp::Stop_obj::SReturn_dyn()));
            			}
            			break;
            			case (int)16: {
HXLINE( 512)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 512)				 ::hscript::Expr index = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXLINE( 513)				 ::Dynamic arr = this->expr(e1);
HXLINE( 514)				 ::Dynamic index1 = this->expr(index);
HXLINE( 515)				if (::Std_obj::isOfType(arr,( ( ::Dynamic)(::hx::ClassOf< ::haxe::IMap >()) ))) {
HXLINE( 516)					return ::haxe::IMap_obj::get( ::hx::interface_check(arr,0x09c2bd39),index1);
            				}
            				else {
HXLINE( 519)					return arr->__GetItem(( (int)(index1) ));
            				}
            			}
            			break;
            			case (int)17: {
HXLINE( 470)				::Array< ::Dynamic> arr = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 471)				bool _hx_tmp;
HXDLIN( 471)				if ((arr->length > 0)) {
HXLINE( 471)					 ::hscript::Expr _g = arr->__get(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 471)					if ((_g->_hx_getIndex() == 6)) {
HXLINE( 471)						 ::hscript::Expr _g1 = _g->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 471)						 ::hscript::Expr _g2 = _g->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 471)						if ((_g->_hx_getString(0) == HX_("=>",61,35,00,00))) {
HXLINE( 471)							_hx_tmp = true;
            						}
            						else {
HXLINE( 471)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE( 471)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 471)					_hx_tmp = false;
            				}
HXDLIN( 471)				if (_hx_tmp) {
HXLINE( 472)					bool isAllString = true;
HXLINE( 473)					bool isAllInt = true;
HXLINE( 474)					bool isAllObject = true;
HXLINE( 475)					bool isAllEnum = true;
HXLINE( 476)					::cpp::VirtualArray keys = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 477)					::cpp::VirtualArray values = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 478)					{
HXLINE( 478)						int _g = 0;
HXDLIN( 478)						while((_g < arr->length)){
HXLINE( 478)							 ::hscript::Expr e = arr->__get(_g).StaticCast<  ::hscript::Expr >();
HXDLIN( 478)							_g = (_g + 1);
HXLINE( 479)							if ((e->_hx_getIndex() == 6)) {
HXLINE( 480)								if ((e->_hx_getString(0) == HX_("=>",61,35,00,00))) {
HXLINE( 480)									 ::hscript::Expr eKey = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 480)									 ::hscript::Expr eValue = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 480)									{
HXLINE( 481)										 ::Dynamic key = this->expr(eKey);
HXLINE( 482)										 ::Dynamic value = this->expr(eValue);
HXLINE( 483)										if (isAllString) {
HXLINE( 483)											isAllString = ::Std_obj::isOfType(key,( ( ::Dynamic)(::hx::ClassOf< ::String >()) ));
            										}
            										else {
HXLINE( 483)											isAllString = false;
            										}
HXLINE( 484)										if (isAllInt) {
HXLINE( 484)											isAllInt = ::Std_obj::isOfType(key,( ( ::Dynamic)(::hx::ClassOf< int >()) ));
            										}
            										else {
HXLINE( 484)											isAllInt = false;
            										}
HXLINE( 485)										if (isAllObject) {
HXLINE( 485)											isAllObject = ::Reflect_obj::isObject(key);
            										}
            										else {
HXLINE( 485)											isAllObject = false;
            										}
HXLINE( 486)										if (isAllEnum) {
HXLINE( 486)											isAllEnum = ::Reflect_obj::isEnumValue(key);
            										}
            										else {
HXLINE( 486)											isAllEnum = false;
            										}
HXLINE( 487)										keys->push(key);
HXLINE( 488)										values->push(value);
            									}
            								}
            								else {
HXLINE( 490)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("=> expected",17,e5,65,e5)));
            								}
            							}
            							else {
HXLINE( 490)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("=> expected",17,e5,65,e5)));
            							}
            						}
            					}
HXLINE( 493)					 ::Dynamic map;
HXLINE( 494)					if (isAllInt) {
HXLINE( 493)						map =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            					}
            					else {
HXLINE( 495)						if (isAllString) {
HXLINE( 493)							map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            						}
            						else {
HXLINE( 496)							if (isAllEnum) {
HXLINE( 493)								map =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
            							}
            							else {
HXLINE( 497)								if (isAllObject) {
HXLINE( 493)									map =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            								}
            								else {
HXLINE( 498)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Inconsistent key types",af,4f,50,a9)));
            								}
            							}
            						}
            					}
HXLINE( 500)					{
HXLINE( 500)						int _g1 = 0;
HXDLIN( 500)						int _g2 = keys->get_length();
HXDLIN( 500)						while((_g1 < _g2)){
HXLINE( 500)							_g1 = (_g1 + 1);
HXDLIN( 500)							int n = (_g1 - 1);
HXLINE( 501)							::haxe::IMap_obj::set( ::hx::interface_check(map,0x09c2bd39),keys->__get(n),values->__get(n));
            						}
            					}
HXLINE( 503)					return map;
            				}
            				else {
HXLINE( 506)					::cpp::VirtualArray a = ::cpp::VirtualArray_obj::__new();
HXLINE( 507)					{
HXLINE( 507)						int _g = 0;
HXDLIN( 507)						while((_g < arr->length)){
HXLINE( 507)							 ::hscript::Expr e = arr->__get(_g).StaticCast<  ::hscript::Expr >();
HXDLIN( 507)							_g = (_g + 1);
HXLINE( 508)							a->push(this->expr(e));
            						}
            					}
HXLINE( 510)					return a;
            				}
            			}
            			break;
            			case (int)18: {
HXLINE( 521)				::String cl = e->_hx_getString(0);
HXDLIN( 521)				::Array< ::Dynamic> params = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 522)				::cpp::VirtualArray a = ::cpp::VirtualArray_obj::__new();
HXLINE( 523)				{
HXLINE( 523)					int _g = 0;
HXDLIN( 523)					while((_g < params->length)){
HXLINE( 523)						 ::hscript::Expr e = params->__get(_g).StaticCast<  ::hscript::Expr >();
HXDLIN( 523)						_g = (_g + 1);
HXLINE( 524)						a->push(this->expr(e));
            					}
            				}
HXLINE( 525)				return this->cnew(cl,a);
            			}
            			break;
            			case (int)19: {
HXLINE( 526)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 527)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(this->expr(e1)));
            			}
            			break;
            			case (int)20: {
HXLINE( 528)				 ::hscript::CType _g = e->_hx_getObject(2).StaticCast<  ::hscript::CType >();
HXDLIN( 528)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 528)				::String n = e->_hx_getString(1);
HXDLIN( 528)				 ::hscript::Expr ecatch = e->_hx_getObject(3).StaticCast<  ::hscript::Expr >();
HXLINE( 529)				int old = this->declared->length;
HXLINE( 530)				bool oldTry = this->inTry;
HXLINE( 531)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 532)					this->inTry = true;
HXLINE( 533)					 ::Dynamic v = this->expr(e1);
HXLINE( 534)					this->restore(old);
HXLINE( 535)					this->inTry = oldTry;
HXLINE( 536)					return v;
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 537)						{
HXLINE( 537)							null();
            						}
HXDLIN( 537)						 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 531)						if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hscript::_Interp::Stop >())) {
HXLINE( 537)							 ::hscript::_Interp::Stop err = _g1;
HXLINE( 538)							this->inTry = oldTry;
HXLINE( 539)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            						}
            						else {
HXLINE( 540)							 ::Dynamic err = _g1;
HXLINE( 542)							this->restore(old);
HXLINE( 543)							this->inTry = oldTry;
HXLINE( 545)							::Array< ::Dynamic> _hx_tmp = this->declared;
HXDLIN( 545)							_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("n",6e,00,00,00),n)
            								->setFixed(1,HX_("old",a7,98,54,00),this->locals->get(n))));
HXLINE( 546)							this->locals->set(n, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("r",72,00,00,00),err)));
HXLINE( 547)							 ::Dynamic v = this->expr(ecatch);
HXLINE( 548)							this->restore(old);
HXLINE( 549)							return v;
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            			break;
            			case (int)21: {
HXLINE( 551)				::Array< ::Dynamic> fl = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 552)				 ::Dynamic o =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 553)				{
HXLINE( 553)					int _g = 0;
HXDLIN( 553)					while((_g < fl->length)){
HXLINE( 553)						 ::Dynamic f = fl->__get(_g);
HXDLIN( 553)						_g = (_g + 1);
HXLINE( 554)						::String f1 = ( (::String)(f->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXDLIN( 554)						this->set(o,f1,this->expr(f->__Field(HX_("e",65,00,00,00),::hx::paccDynamic)));
            					}
            				}
HXLINE( 555)				return o;
            			}
            			break;
            			case (int)22: {
HXLINE( 556)				 ::hscript::Expr econd = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 556)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 556)				 ::hscript::Expr e2 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXLINE( 557)				if (::hx::IsEq( this->expr(econd),true )) {
HXLINE( 557)					return this->expr(e1);
            				}
            				else {
HXLINE( 557)					return this->expr(e2);
            				}
            			}
            			break;
            			case (int)23: {
HXLINE( 558)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 558)				::Array< ::Dynamic> cases = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 558)				 ::hscript::Expr def = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXLINE( 559)				 ::Dynamic val = this->expr(e1);
HXLINE( 560)				bool match = false;
HXLINE( 561)				{
HXLINE( 561)					int _g = 0;
HXDLIN( 561)					while((_g < cases->length)){
HXLINE( 561)						 ::Dynamic c = cases->__get(_g);
HXDLIN( 561)						_g = (_g + 1);
HXLINE( 562)						{
HXLINE( 562)							int _g1 = 0;
HXDLIN( 562)							::Array< ::Dynamic> _g2 = ( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN( 562)							while((_g1 < _g2->length)){
HXLINE( 562)								 ::hscript::Expr v = _g2->__get(_g1).StaticCast<  ::hscript::Expr >();
HXDLIN( 562)								_g1 = (_g1 + 1);
HXLINE( 563)								if (::hx::IsEq( this->expr(v),val )) {
HXLINE( 564)									match = true;
HXLINE( 565)									goto _hx_goto_62;
            								}
            							}
            							_hx_goto_62:;
            						}
HXLINE( 567)						if (match) {
HXLINE( 568)							val = this->expr(c->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic));
HXLINE( 569)							goto _hx_goto_61;
            						}
            					}
            					_hx_goto_61:;
            				}
HXLINE( 572)				if (!(match)) {
HXLINE( 573)					if (::hx::IsNull( def )) {
HXLINE( 573)						val = null();
            					}
            					else {
HXLINE( 573)						val = this->expr(def);
            					}
            				}
HXLINE( 574)				return val;
            			}
            			break;
            			case (int)24: {
HXLINE( 388)				 ::hscript::Expr econd = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 388)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXLINE( 389)				this->doWhileLoop(econd,e1);
HXLINE( 390)				return null();
            			}
            			break;
            			case (int)25: {
HXLINE( 575)				::String _g = e->_hx_getString(0);
HXDLIN( 575)				::Array< ::Dynamic> _g1 = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 575)				 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXLINE( 576)				return this->expr(e1);
            			}
            			break;
            			case (int)26: {
HXLINE( 577)				 ::hscript::CType _g = e->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXDLIN( 577)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 578)				return this->expr(e1);
            			}
            			break;
            		}
HXLINE( 320)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,expr,return )

void Interp_obj::doWhileLoop( ::hscript::Expr econd, ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_583_doWhileLoop)
HXLINE( 584)		int old = this->declared->length;
HXLINE( 585)		while(true){
HXLINE( 586)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 587)				this->expr(e);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 588)					{
HXLINE( 588)						null();
            					}
HXDLIN( 588)					 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 586)					if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hscript::_Interp::Stop >())) {
HXLINE( 588)						 ::hscript::_Interp::Stop err = _g1;
HXLINE( 589)						switch((int)(err->_hx_getIndex())){
            							case (int)0: {
HXLINE( 591)								goto _hx_goto_66;
            							}
            							break;
            							case (int)1: {
            							}
            							break;
            							case (int)2: {
HXLINE( 592)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            							}
            							break;
            						}
            					}
            					else {
HXLINE( 586)						HX_STACK_DO_THROW(_g);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 585)			if (!(::hx::IsEq( this->expr(econd),true ))) {
HXLINE( 585)				goto _hx_goto_66;
            			}
            		}
            		_hx_goto_66:;
HXLINE( 597)		this->restore(old);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,doWhileLoop,(void))

void Interp_obj::whileLoop( ::hscript::Expr econd, ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_600_whileLoop)
HXLINE( 601)		int old = this->declared->length;
HXLINE( 602)		while(::hx::IsEq( this->expr(econd),true )){
HXLINE( 603)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 604)				this->expr(e);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 605)					{
HXLINE( 605)						null();
            					}
HXDLIN( 605)					 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 603)					if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hscript::_Interp::Stop >())) {
HXLINE( 605)						 ::hscript::_Interp::Stop err = _g1;
HXLINE( 606)						switch((int)(err->_hx_getIndex())){
            							case (int)0: {
HXLINE( 608)								goto _hx_goto_68;
            							}
            							break;
            							case (int)1: {
            							}
            							break;
            							case (int)2: {
HXLINE( 609)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            							}
            							break;
            						}
            					}
            					else {
HXLINE( 603)						HX_STACK_DO_THROW(_g);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		_hx_goto_68:;
HXLINE( 613)		this->restore(old);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,whileLoop,(void))

 ::Dynamic Interp_obj::makeIterator( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_616_makeIterator)
HXLINE( 620)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 620)			v = v->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 620)				{
HXLINE( 620)					null();
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 622)		bool _hx_tmp;
HXDLIN( 622)		if (::hx::IsNotNull( v->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic) )) {
HXLINE( 622)			_hx_tmp = ::hx::IsNull( v->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 622)			_hx_tmp = true;
            		}
HXDLIN( 622)		if (_hx_tmp) {
HXLINE( 622)			 ::hscript::Error e = ::hscript::Error_obj::EInvalidIterator(v);
HXDLIN( 622)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
HXLINE( 623)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,makeIterator,return )

void Interp_obj::forLoop(::String n, ::hscript::Expr it, ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_626_forLoop)
HXLINE( 627)		int old = this->declared->length;
HXLINE( 628)		::Array< ::Dynamic> _hx_tmp = this->declared;
HXDLIN( 628)		_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("n",6e,00,00,00),n)
            			->setFixed(1,HX_("old",a7,98,54,00),this->locals->get(n))));
HXLINE( 629)		 ::Dynamic it1 = this->makeIterator(this->expr(it));
HXLINE( 630)		while(( (bool)(it1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 631)			{
HXLINE( 631)				::Dynamic this1 = this->locals;
HXDLIN( 631)				( ( ::haxe::ds::StringMap)(this1) )->set(n, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("r",72,00,00,00),it1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)())));
            			}
HXLINE( 632)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 633)				this->expr(e);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 634)					{
HXLINE( 634)						null();
            					}
HXDLIN( 634)					 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 632)					if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hscript::_Interp::Stop >())) {
HXLINE( 634)						 ::hscript::_Interp::Stop err = _g1;
HXLINE( 635)						switch((int)(err->_hx_getIndex())){
            							case (int)0: {
HXLINE( 637)								goto _hx_goto_71;
            							}
            							break;
            							case (int)1: {
            							}
            							break;
            							case (int)2: {
HXLINE( 638)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            							}
            							break;
            						}
            					}
            					else {
HXLINE( 632)						HX_STACK_DO_THROW(_g);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		_hx_goto_71:;
HXLINE( 642)		this->restore(old);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,forLoop,(void))

bool Interp_obj::isMap( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_646_isMap)
HXDLIN( 646)		return ::Std_obj::isOfType(o,( ( ::Dynamic)(::hx::ClassOf< ::haxe::IMap >()) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,isMap,return )

 ::Dynamic Interp_obj::getMapValue( ::Dynamic map, ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_650_getMapValue)
HXDLIN( 650)		return ::haxe::IMap_obj::get( ::hx::interface_check(map,0x09c2bd39),key);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,getMapValue,return )

void Interp_obj::setMapValue( ::Dynamic map, ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_654_setMapValue)
HXDLIN( 654)		::haxe::IMap_obj::set( ::hx::interface_check(map,0x09c2bd39),key,value);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,setMapValue,(void))

 ::Dynamic Interp_obj::get( ::Dynamic o,::String f){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_657_get)
HXLINE( 658)		if (::hx::IsNull( o )) {
HXLINE( 658)			 ::hscript::Error e = ::hscript::Error_obj::EInvalidAccess(f);
HXDLIN( 658)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
HXLINE( 659)		return ::Reflect_obj::getProperty(o,f);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,get,return )

 ::Dynamic Interp_obj::set( ::Dynamic o,::String f, ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_673_set)
HXLINE( 674)		if (::hx::IsNull( o )) {
HXLINE( 674)			 ::hscript::Error e = ::hscript::Error_obj::EInvalidAccess(f);
HXDLIN( 674)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
HXLINE( 675)		::Reflect_obj::setProperty(o,f,v);
HXLINE( 676)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,set,return )

 ::Dynamic Interp_obj::fcall( ::Dynamic o,::String f,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_680_fcall)
HXDLIN( 680)		return this->call(o,this->get(o,f),args);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,fcall,return )

 ::Dynamic Interp_obj::call( ::Dynamic o, ::Dynamic f,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_684_call)
HXDLIN( 684)		return ::Reflect_obj::callMethod(o,f,args);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,call,return )

 ::Dynamic Interp_obj::cnew(::String cl,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_687_cnew)
HXLINE( 688)		::hx::Class c = ::Type_obj::resolveClass(cl);
HXLINE( 689)		if (::hx::IsNull( c )) {
HXLINE( 689)			c = this->resolve(cl);
            		}
HXLINE( 690)		return ::Type_obj::createInstance(c,args);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,cnew,return )


::hx::ObjectPtr< Interp_obj > Interp_obj::__new() {
	::hx::ObjectPtr< Interp_obj > __this = new Interp_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Interp_obj > Interp_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Interp_obj *__this = (Interp_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Interp_obj), true, "hscript.Interp"));
	*(void **)__this = Interp_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Interp_obj::Interp_obj()
{
}

void Interp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Interp);
	HX_MARK_MEMBER_NAME(variables,"variables");
	HX_MARK_MEMBER_NAME(locals,"locals");
	HX_MARK_MEMBER_NAME(binops,"binops");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(inTry,"inTry");
	HX_MARK_MEMBER_NAME(declared,"declared");
	HX_MARK_MEMBER_NAME(returnValue,"returnValue");
	HX_MARK_END_CLASS();
}

void Interp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(variables,"variables");
	HX_VISIT_MEMBER_NAME(locals,"locals");
	HX_VISIT_MEMBER_NAME(binops,"binops");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(inTry,"inTry");
	HX_VISIT_MEMBER_NAME(declared,"declared");
	HX_VISIT_MEMBER_NAME(returnValue,"returnValue");
}

::hx::Val Interp_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"expr") ) { return ::hx::Val( expr_dyn() ); }
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
		if (HX_FIELD_EQ(inName,"cnew") ) { return ::hx::Val( cnew_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return ::hx::Val( depth ); }
		if (HX_FIELD_EQ(inName,"inTry") ) { return ::hx::Val( inTry ); }
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error_dyn() ); }
		if (HX_FIELD_EQ(inName,"isMap") ) { return ::hx::Val( isMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"fcall") ) { return ::hx::Val( fcall_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locals") ) { return ::hx::Val( locals ); }
		if (HX_FIELD_EQ(inName,"binops") ) { return ::hx::Val( binops ); }
		if (HX_FIELD_EQ(inName,"assign") ) { return ::hx::Val( assign_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"initOps") ) { return ::hx::Val( initOps_dyn() ); }
		if (HX_FIELD_EQ(inName,"execute") ) { return ::hx::Val( execute_dyn() ); }
		if (HX_FIELD_EQ(inName,"restore") ) { return ::hx::Val( restore_dyn() ); }
		if (HX_FIELD_EQ(inName,"rethrow") ) { return ::hx::Val( rethrow_dyn() ); }
		if (HX_FIELD_EQ(inName,"resolve") ) { return ::hx::Val( resolve_dyn() ); }
		if (HX_FIELD_EQ(inName,"forLoop") ) { return ::hx::Val( forLoop_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"declared") ) { return ::hx::Val( declared ); }
		if (HX_FIELD_EQ(inName,"posInfos") ) { return ::hx::Val( posInfos_dyn() ); }
		if (HX_FIELD_EQ(inName,"assignOp") ) { return ::hx::Val( assignOp_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { return ::hx::Val( variables ); }
		if (HX_FIELD_EQ(inName,"increment") ) { return ::hx::Val( increment_dyn() ); }
		if (HX_FIELD_EQ(inName,"duplicate") ) { return ::hx::Val( duplicate_dyn() ); }
		if (HX_FIELD_EQ(inName,"whileLoop") ) { return ::hx::Val( whileLoop_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"exprReturn") ) { return ::hx::Val( exprReturn_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"returnValue") ) { return ::hx::Val( returnValue ); }
		if (HX_FIELD_EQ(inName,"doWhileLoop") ) { return ::hx::Val( doWhileLoop_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMapValue") ) { return ::hx::Val( getMapValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMapValue") ) { return ::hx::Val( setMapValue_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"evalAssignOp") ) { return ::hx::Val( evalAssignOp_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeIterator") ) { return ::hx::Val( makeIterator_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resetVariables") ) { return ::hx::Val( resetVariables_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Interp_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inTry") ) { inTry=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locals") ) { locals=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"binops") ) { binops=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"declared") ) { declared=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { variables=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"returnValue") ) { returnValue=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Interp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("variables",b7,e2,62,82));
	outFields->push(HX_("locals",a8,74,bf,59));
	outFields->push(HX_("binops",cb,59,16,ed));
	outFields->push(HX_("depth",03,f1,29,d7));
	outFields->push(HX_("inTry",56,82,08,be));
	outFields->push(HX_("declared",fa,58,bc,c4));
	outFields->push(HX_("returnValue",a1,4c,95,3e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Interp_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Interp_obj,variables),HX_("variables",b7,e2,62,82)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Interp_obj,locals),HX_("locals",a8,74,bf,59)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Interp_obj,binops),HX_("binops",cb,59,16,ed)},
	{::hx::fsInt,(int)offsetof(Interp_obj,depth),HX_("depth",03,f1,29,d7)},
	{::hx::fsBool,(int)offsetof(Interp_obj,inTry),HX_("inTry",56,82,08,be)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Interp_obj,declared),HX_("declared",fa,58,bc,c4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interp_obj,returnValue),HX_("returnValue",a1,4c,95,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Interp_obj_sStaticStorageInfo = 0;
#endif

static ::String Interp_obj_sMemberFields[] = {
	HX_("variables",b7,e2,62,82),
	HX_("locals",a8,74,bf,59),
	HX_("binops",cb,59,16,ed),
	HX_("depth",03,f1,29,d7),
	HX_("inTry",56,82,08,be),
	HX_("declared",fa,58,bc,c4),
	HX_("returnValue",a1,4c,95,3e),
	HX_("resetVariables",e8,46,d3,dc),
	HX_("posInfos",11,82,2e,5a),
	HX_("initOps",02,63,8b,cb),
	HX_("assign",2f,46,06,4c),
	HX_("assignOp",30,b5,c7,0e),
	HX_("evalAssignOp",ec,d8,94,19),
	HX_("increment",2f,06,ff,31),
	HX_("execute",35,0a,0d,cc),
	HX_("exprReturn",c5,6b,ed,86),
	HX_("duplicate",8b,21,17,a1),
	HX_("restore",4e,67,b0,6a),
	HX_("error",c8,cb,29,73),
	HX_("rethrow",93,b0,2a,f6),
	HX_("resolve",ec,12,60,67),
	HX_("expr",35,fd,1d,43),
	HX_("doWhileLoop",aa,01,97,3a),
	HX_("whileLoop",b5,42,98,e1),
	HX_("makeIterator",fc,dd,72,d8),
	HX_("forLoop",0d,52,69,c9),
	HX_("isMap",d2,34,51,c1),
	HX_("getMapValue",eb,b1,ee,ce),
	HX_("setMapValue",f7,b8,5b,d9),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	HX_("fcall",04,44,99,fc),
	HX_("call",9e,18,ba,41),
	HX_("cnew",dd,ef,c3,41),
	::String(null()) };

::hx::Class Interp_obj::__mClass;

void Interp_obj::__register()
{
	Interp_obj _hx_dummy;
	Interp_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hscript.Interp",8f,7c,f0,9a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Interp_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Interp_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Interp_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Interp_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hscript
