// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif

namespace flixel{
namespace util{


static ::String IFlxPool_obj_sMemberFields[] = {
	HX_HCSTRING("preAllocate","\x00","\x4a","\x53","\xa6"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	::String(null()) };

static void IFlxPool_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxPool_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IFlxPool_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxPool_obj::__mClass,"__mClass");
};

#endif

hx::Class IFlxPool_obj::__mClass;

void IFlxPool_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.IFlxPool","\x7f","\xe1","\x05","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IFlxPool_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IFlxPool_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x5a90a383 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IFlxPool_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
