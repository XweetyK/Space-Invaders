// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_entities_Nave
#define INCLUDED_entities_Nave

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(entities,Bala)
HX_DECLARE_CLASS1(entities,Nave)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace entities{


class HXCPP_CLASS_ATTRIBUTES Nave_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Nave_obj OBJ_;
		Nave_obj();

	public:
		enum { _hx_ClassId = 0x1ca67603 };

		void __construct(int X,int Y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="entities.Nave")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"entities.Nave"); }
		static hx::ObjectPtr< Nave_obj > __new(int X,int Y);
		static hx::ObjectPtr< Nave_obj > __alloc(hx::Ctx *_hx_ctx,int X,int Y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Nave_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Nave","\x42","\xa6","\xd8","\x33"); }

		 ::entities::Bala PlayerBala;
		int playerScore;
		void update(Float elapsed);

		void playerLimit();
		::Dynamic playerLimit_dyn();

		void playerShoot();
		::Dynamic playerShoot_dyn();

		void playerMove();
		::Dynamic playerMove_dyn();

		 ::entities::Bala get_PlayerBala();
		::Dynamic get_PlayerBala_dyn();

		int get_playerScore();
		::Dynamic get_playerScore_dyn();

		void playerAddScore(int points);
		::Dynamic playerAddScore_dyn();

};

} // end namespace entities

#endif /* INCLUDED_entities_Nave */ 
