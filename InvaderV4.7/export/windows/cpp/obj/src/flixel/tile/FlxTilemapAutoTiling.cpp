// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
namespace flixel{
namespace tile{

::flixel::tile::FlxTilemapAutoTiling FlxTilemapAutoTiling_obj::ALT;

::flixel::tile::FlxTilemapAutoTiling FlxTilemapAutoTiling_obj::AUTO;

::flixel::tile::FlxTilemapAutoTiling FlxTilemapAutoTiling_obj::OFF;

bool FlxTilemapAutoTiling_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ALT",09,95,31,00)) { outValue = FlxTilemapAutoTiling_obj::ALT; return true; }
	if (inName==HX_("AUTO",6f,a7,37,2b)) { outValue = FlxTilemapAutoTiling_obj::AUTO; return true; }
	if (inName==HX_("OFF",4f,2f,3c,00)) { outValue = FlxTilemapAutoTiling_obj::OFF; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxTilemapAutoTiling_obj)

int FlxTilemapAutoTiling_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ALT",09,95,31,00)) return 2;
	if (inName==HX_("AUTO",6f,a7,37,2b)) return 1;
	if (inName==HX_("OFF",4f,2f,3c,00)) return 0;
	return super::__FindIndex(inName);
}

int FlxTilemapAutoTiling_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ALT",09,95,31,00)) return 0;
	if (inName==HX_("AUTO",6f,a7,37,2b)) return 0;
	if (inName==HX_("OFF",4f,2f,3c,00)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val FlxTilemapAutoTiling_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ALT",09,95,31,00)) return ALT;
	if (inName==HX_("AUTO",6f,a7,37,2b)) return AUTO;
	if (inName==HX_("OFF",4f,2f,3c,00)) return OFF;
	return super::__Field(inName,inCallProp);
}

static ::String FlxTilemapAutoTiling_obj_sStaticFields[] = {
	HX_("OFF",4f,2f,3c,00),
	HX_("AUTO",6f,a7,37,2b),
	HX_("ALT",09,95,31,00),
	::String(null())
};

static void FlxTilemapAutoTiling_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemapAutoTiling_obj::ALT,"ALT");
	HX_MARK_MEMBER_NAME(FlxTilemapAutoTiling_obj::AUTO,"AUTO");
	HX_MARK_MEMBER_NAME(FlxTilemapAutoTiling_obj::OFF,"OFF");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxTilemapAutoTiling_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemapAutoTiling_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTilemapAutoTiling_obj::ALT,"ALT");
	HX_VISIT_MEMBER_NAME(FlxTilemapAutoTiling_obj::AUTO,"AUTO");
	HX_VISIT_MEMBER_NAME(FlxTilemapAutoTiling_obj::OFF,"OFF");
};
#endif

hx::Class FlxTilemapAutoTiling_obj::__mClass;

Dynamic __Create_FlxTilemapAutoTiling_obj() { return new FlxTilemapAutoTiling_obj; }

void FlxTilemapAutoTiling_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("flixel.tile.FlxTilemapAutoTiling","\x84","\x9e","\x85","\x97"), hx::TCanCast< FlxTilemapAutoTiling_obj >,FlxTilemapAutoTiling_obj_sStaticFields,0,
	&__Create_FlxTilemapAutoTiling_obj, &__Create,
	&super::__SGetClass(), &CreateFlxTilemapAutoTiling_obj, FlxTilemapAutoTiling_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , FlxTilemapAutoTiling_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxTilemapAutoTiling_obj::__GetStatic;
}

void FlxTilemapAutoTiling_obj::__boot()
{
ALT = hx::CreateEnum< FlxTilemapAutoTiling_obj >(HX_HCSTRING("ALT","\x09","\x95","\x31","\x00"),2,0);
AUTO = hx::CreateEnum< FlxTilemapAutoTiling_obj >(HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b"),1,0);
OFF = hx::CreateEnum< FlxTilemapAutoTiling_obj >(HX_HCSTRING("OFF","\x4f","\x2f","\x3c","\x00"),0,0);
}


} // end namespace flixel
} // end namespace tile
