// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_entities_Bala
#define INCLUDED_entities_Bala

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(entities,Bala)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace entities{


class HXCPP_CLASS_ATTRIBUTES Bala_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Bala_obj OBJ_;
		Bala_obj();

	public:
		enum { _hx_ClassId = 0x14b7ddd5 };

		void __construct( ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="entities.Bala")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"entities.Bala"); }
		static hx::ObjectPtr< Bala_obj > __new( ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic);
		static hx::ObjectPtr< Bala_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bala_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Bala","\x14","\x0e","\xea","\x2b"); }

		void update(Float elapsed);

		void destroy();

};

} // end namespace entities

#endif /* INCLUDED_entities_Bala */ 