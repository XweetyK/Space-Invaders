// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLShader
#include <openfl/_legacy/gl/GLShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_079ccbbfb1240548_9_new,"openfl._legacy.gl.GLShader","new",0x2822b1a1,"openfl._legacy.gl.GLShader.new","openfl/_legacy/gl/GLShader.hx",9,0xd688f310)
HX_LOCAL_STACK_FRAME(_hx_pos_079ccbbfb1240548_16_getType,"openfl._legacy.gl.GLShader","getType",0xdbeab831,"openfl._legacy.gl.GLShader.getType","openfl/_legacy/gl/GLShader.hx",16,0xd688f310)
HX_LOCAL_STACK_FRAME(_hx_pos_079ccbbfb1240548_23_isValid,"openfl._legacy.gl.GLShader","isValid",0x8a9d2e73,"openfl._legacy.gl.GLShader.isValid","openfl/_legacy/gl/GLShader.hx",23,0xd688f310)
namespace openfl{
namespace _legacy{
namespace gl{

void GLShader_obj::__construct(int version, ::Dynamic id){
            	HX_STACKFRAME(&_hx_pos_079ccbbfb1240548_9_new)
HXDLIN(   9)		super::__construct(version,id);
            	}

Dynamic GLShader_obj::__CreateEmpty() { return new GLShader_obj; }

void *GLShader_obj::_hx_vtable = 0;

Dynamic GLShader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLShader_obj > _hx_result = new GLShader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GLShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ef17041) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2ef17041;
	} else {
		return inClassId==(int)0x36d2b0a7;
	}
}

::String GLShader_obj::getType(){
            	HX_STACKFRAME(&_hx_pos_079ccbbfb1240548_16_getType)
HXDLIN(  16)		return HX_("Shader",45,33,b5,51);
            	}


bool GLShader_obj::isValid(){
            	HX_STACKFRAME(&_hx_pos_079ccbbfb1240548_23_isValid)
HXDLIN(  23)		bool _hx_tmp;
HXDLIN(  23)		if (hx::IsNotEq( this->id,(int)0 )) {
HXDLIN(  23)			_hx_tmp = hx::IsNotNull( this->id );
            		}
            		else {
HXDLIN(  23)			_hx_tmp = false;
            		}
HXDLIN(  23)		if (_hx_tmp) {
HXDLIN(  23)			int _hx_tmp1 = this->version;
HXDLIN(  23)			return (_hx_tmp1 == ::openfl::_legacy::gl::GL_obj::get_version());
            		}
            		else {
HXDLIN(  23)			return false;
            		}
HXDLIN(  23)		return false;
            	}



hx::ObjectPtr< GLShader_obj > GLShader_obj::__new(int version, ::Dynamic id) {
	hx::ObjectPtr< GLShader_obj > __this = new GLShader_obj();
	__this->__construct(version,id);
	return __this;
}

hx::ObjectPtr< GLShader_obj > GLShader_obj::__alloc(hx::Ctx *_hx_ctx,int version, ::Dynamic id) {
	GLShader_obj *__this = (GLShader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLShader_obj), true, "openfl._legacy.gl.GLShader"));
	*(void **)__this = GLShader_obj::_hx_vtable;
	__this->__construct(version,id);
	return __this;
}

GLShader_obj::GLShader_obj()
{
}

hx::Val GLShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return hx::Val( getType_dyn() ); }
		if (HX_FIELD_EQ(inName,"isValid") ) { return hx::Val( isValid_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLShader_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLShader_obj_sStaticStorageInfo = 0;
#endif

static ::String GLShader_obj_sMemberFields[] = {
	HX_HCSTRING("getType","\x70","\xa2","\x8b","\x1f"),
	HX_HCSTRING("isValid","\xb2","\x18","\x3e","\xce"),
	::String(null()) };

static void GLShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLShader_obj::__mClass,"__mClass");
};

#endif

hx::Class GLShader_obj::__mClass;

void GLShader_obj::__register()
{
	hx::Object *dummy = new GLShader_obj;
	GLShader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.gl.GLShader","\x2f","\x4d","\x67","\xdf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLShader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLShader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLShader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace gl
