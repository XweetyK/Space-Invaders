// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_entities_Alien
#define INCLUDED_entities_Alien

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(entities,Alien)
HX_DECLARE_CLASS1(entities,AlienBala)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace entities{


class HXCPP_CLASS_ATTRIBUTES Alien_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Alien_obj OBJ_;
		Alien_obj();

	public:
		enum { _hx_ClassId = 0x4ed6ce22 };

		void __construct(int X,int Y,int Color);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="entities.Alien")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"entities.Alien"); }
		static hx::ObjectPtr< Alien_obj > __new(int X,int Y,int Color);
		static hx::ObjectPtr< Alien_obj > __alloc(hx::Ctx *_hx_ctx,int X,int Y,int Color);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Alien_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Alien","\xe7","\xc4","\xbe","\xb4"); }

		int origen;
		Float dispClock;
		 ::entities::AlienBala disp;
		void update(Float elapsed);

		void shoot();
		::Dynamic shoot_dyn();

		void resetShotClock();
		::Dynamic resetShotClock_dyn();

		 ::entities::AlienBala get_disp();
		::Dynamic get_disp_dyn();

};

} // end namespace entities

#endif /* INCLUDED_entities_Alien */ 