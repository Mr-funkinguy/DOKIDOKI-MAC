#ifndef INCLUDED_flixel_input_actions_FlxInputType
#define INCLUDED_flixel_input_actions_FlxInputType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,actions,FlxInputType)
namespace flixel{
namespace input{
namespace actions{


class FlxInputType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxInputType_obj OBJ_;

	public:
		FlxInputType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.input.actions.FlxInputType",f9,03,01,76); }
		::String __ToString() const { return HX_("FlxInputType.",bc,12,5e,c7) + _hx_tag; }

		static ::flixel::input::actions::FlxInputType ANALOG;
		static inline ::flixel::input::actions::FlxInputType ANALOG_dyn() { return ANALOG; }
		static ::flixel::input::actions::FlxInputType DIGITAL;
		static inline ::flixel::input::actions::FlxInputType DIGITAL_dyn() { return DIGITAL; }
};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxInputType */ 
