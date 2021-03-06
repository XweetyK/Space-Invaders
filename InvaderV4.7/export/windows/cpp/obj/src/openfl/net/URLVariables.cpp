// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_openfl_net_URLVariables
#include <openfl/net/URLVariables.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ae98413ec59e2d36_9_new,"openfl.net.URLVariables","new",0x0e8c3f29,"openfl.net.URLVariables.new","openfl/net/URLVariables.hx",9,0x10f26625)
HX_LOCAL_STACK_FRAME(_hx_pos_ae98413ec59e2d36_18_decode,"openfl.net.URLVariables","decode",0x44099205,"openfl.net.URLVariables.decode","openfl/net/URLVariables.hx",18,0x10f26625)
HX_LOCAL_STACK_FRAME(_hx_pos_ae98413ec59e2d36_49_toString,"openfl.net.URLVariables","toString",0x3ea32943,"openfl.net.URLVariables.toString","openfl/net/URLVariables.hx",49,0x10f26625)
namespace openfl{
namespace net{

void URLVariables_obj::__construct(::String source){
            	HX_STACKFRAME(&_hx_pos_ae98413ec59e2d36_9_new)
HXDLIN(   9)		if (hx::IsNotNull( source )) {
HXLINE(  11)			this->decode(source);
            		}
            	}

Dynamic URLVariables_obj::__CreateEmpty() { return new URLVariables_obj; }

void *URLVariables_obj::_hx_vtable = 0;

Dynamic URLVariables_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< URLVariables_obj > _hx_result = new URLVariables_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool URLVariables_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a9610f5;
}

void URLVariables_obj::decode(::String source){
            	HX_STACKFRAME(&_hx_pos_ae98413ec59e2d36_18_decode)
HXLINE(  20)		::Array< ::String > fields = ::Reflect_obj::fields(hx::ObjectPtr<OBJ_>(this));
HXLINE(  22)		{
HXLINE(  22)			int _g = (int)0;
HXDLIN(  22)			while((_g < fields->length)){
HXLINE(  22)				::String f = fields->__get(_g);
HXDLIN(  22)				_g = (_g + (int)1);
HXLINE(  24)				::Reflect_obj::deleteField(hx::ObjectPtr<OBJ_>(this),f);
            			}
            		}
HXLINE(  28)		::Array< ::String > fields1 = source.split(HX_(";",3b,00,00,00))->join(HX_("&",26,00,00,00)).split(HX_("&",26,00,00,00));
HXLINE(  30)		{
HXLINE(  30)			int _g1 = (int)0;
HXDLIN(  30)			while((_g1 < fields1->length)){
HXLINE(  30)				::String f1 = fields1->__get(_g1);
HXDLIN(  30)				_g1 = (_g1 + (int)1);
HXLINE(  32)				int eq = f1.indexOf(HX_("=",3d,00,00,00),null());
HXLINE(  34)				if ((eq > (int)0)) {
HXLINE(  36)					::String _hx_tmp = ::StringTools_obj::urlDecode(f1.substr((int)0,eq));
HXDLIN(  36)					::Reflect_obj::setField(hx::ObjectPtr<OBJ_>(this),_hx_tmp,::StringTools_obj::urlDecode(f1.substr((eq + (int)1),null())));
            				}
            				else {
HXLINE(  38)					if ((eq != (int)0)) {
HXLINE(  40)						::Reflect_obj::setField(hx::ObjectPtr<OBJ_>(this),::StringTools_obj::urlDecode(f1),HX_("",00,00,00,00));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLVariables_obj,decode,(void))

::String URLVariables_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_ae98413ec59e2d36_49_toString)
HXLINE(  51)		::Array< ::String > result = ::Array_obj< ::String >::__new();
HXLINE(  52)		::Array< ::String > fields = ::Reflect_obj::fields(hx::ObjectPtr<OBJ_>(this));
HXLINE(  54)		{
HXLINE(  54)			int _g = (int)0;
HXDLIN(  54)			while((_g < fields->length)){
HXLINE(  54)				::String f = fields->__get(_g);
HXDLIN(  54)				_g = (_g + (int)1);
HXLINE(  56)				::String _hx_tmp = (::StringTools_obj::urlEncode(f) + HX_("=",3d,00,00,00));
HXDLIN(  56)				result->push((_hx_tmp + ::StringTools_obj::urlEncode(( (::String)(::Reflect_obj::field(hx::ObjectPtr<OBJ_>(this),f)) ))));
            			}
            		}
HXLINE(  60)		return result->join(HX_("&",26,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(URLVariables_obj,toString,return )


hx::ObjectPtr< URLVariables_obj > URLVariables_obj::__new(::String source) {
	hx::ObjectPtr< URLVariables_obj > __this = new URLVariables_obj();
	__this->__construct(source);
	return __this;
}

hx::ObjectPtr< URLVariables_obj > URLVariables_obj::__alloc(hx::Ctx *_hx_ctx,::String source) {
	URLVariables_obj *__this = (URLVariables_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(URLVariables_obj), true, "openfl.net.URLVariables"));
	*(void **)__this = URLVariables_obj::_hx_vtable;
	__this->__construct(source);
	return __this;
}

URLVariables_obj::URLVariables_obj()
{
}

void URLVariables_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLVariables);
	HX_MARK_DYNAMIC;
	HX_MARK_END_CLASS();
}

void URLVariables_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
}

hx::Val URLVariables_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { return hx::Val( decode_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

hx::Val URLVariables_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void URLVariables_obj::__GetFields(Array< ::String> &outFields)
{
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *URLVariables_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *URLVariables_obj_sStaticStorageInfo = 0;
#endif

static ::String URLVariables_obj_sMemberFields[] = {
	HX_HCSTRING("decode","\x2e","\x5d","\xed","\x64"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void URLVariables_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLVariables_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void URLVariables_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLVariables_obj::__mClass,"__mClass");
};

#endif

hx::Class URLVariables_obj::__mClass;

void URLVariables_obj::__register()
{
	hx::Object *dummy = new URLVariables_obj;
	URLVariables_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.net.URLVariables","\xb7","\x76","\x89","\xd0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = URLVariables_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(URLVariables_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< URLVariables_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = URLVariables_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = URLVariables_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = URLVariables_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace net
