// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#define INCLUDED_openfl__legacy_geom_Rectangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)

namespace openfl{
namespace _legacy{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES Rectangle_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Rectangle_obj OBJ_;
		Rectangle_obj();

	public:
		enum { _hx_ClassId = 0x2d7ceabb };

		void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._legacy.geom.Rectangle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._legacy.geom.Rectangle"); }
		static hx::ObjectPtr< Rectangle_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height);
		static hx::ObjectPtr< Rectangle_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Rectangle_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Rectangle","\x0f","\xb4","\x4f","\xbb"); }

		Float height;
		Float width;
		Float x;
		Float y;
		 ::openfl::_legacy::geom::Rectangle clone();
		::Dynamic clone_dyn();

		bool contains(Float x,Float y);
		::Dynamic contains_dyn();

		bool containsPoint( ::openfl::_legacy::geom::Point point);
		::Dynamic containsPoint_dyn();

		bool containsRect( ::openfl::_legacy::geom::Rectangle rect);
		::Dynamic containsRect_dyn();

		void copyFrom( ::openfl::_legacy::geom::Rectangle sourceRect);
		::Dynamic copyFrom_dyn();

		bool equals( ::openfl::_legacy::geom::Rectangle toCompare);
		::Dynamic equals_dyn();

		void extendBounds( ::openfl::_legacy::geom::Rectangle r);
		::Dynamic extendBounds_dyn();

		void inflate(Float dx,Float dy);
		::Dynamic inflate_dyn();

		void inflatePoint( ::openfl::_legacy::geom::Point point);
		::Dynamic inflatePoint_dyn();

		 ::openfl::_legacy::geom::Rectangle intersection( ::openfl::_legacy::geom::Rectangle toIntersect);
		::Dynamic intersection_dyn();

		bool intersects( ::openfl::_legacy::geom::Rectangle toIntersect);
		::Dynamic intersects_dyn();

		bool isEmpty();
		::Dynamic isEmpty_dyn();

		void offset(Float dx,Float dy);
		::Dynamic offset_dyn();

		void offsetPoint( ::openfl::_legacy::geom::Point point);
		::Dynamic offsetPoint_dyn();

		void setEmpty();
		::Dynamic setEmpty_dyn();

		void setTo(Float xa,Float ya,Float widtha,Float heighta);
		::Dynamic setTo_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::openfl::_legacy::geom::Rectangle transform( ::openfl::_legacy::geom::Matrix m);
		::Dynamic transform_dyn();

		 ::openfl::_legacy::geom::Rectangle _hx_union( ::openfl::_legacy::geom::Rectangle toUnion);
		::Dynamic _hx_union_dyn();

		Float get_bottom();
		::Dynamic get_bottom_dyn();

		Float set_bottom(Float value);
		::Dynamic set_bottom_dyn();

		 ::openfl::_legacy::geom::Point get_bottomRight();
		::Dynamic get_bottomRight_dyn();

		 ::openfl::_legacy::geom::Point set_bottomRight( ::openfl::_legacy::geom::Point value);
		::Dynamic set_bottomRight_dyn();

		Float get_left();
		::Dynamic get_left_dyn();

		Float set_left(Float value);
		::Dynamic set_left_dyn();

		Float get_right();
		::Dynamic get_right_dyn();

		Float set_right(Float value);
		::Dynamic set_right_dyn();

		 ::openfl::_legacy::geom::Point get_size();
		::Dynamic get_size_dyn();

		 ::openfl::_legacy::geom::Point set_size( ::openfl::_legacy::geom::Point value);
		::Dynamic set_size_dyn();

		Float get_top();
		::Dynamic get_top_dyn();

		Float set_top(Float value);
		::Dynamic set_top_dyn();

		 ::openfl::_legacy::geom::Point get_topLeft();
		::Dynamic get_topLeft_dyn();

		 ::openfl::_legacy::geom::Point set_topLeft( ::openfl::_legacy::geom::Point value);
		::Dynamic set_topLeft_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace geom

#endif /* INCLUDED_openfl__legacy_geom_Rectangle */ 
