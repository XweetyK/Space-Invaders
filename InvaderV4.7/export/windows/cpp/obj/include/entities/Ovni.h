// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_entities_Ovni
#define INCLUDED_entities_Ovni

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(entities,AlienBala)
HX_DECLARE_CLASS1(entities,Ovni)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace entities{


class HXCPP_CLASS_ATTRIBUTES Ovni_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Ovni_obj OBJ_;
		Ovni_obj();

	public:
		enum { _hx_ClassId = 0x1d5f9503 };

		void __construct(int X,int Y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="entities.Ovni")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"entities.Ovni"); }
		static hx::ObjectPtr< Ovni_obj > __new(int X,int Y);
		static hx::ObjectPtr< Ovni_obj > __alloc(hx::Ctx *_hx_ctx,int X,int Y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ovni_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Ovni","\x42","\xc5","\x91","\x34"); }

		int origen;
		Float clock;
		 ::entities::AlienBala disp;
		int cont;
		void update(Float elapsed);

		void resetClock();
		::Dynamic resetClock_dyn();

		 ::entities::AlienBala get_disp();
		::Dynamic get_disp_dyn();

};

} // end namespace entities

#endif /* INCLUDED_entities_Ovni */ 
