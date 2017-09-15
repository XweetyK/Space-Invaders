// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_entities_AlienBala
#include <entities/AlienBala.h>
#endif
#ifndef INCLUDED_entities_Ovni
#include <entities/Ovni.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_75ab60df2e86b5b9_15_new,"entities.Ovni","new",0xafd72701,"entities.Ovni.new","entities/Ovni.hx",15,0xd184e5ae)
static const int _hx_array_data_279d928f_1[] = {
	(int)0,(int)1,(int)0,(int)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_75ab60df2e86b5b9_38_update,"entities.Ovni","update",0x6e274a08,"entities.Ovni.update","entities/Ovni.hx",38,0xd184e5ae)
HX_LOCAL_STACK_FRAME(_hx_pos_75ab60df2e86b5b9_58_resetClock,"entities.Ovni","resetClock",0xb2ec70fe,"entities.Ovni.resetClock","entities/Ovni.hx",58,0xd184e5ae)
HX_LOCAL_STACK_FRAME(_hx_pos_75ab60df2e86b5b9_62_get_disp,"entities.Ovni","get_disp",0x083e24aa,"entities.Ovni.get_disp","entities/Ovni.hx",62,0xd184e5ae)
namespace entities{

void Ovni_obj::__construct(int X,int Y){
            	HX_GC_STACKFRAME(&_hx_pos_75ab60df2e86b5b9_15_new)
HXLINE(  20)		this->disp =  ::entities::AlienBala_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  25)		super::__construct(X,Y,null());
HXLINE(  27)		this->loadGraphic(HX_("assets/images/ovni.png",08,6a,01,45),true,(int)16,(int)8,null(),null());
HXLINE(  29)		this->animation->add(HX_("alien",07,55,91,21),::Array_obj< int >::fromData( _hx_array_data_279d928f_1,4),(int)3,true,null(),null());
HXLINE(  30)		this->animation->play(HX_("alien",07,55,91,21),null(),null(),null());
HXLINE(  32)		this->origen = X;
HXLINE(  33)		this->cont = (int)0;
            	}

Dynamic Ovni_obj::__CreateEmpty() { return new Ovni_obj; }

void *Ovni_obj::_hx_vtable = 0;

Dynamic Ovni_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Ovni_obj > _hx_result = new Ovni_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Ovni_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1d5f9503) {
		if (inClassId<=(int)0x0b6ffd77) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
		} else {
			return inClassId==(int)0x1d5f9503;
		}
	} else {
		return inClassId==(int)0x25a685e0 || inClassId==(int)0x2e105115;
	}
}

void Ovni_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_75ab60df2e86b5b9_38_update)
HXLINE(  40)		{
HXLINE(  40)			int _g = (int)0;
HXDLIN(  40)			while((_g < (int)5000)){
HXLINE(  40)				_g = (_g + (int)1);
HXDLIN(  40)				int cont = (_g - (int)1);
HXLINE(  42)				this->resetClock();
HXLINE(  43)				if ((this->clock <= (int)2)) {
HXLINE(  45)					this->velocity->set_x((int)30);
HXLINE(  46)					if ((this->x == (int)180)) {
HXLINE(  48)						this->set_x(this->origen);
HXLINE(  49)						this->velocity->set_x((int)0);
            					}
HXLINE(  51)					this->resetClock();
            				}
            			}
            		}
HXLINE(  54)		this->super::update(elapsed);
            	}


void Ovni_obj::resetClock(){
            	HX_STACKFRAME(&_hx_pos_75ab60df2e86b5b9_58_resetClock)
HXDLIN(  58)		this->clock = ((int)1 + (::flixel::FlxG_obj::random->_hx_float(null(),null(),null()) * (int)300));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Ovni_obj,resetClock,(void))

 ::entities::AlienBala Ovni_obj::get_disp(){
            	HX_STACKFRAME(&_hx_pos_75ab60df2e86b5b9_62_get_disp)
HXDLIN(  62)		return this->disp;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Ovni_obj,get_disp,return )


hx::ObjectPtr< Ovni_obj > Ovni_obj::__new(int X,int Y) {
	hx::ObjectPtr< Ovni_obj > __this = new Ovni_obj();
	__this->__construct(X,Y);
	return __this;
}

hx::ObjectPtr< Ovni_obj > Ovni_obj::__alloc(hx::Ctx *_hx_ctx,int X,int Y) {
	Ovni_obj *__this = (Ovni_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Ovni_obj), true, "entities.Ovni"));
	*(void **)__this = Ovni_obj::_hx_vtable;
	__this->__construct(X,Y);
	return __this;
}

Ovni_obj::Ovni_obj()
{
}

void Ovni_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ovni);
	HX_MARK_MEMBER_NAME(origen,"origen");
	HX_MARK_MEMBER_NAME(clock,"clock");
	HX_MARK_MEMBER_NAME(disp,"disp");
	HX_MARK_MEMBER_NAME(cont,"cont");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Ovni_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(origen,"origen");
	HX_VISIT_MEMBER_NAME(clock,"clock");
	HX_VISIT_MEMBER_NAME(disp,"disp");
	HX_VISIT_MEMBER_NAME(cont,"cont");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Ovni_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"disp") ) { return hx::Val( inCallProp == hx::paccAlways ? get_disp() : disp ); }
		if (HX_FIELD_EQ(inName,"cont") ) { return hx::Val( cont ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clock") ) { return hx::Val( clock ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origen") ) { return hx::Val( origen ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_disp") ) { return hx::Val( get_disp_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resetClock") ) { return hx::Val( resetClock_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Ovni_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"disp") ) { disp=inValue.Cast<  ::entities::AlienBala >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cont") ) { cont=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clock") ) { clock=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origen") ) { origen=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ovni_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("origen","\x6a","\x16","\x01","\x4b"));
	outFields->push(HX_HCSTRING("clock","\xce","\x09","\x63","\x48"));
	outFields->push(HX_HCSTRING("disp","\x62","\x67","\x69","\x42"));
	outFields->push(HX_HCSTRING("cont","\xf2","\xb9","\xc4","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Ovni_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Ovni_obj,origen),HX_HCSTRING("origen","\x6a","\x16","\x01","\x4b")},
	{hx::fsFloat,(int)offsetof(Ovni_obj,clock),HX_HCSTRING("clock","\xce","\x09","\x63","\x48")},
	{hx::fsObject /*::entities::AlienBala*/ ,(int)offsetof(Ovni_obj,disp),HX_HCSTRING("disp","\x62","\x67","\x69","\x42")},
	{hx::fsInt,(int)offsetof(Ovni_obj,cont),HX_HCSTRING("cont","\xf2","\xb9","\xc4","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Ovni_obj_sStaticStorageInfo = 0;
#endif

static ::String Ovni_obj_sMemberFields[] = {
	HX_HCSTRING("origen","\x6a","\x16","\x01","\x4b"),
	HX_HCSTRING("clock","\xce","\x09","\x63","\x48"),
	HX_HCSTRING("disp","\x62","\x67","\x69","\x42"),
	HX_HCSTRING("cont","\xf2","\xb9","\xc4","\x41"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("resetClock","\x7f","\x41","\xff","\x30"),
	HX_HCSTRING("get_disp","\xeb","\x22","\x24","\xc2"),
	::String(null()) };

static void Ovni_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ovni_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Ovni_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ovni_obj::__mClass,"__mClass");
};

#endif

hx::Class Ovni_obj::__mClass;

void Ovni_obj::__register()
{
	hx::Object *dummy = new Ovni_obj;
	Ovni_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("entities.Ovni","\x8f","\x92","\x9d","\x27");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Ovni_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Ovni_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Ovni_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Ovni_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Ovni_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Ovni_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace entities
