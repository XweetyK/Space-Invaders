// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif

namespace openfl{
namespace _legacy{
namespace display{


static ::String IBitmapDrawable_obj_sMemberFields[] = {
	HX_HCSTRING("__drawToSurface","\x2e","\xea","\xb6","\x73"),
	::String(null()) };

static void IBitmapDrawable_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IBitmapDrawable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IBitmapDrawable_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IBitmapDrawable_obj::__mClass,"__mClass");
};

#endif

hx::Class IBitmapDrawable_obj::__mClass;

void IBitmapDrawable_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.IBitmapDrawable","\x46","\xa7","\x6e","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IBitmapDrawable_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IBitmapDrawable_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x87325dec >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IBitmapDrawable_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
