// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Tracker
#include <flixel/system/debug/watch/Tracker.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_60725c8fd849460b_37_new,"flixel.system.debug.watch.Tracker","new",0xf6eed663,"flixel.system.debug.watch.Tracker.new","flixel/system/debug/watch/Tracker.hx",37,0x14368dcf)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{

void Tracker_obj::__construct(::String Title, ::openfl::_legacy::display::BitmapData Icon, ::Dynamic Width, ::Dynamic Height, ::Dynamic Resizable, ::openfl::_legacy::geom::Rectangle Bounds, ::Dynamic Closable){
            	HX_STACKFRAME(&_hx_pos_60725c8fd849460b_37_new)
HXDLIN(  37)		super::__construct(Title,Icon,Width,Height,Resizable,Bounds,Closable);
            	}

Dynamic Tracker_obj::__CreateEmpty() { return new Tracker_obj; }

void *Tracker_obj::_hx_vtable = 0;

Dynamic Tracker_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Tracker_obj > _hx_result = new Tracker_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool Tracker_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3934d2c4) {
		if (inClassId<=(int)0x25b00754) {
			if (inClassId<=(int)0x1e88cdcf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1e88cdcf;
			} else {
				return inClassId==(int)0x25b00754;
			}
		} else {
			return inClassId==(int)0x306ae42a || inClassId==(int)0x3934d2c4;
		}
	} else {
		if (inClassId<=(int)0x5fcdb6d3) {
			if (inClassId<=(int)0x4fee5e51) {
				return inClassId==(int)0x3d2d7617 || inClassId==(int)0x4fee5e51;
			} else {
				return inClassId==(int)0x5fcdb6d3;
			}
		} else {
			return inClassId==(int)0x619ca9b8;
		}
	}
}


hx::ObjectPtr< Tracker_obj > Tracker_obj::__new(::String Title, ::openfl::_legacy::display::BitmapData Icon, ::Dynamic Width, ::Dynamic Height, ::Dynamic Resizable, ::openfl::_legacy::geom::Rectangle Bounds, ::Dynamic Closable) {
	hx::ObjectPtr< Tracker_obj > __this = new Tracker_obj();
	__this->__construct(Title,Icon,Width,Height,Resizable,Bounds,Closable);
	return __this;
}

hx::ObjectPtr< Tracker_obj > Tracker_obj::__alloc(hx::Ctx *_hx_ctx,::String Title, ::openfl::_legacy::display::BitmapData Icon, ::Dynamic Width, ::Dynamic Height, ::Dynamic Resizable, ::openfl::_legacy::geom::Rectangle Bounds, ::Dynamic Closable) {
	Tracker_obj *__this = (Tracker_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Tracker_obj), true, "flixel.system.debug.watch.Tracker"));
	*(void **)__this = Tracker_obj::_hx_vtable;
	__this->__construct(Title,Icon,Width,Height,Resizable,Bounds,Closable);
	return __this;
}

Tracker_obj::Tracker_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Tracker_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Tracker_obj_sStaticStorageInfo = 0;
#endif

static void Tracker_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tracker_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Tracker_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tracker_obj::__mClass,"__mClass");
};

#endif

hx::Class Tracker_obj::__mClass;

void Tracker_obj::__register()
{
	hx::Object *dummy = new Tracker_obj;
	Tracker_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.watch.Tracker","\xf1","\x68","\xcd","\xfd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Tracker_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Tracker_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Tracker_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tracker_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tracker_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch