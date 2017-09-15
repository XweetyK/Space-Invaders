// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_entities_Alien
#include <entities/Alien.h>
#endif
#ifndef INCLUDED_entities_AlienBala
#include <entities/AlienBala.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_25988829ce1de5f0_15_new,"entities.Alien","new",0xad4440ec,"entities.Alien.new","entities/Alien.hx",15,0x9ee9a905)
static const int _hx_array_data_6c069afa_1[] = {
	(int)0,(int)1,(int)2,(int)3,
};
HX_LOCAL_STACK_FRAME(_hx_pos_25988829ce1de5f0_38_update,"entities.Alien","update",0xf484f4fd,"entities.Alien.update","entities/Alien.hx",38,0x9ee9a905)
HX_LOCAL_STACK_FRAME(_hx_pos_25988829ce1de5f0_58_shoot,"entities.Alien","shoot",0x9a7e2d6b,"entities.Alien.shoot","entities/Alien.hx",58,0x9ee9a905)
HX_LOCAL_STACK_FRAME(_hx_pos_25988829ce1de5f0_72_resetShotClock,"entities.Alien","resetShotClock",0xebdb4199,"entities.Alien.resetShotClock","entities/Alien.hx",72,0x9ee9a905)
HX_LOCAL_STACK_FRAME(_hx_pos_25988829ce1de5f0_77_get_disp,"entities.Alien","get_disp",0x219436df,"entities.Alien.get_disp","entities/Alien.hx",77,0x9ee9a905)
namespace entities{

void Alien_obj::__construct(int X,int Y,int Color){
            	HX_GC_STACKFRAME(&_hx_pos_25988829ce1de5f0_15_new)
HXLINE(  20)		this->disp =  ::entities::AlienBala_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  24)		super::__construct(X,Y,null());
HXLINE(  26)		this->loadGraphic(HX_("assets/images/test.png",38,f1,41,f5),true,(int)8,(int)8,null(),null());
HXLINE(  27)		this->set_color(Color);
HXLINE(  29)		this->animation->add(HX_("alien",07,55,91,21),::Array_obj< int >::fromData( _hx_array_data_6c069afa_1,4),(int)3,true,null(),null());
HXLINE(  30)		this->animation->play(HX_("alien",07,55,91,21),null(),null(),null());
HXLINE(  32)		this->origen = X;
HXLINE(  33)		this->velocity->set_x((int)15);
            	}

Dynamic Alien_obj::__CreateEmpty() { return new Alien_obj; }

void *Alien_obj::_hx_vtable = 0;

Dynamic Alien_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Alien_obj > _hx_result = new Alien_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Alien_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25a685e0) {
		if (inClassId<=(int)0x0b6ffd77) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
		} else {
			return inClassId==(int)0x25a685e0;
		}
	} else {
		return inClassId==(int)0x2e105115 || inClassId==(int)0x4ed6ce22;
	}
}

void Alien_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_25988829ce1de5f0_38_update)
HXLINE(  40)		Float _hx_tmp = this->x;
HXDLIN(  40)		if ((_hx_tmp < (this->origen - (int)7))) {
HXLINE(  42)			this->set_x((this->origen - (int)7));
HXLINE(  43)			this->velocity->set_x(-(this->velocity->x));
HXLINE(  44)			this->set_y((this->y + (int)5));
            		}
HXLINE(  46)		Float _hx_tmp1 = this->x;
HXDLIN(  46)		if ((_hx_tmp1 > (this->origen + (int)22))) {
HXLINE(  48)			this->set_x((this->origen + (int)22));
HXLINE(  49)			this->velocity->set_x(-(this->velocity->x));
HXLINE(  50)			this->set_y((this->y + (int)5));
            		}
HXLINE(  52)		this->super::update(elapsed);
HXLINE(  53)		this->shoot();
HXLINE(  54)		this->resetShotClock();
            	}


void Alien_obj::shoot(){
            	HX_STACKFRAME(&_hx_pos_25988829ce1de5f0_58_shoot)
HXDLIN(  58)		if ((this->dispClock <= (int)2)) {
HXLINE(  60)			if ((::Reg_obj::balaCont < ::Reg_obj::cantMaxBalas)) {
HXLINE(  62)				::Reg_obj::balaCont++;
HXLINE(  63)				this->resetShotClock();
HXLINE(  64)				this->get_disp()->set_x(this->x);
HXLINE(  65)				this->get_disp()->set_y(this->y);
HXLINE(  66)				 ::flixel::FlxState _hx_tmp = ::flixel::FlxG_obj::game->_state;
HXDLIN(  66)				_hx_tmp->add(this->get_disp()).StaticCast<  ::flixel::FlxBasic >();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alien_obj,shoot,(void))

void Alien_obj::resetShotClock(){
            	HX_STACKFRAME(&_hx_pos_25988829ce1de5f0_72_resetShotClock)
HXDLIN(  72)		this->dispClock = ((int)1 + (::flixel::FlxG_obj::random->_hx_float(null(),null(),null()) * (int)30));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alien_obj,resetShotClock,(void))

 ::entities::AlienBala Alien_obj::get_disp(){
            	HX_STACKFRAME(&_hx_pos_25988829ce1de5f0_77_get_disp)
HXDLIN(  77)		return this->disp;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alien_obj,get_disp,return )


hx::ObjectPtr< Alien_obj > Alien_obj::__new(int X,int Y,int Color) {
	hx::ObjectPtr< Alien_obj > __this = new Alien_obj();
	__this->__construct(X,Y,Color);
	return __this;
}

hx::ObjectPtr< Alien_obj > Alien_obj::__alloc(hx::Ctx *_hx_ctx,int X,int Y,int Color) {
	Alien_obj *__this = (Alien_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Alien_obj), true, "entities.Alien"));
	*(void **)__this = Alien_obj::_hx_vtable;
	__this->__construct(X,Y,Color);
	return __this;
}

Alien_obj::Alien_obj()
{
}

void Alien_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Alien);
	HX_MARK_MEMBER_NAME(origen,"origen");
	HX_MARK_MEMBER_NAME(dispClock,"dispClock");
	HX_MARK_MEMBER_NAME(disp,"disp");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Alien_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(origen,"origen");
	HX_VISIT_MEMBER_NAME(dispClock,"dispClock");
	HX_VISIT_MEMBER_NAME(disp,"disp");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Alien_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"disp") ) { return hx::Val( inCallProp == hx::paccAlways ? get_disp() : disp ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shoot") ) { return hx::Val( shoot_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origen") ) { return hx::Val( origen ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_disp") ) { return hx::Val( get_disp_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dispClock") ) { return hx::Val( dispClock ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resetShotClock") ) { return hx::Val( resetShotClock_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Alien_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"disp") ) { disp=inValue.Cast<  ::entities::AlienBala >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origen") ) { origen=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dispClock") ) { dispClock=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Alien_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("origen","\x6a","\x16","\x01","\x4b"));
	outFields->push(HX_HCSTRING("dispClock","\x0c","\x0f","\xab","\x2d"));
	outFields->push(HX_HCSTRING("disp","\x62","\x67","\x69","\x42"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Alien_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Alien_obj,origen),HX_HCSTRING("origen","\x6a","\x16","\x01","\x4b")},
	{hx::fsFloat,(int)offsetof(Alien_obj,dispClock),HX_HCSTRING("dispClock","\x0c","\x0f","\xab","\x2d")},
	{hx::fsObject /*::entities::AlienBala*/ ,(int)offsetof(Alien_obj,disp),HX_HCSTRING("disp","\x62","\x67","\x69","\x42")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Alien_obj_sStaticStorageInfo = 0;
#endif

static ::String Alien_obj_sMemberFields[] = {
	HX_HCSTRING("origen","\x6a","\x16","\x01","\x4b"),
	HX_HCSTRING("dispClock","\x0c","\x0f","\xab","\x2d"),
	HX_HCSTRING("disp","\x62","\x67","\x69","\x42"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c"),
	HX_HCSTRING("resetShotClock","\xa5","\xbe","\x25","\x9e"),
	HX_HCSTRING("get_disp","\xeb","\x22","\x24","\xc2"),
	::String(null()) };

static void Alien_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Alien_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Alien_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Alien_obj::__mClass,"__mClass");
};

#endif

hx::Class Alien_obj::__mClass;

void Alien_obj::__register()
{
	hx::Object *dummy = new Alien_obj;
	Alien_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("entities.Alien","\xfa","\x9a","\x06","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Alien_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Alien_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Alien_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Alien_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Alien_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Alien_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace entities
