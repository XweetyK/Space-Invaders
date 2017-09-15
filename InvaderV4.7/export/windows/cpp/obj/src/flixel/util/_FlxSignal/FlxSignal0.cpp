// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalHandler
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e31e7d362aca7388_204_new,"flixel.util._FlxSignal.FlxSignal0","new",0x845f8fe1,"flixel.util._FlxSignal.FlxSignal0.new","flixel/util/FlxSignal.hx",204,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_e31e7d362aca7388_288_dispatch0,"flixel.util._FlxSignal.FlxSignal0","dispatch0",0x8f26ea77,"flixel.util._FlxSignal.FlxSignal0.dispatch0","flixel/util/FlxSignal.hx",288,0x3c758c5e)
namespace flixel{
namespace util{
namespace _FlxSignal{

void FlxSignal0_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e31e7d362aca7388_204_new)
HXLINE( 205)		super::__construct();
HXLINE( 206)		this->dispatch = this->dispatch0_dyn();
            	}

Dynamic FlxSignal0_obj::__CreateEmpty() { return new FlxSignal0_obj; }

void *FlxSignal0_obj::_hx_vtable = 0;

Dynamic FlxSignal0_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxSignal0_obj > _hx_result = new FlxSignal0_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSignal0_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x13c8c333) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x13c8c333;
	} else {
		return inClassId==(int)0x2ca3abce;
	}
}

void FlxSignal0_obj::dispatch0(){
            	HX_STACKFRAME(&_hx_pos_e31e7d362aca7388_288_dispatch0)
HXLINE( 289)		this->processingListeners = true;
HXLINE( 290)		{
HXLINE( 290)			int _g = (int)0;
HXDLIN( 290)			::Array< ::Dynamic> _g1 = this->handlers;
HXDLIN( 290)			while((_g < _g1->length)){
HXLINE( 290)				 ::flixel::util::_FlxSignal::FlxSignalHandler handler = _g1->__get(_g).StaticCast<  ::flixel::util::_FlxSignal::FlxSignalHandler >();
HXDLIN( 290)				_g = (_g + (int)1);
HXLINE( 292)				handler->listener();
HXLINE( 294)				if (handler->dispatchOnce) {
HXLINE( 295)					this->remove(handler->listener);
            				}
            			}
            		}
HXLINE( 298)		this->processingListeners = false;
HXLINE( 300)		{
HXLINE( 300)			int _g2 = (int)0;
HXDLIN( 300)			::Array< ::Dynamic> _g11 = this->pendingRemove;
HXDLIN( 300)			while((_g2 < _g11->length)){
HXLINE( 300)				 ::flixel::util::_FlxSignal::FlxSignalHandler handler1 = _g11->__get(_g2).StaticCast<  ::flixel::util::_FlxSignal::FlxSignalHandler >();
HXDLIN( 300)				_g2 = (_g2 + (int)1);
HXLINE( 302)				this->remove(handler1->listener);
            			}
            		}
HXLINE( 304)		if ((this->pendingRemove->length > (int)0)) {
HXLINE( 305)			this->pendingRemove = ::Array_obj< ::Dynamic>::__new(0);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSignal0_obj,dispatch0,(void))


hx::ObjectPtr< FlxSignal0_obj > FlxSignal0_obj::__new() {
	hx::ObjectPtr< FlxSignal0_obj > __this = new FlxSignal0_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FlxSignal0_obj > FlxSignal0_obj::__alloc(hx::Ctx *_hx_ctx) {
	FlxSignal0_obj *__this = (FlxSignal0_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxSignal0_obj), true, "flixel.util._FlxSignal.FlxSignal0"));
	*(void **)__this = FlxSignal0_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxSignal0_obj::FlxSignal0_obj()
{
}

hx::Val FlxSignal0_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"dispatch0") ) { return hx::Val( dispatch0_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxSignal0_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FlxSignal0_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSignal0_obj_sMemberFields[] = {
	HX_HCSTRING("dispatch0","\x36","\x14","\xf1","\x78"),
	::String(null()) };

static void FlxSignal0_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSignal0_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxSignal0_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSignal0_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSignal0_obj::__mClass;

void FlxSignal0_obj::__register()
{
	hx::Object *dummy = new FlxSignal0_obj;
	FlxSignal0_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util._FlxSignal.FlxSignal0","\x6f","\x0b","\xc8","\x8f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxSignal0_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxSignal0_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSignal0_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxSignal0_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSignal0_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSignal0_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal
