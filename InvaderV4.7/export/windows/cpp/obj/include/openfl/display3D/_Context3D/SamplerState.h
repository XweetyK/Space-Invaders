// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_openfl_display3D__Context3D_SamplerState
#define INCLUDED_openfl_display3D__Context3D_SamplerState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_f65e725a35677c30_1190_new)
HX_DECLARE_CLASS2(openfl,display3D,Context3DMipFilter)
HX_DECLARE_CLASS2(openfl,display3D,Context3DTextureFilter)
HX_DECLARE_CLASS2(openfl,display3D,Context3DWrapMode)
HX_DECLARE_CLASS3(openfl,display3D,_Context3D,SamplerState)

namespace openfl{
namespace display3D{
namespace _Context3D{


class HXCPP_CLASS_ATTRIBUTES SamplerState_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SamplerState_obj OBJ_;
		SamplerState_obj();

	public:
		enum { _hx_ClassId = 0x57e13649 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D._Context3D.SamplerState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display3D._Context3D.SamplerState"); }

		hx::ObjectPtr< SamplerState_obj > __new() {
			hx::ObjectPtr< SamplerState_obj > __this = new SamplerState_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< SamplerState_obj > __alloc(hx::Ctx *_hx_ctx) {
			SamplerState_obj *__this = (SamplerState_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SamplerState_obj), true, "openfl.display3D._Context3D.SamplerState"));
			*(void **)__this = SamplerState_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f65e725a35677c30_1190_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SamplerState_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SamplerState","\x09","\x30","\xd2","\x83"); }

		 ::openfl::display3D::Context3DWrapMode wrap;
		 ::openfl::display3D::Context3DTextureFilter filter;
		 ::openfl::display3D::Context3DMipFilter mipfilter;
};

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3D

#endif /* INCLUDED_openfl_display3D__Context3D_SamplerState */ 
