// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED__List_ListNode
#include <_List/ListNode.h>
#endif
#ifndef INCLUDED_cpp_vm_Mutex
#include <cpp/vm/Mutex.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLLoader
#include <openfl/_legacy/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl__legacy_net__URLLoader_ManagersThreadMessage
#include <openfl/_legacy/net/_URLLoader/ManagersThreadMessage.h>
#endif
#ifndef INCLUDED_openfl__legacy_net__URLLoader_URLLoadersManager
#include <openfl/_legacy/net/_URLLoader/URLLoadersManager.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_46_new,"openfl._legacy.net._URLLoader.URLLoadersManager","new",0xbbd4e2d8,"openfl._legacy.net._URLLoader.URLLoadersManager.new","openfl/_legacy/net/URLLoader.hx",46,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_55_mainLoop,"openfl._legacy.net._URLLoader.URLLoadersManager","mainLoop",0xf86b15c5,"openfl._legacy.net._URLLoader.URLLoadersManager.mainLoop","openfl/_legacy/net/URLLoader.hx",55,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_97_enqueueLoad,"openfl._legacy.net._URLLoader.URLLoadersManager","enqueueLoad",0xc12c0d46,"openfl._legacy.net._URLLoader.URLLoadersManager.enqueueLoad","openfl/_legacy/net/URLLoader.hx",97,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_104_activeLoadersIsEmpty,"openfl._legacy.net._URLLoader.URLLoadersManager","activeLoadersIsEmpty",0xee882811,"openfl._legacy.net._URLLoader.URLLoadersManager.activeLoadersIsEmpty","openfl/_legacy/net/URLLoader.hx",104,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_108_getActiveLoaders,"openfl._legacy.net._URLLoader.URLLoadersManager","getActiveLoaders",0x03d47fec,"openfl._legacy.net._URLLoader.URLLoadersManager.getActiveLoaders","openfl/_legacy/net/URLLoader.hx",108,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_112_create,"openfl._legacy.net._URLLoader.URLLoadersManager","create",0x5c572f84,"openfl._legacy.net._URLLoader.URLLoadersManager.create","openfl/_legacy/net/URLLoader.hx",112,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_116_updateLoader,"openfl._legacy.net._URLLoader.URLLoadersManager","updateLoader",0x03e7cd84,"openfl._legacy.net._URLLoader.URLLoadersManager.updateLoader","openfl/_legacy/net/URLLoader.hx",116,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_120_getCode,"openfl._legacy.net._URLLoader.URLLoadersManager","getCode",0x72cf0f5b,"openfl._legacy.net._URLLoader.URLLoadersManager.getCode","openfl/_legacy/net/URLLoader.hx",120,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_124_getErrorMessage,"openfl._legacy.net._URLLoader.URLLoadersManager","getErrorMessage",0x223a570d,"openfl._legacy.net._URLLoader.URLLoadersManager.getErrorMessage","openfl/_legacy/net/URLLoader.hx",124,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_128_getData,"openfl._legacy.net._URLLoader.URLLoadersManager","getData",0x736db458,"openfl._legacy.net._URLLoader.URLLoadersManager.getData","openfl/_legacy/net/URLLoader.hx",128,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_132_getHeaders,"openfl._legacy.net._URLLoader.URLLoadersManager","getHeaders",0x34b484d8,"openfl._legacy.net._URLLoader.URLLoadersManager.getHeaders","openfl/_legacy/net/URLLoader.hx",132,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_135_initialize,"openfl._legacy.net._URLLoader.URLLoadersManager","initialize",0x6f05ddd8,"openfl._legacy.net._URLLoader.URLLoadersManager.initialize","openfl/_legacy/net/URLLoader.hx",135,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_140_getCookies,"openfl._legacy.net._URLLoader.URLLoadersManager","getCookies",0x789a69e1,"openfl._legacy.net._URLLoader.URLLoadersManager.getCookies","openfl/_legacy/net/URLLoader.hx",140,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_39_getInstance,"openfl._legacy.net._URLLoader.URLLoadersManager","getInstance",0xfee12cc3,"openfl._legacy.net._URLLoader.URLLoadersManager.getInstance","openfl/_legacy/net/URLLoader.hx",39,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_154_boot,"openfl._legacy.net._URLLoader.URLLoadersManager","boot",0x968a9aba,"openfl._legacy.net._URLLoader.URLLoadersManager.boot","openfl/_legacy/net/URLLoader.hx",154,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_155_boot,"openfl._legacy.net._URLLoader.URLLoadersManager","boot",0x968a9aba,"openfl._legacy.net._URLLoader.URLLoadersManager.boot","openfl/_legacy/net/URLLoader.hx",155,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_156_boot,"openfl._legacy.net._URLLoader.URLLoadersManager","boot",0x968a9aba,"openfl._legacy.net._URLLoader.URLLoadersManager.boot","openfl/_legacy/net/URLLoader.hx",156,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_157_boot,"openfl._legacy.net._URLLoader.URLLoadersManager","boot",0x968a9aba,"openfl._legacy.net._URLLoader.URLLoadersManager.boot","openfl/_legacy/net/URLLoader.hx",157,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_158_boot,"openfl._legacy.net._URLLoader.URLLoadersManager","boot",0x968a9aba,"openfl._legacy.net._URLLoader.URLLoadersManager.boot","openfl/_legacy/net/URLLoader.hx",158,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_159_boot,"openfl._legacy.net._URLLoader.URLLoadersManager","boot",0x968a9aba,"openfl._legacy.net._URLLoader.URLLoadersManager.boot","openfl/_legacy/net/URLLoader.hx",159,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_160_boot,"openfl._legacy.net._URLLoader.URLLoadersManager","boot",0x968a9aba,"openfl._legacy.net._URLLoader.URLLoadersManager.boot","openfl/_legacy/net/URLLoader.hx",160,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_161_boot,"openfl._legacy.net._URLLoader.URLLoadersManager","boot",0x968a9aba,"openfl._legacy.net._URLLoader.URLLoadersManager.boot","openfl/_legacy/net/URLLoader.hx",161,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_f7c1a3a55c08347e_162_boot,"openfl._legacy.net._URLLoader.URLLoadersManager","boot",0x968a9aba,"openfl._legacy.net._URLLoader.URLLoadersManager.boot","openfl/_legacy/net/URLLoader.hx",162,0xef414054)
namespace openfl{
namespace _legacy{
namespace net{
namespace _URLLoader{

void URLLoadersManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_46_new)
HXLINE(  47)		this->activeLoaders =  ::List_obj::__alloc( HX_CTX );
HXLINE(  48)		this->loadsQueue = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  49)		this->loadsQueueMutex =  ::cpp::vm::Mutex_obj::__alloc( HX_CTX );
HXLINE(  50)		this->managersThread = ::cpp::vm::Thread_obj::create(this->mainLoop_dyn());
            	}

Dynamic URLLoadersManager_obj::__CreateEmpty() { return new URLLoadersManager_obj; }

void *URLLoadersManager_obj::_hx_vtable = 0;

Dynamic URLLoadersManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< URLLoadersManager_obj > _hx_result = new URLLoadersManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool URLLoadersManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x19077d74;
}

void URLLoadersManager_obj::mainLoop(){
            	HX_GC_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_55_mainLoop)
HXDLIN(  55)		while(true){
HXLINE(  57)			this->loadsQueueMutex->acquire();
HXLINE(  58)			 ::Dynamic loadCall = this->loadsQueue->shift();
HXLINE(  59)			this->loadsQueueMutex->release();
HXLINE(  60)			if (hx::IsNotNull( loadCall )) {
HXLINE(  61)				( ( ::openfl::_legacy::net::URLLoader)(loadCall->__Field(HX_("loader",13,48,6f,58),hx::paccDynamic)) )->loadInCURLThread(( ( ::openfl::_legacy::net::URLRequest)(loadCall->__Field(HX_("request",4f,df,84,44),hx::paccDynamic)) ));
            			}
HXLINE(  64)			if (!(this->activeLoaders->isEmpty())) {
HXLINE(  65)				::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_process_loaders();
HXLINE(  66)				 ::List oldLoaders = this->activeLoaders;
HXLINE(  67)				this->activeLoaders =  ::List_obj::__alloc( HX_CTX );
HXLINE(  68)				{
HXLINE(  68)					 ::_List::ListNode _g_head = oldLoaders->h;
HXDLIN(  68)					while(hx::IsNotNull( _g_head )){
HXLINE(  68)						 ::openfl::_legacy::net::URLLoader val = ( ( ::openfl::_legacy::net::URLLoader)(_g_head->item) );
HXDLIN(  68)						_g_head = _g_head->next;
HXDLIN(  68)						 ::openfl::_legacy::net::URLLoader loader = val;
HXLINE(  69)						loader->update();
HXLINE(  70)						if ((loader->state == (int)2)) {
HXLINE(  71)							this->activeLoaders->push(loader);
            						}
            					}
            				}
            			}
HXLINE(  76)			 ::openfl::_legacy::net::_URLLoader::ManagersThreadMessage msg = ::cpp::vm::Thread_obj::readMessage(false);
HXLINE(  77)			if (hx::IsNotNull( msg )) {
HXLINE(  78)				msg = msg;
HXLINE(  79)				switch((int)(_hx_getEnumValueIndex(msg))){
            					case (int)0: {
HXLINE(  80)						 ::Dynamic handle = msg->_hx_getObject(1);
HXDLIN(  80)						 ::cpp::vm::Thread callerThread = msg->_hx_getObject(0).StaticCast<  ::cpp::vm::Thread >();
HXDLIN(  80)						{
HXLINE(  81)							::Array< ::String > cookies = ( (::Array< ::String >)(::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_get_cookies(handle)) );
HXLINE(  82)							callerThread->sendMessage(::openfl::_legacy::net::_URLLoader::ManagersThreadMessage_obj::GetCookiesResponse(cookies));
            						}
            					}
            					break;
            					case (int)2: {
HXLINE(  84)						::String caCertFilePath = msg->_hx_getString(0);
HXLINE(  85)						::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_initialize(caCertFilePath);
            					}
            					break;
            					default:{
            					}
            				}
            			}
HXLINE(  91)			::Sys_obj::sleep(((Float)0.1));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(URLLoadersManager_obj,mainLoop,(void))

void URLLoadersManager_obj::enqueueLoad( ::openfl::_legacy::net::URLLoader loader, ::openfl::_legacy::net::URLRequest request){
            	HX_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_97_enqueueLoad)
HXLINE(  98)		this->loadsQueueMutex->acquire();
HXLINE(  99)		this->loadsQueue->push( ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("request",4f,df,84,44),request)
            			->setFixed(1,HX_("loader",13,48,6f,58),loader)));
HXLINE( 100)		this->loadsQueueMutex->release();
            	}


HX_DEFINE_DYNAMIC_FUNC2(URLLoadersManager_obj,enqueueLoad,(void))

bool URLLoadersManager_obj::activeLoadersIsEmpty(){
            	HX_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_104_activeLoadersIsEmpty)
HXDLIN( 104)		return this->activeLoaders->isEmpty();
            	}


HX_DEFINE_DYNAMIC_FUNC0(URLLoadersManager_obj,activeLoadersIsEmpty,return )

 ::List URLLoadersManager_obj::getActiveLoaders(){
            	HX_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_108_getActiveLoaders)
HXDLIN( 108)		return this->activeLoaders;
            	}


HX_DEFINE_DYNAMIC_FUNC0(URLLoadersManager_obj,getActiveLoaders,return )

 ::Dynamic URLLoadersManager_obj::create( ::openfl::_legacy::net::URLRequest request){
            	HX_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_112_create)
HXDLIN( 112)		return ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_create(request);
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,create,return )

void URLLoadersManager_obj::updateLoader( ::Dynamic handle, ::openfl::_legacy::net::URLLoader loader){
            	HX_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_116_updateLoader)
HXDLIN( 116)		::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_update_loader(handle,loader);
            	}


HX_DEFINE_DYNAMIC_FUNC2(URLLoadersManager_obj,updateLoader,(void))

int URLLoadersManager_obj::getCode( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_120_getCode)
HXDLIN( 120)		return ( (int)(::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_get_code(handle)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,getCode,return )

::String URLLoadersManager_obj::getErrorMessage( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_124_getErrorMessage)
HXDLIN( 124)		return ( (::String)(::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_get_error_message(handle)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,getErrorMessage,return )

 ::openfl::_legacy::utils::ByteArray URLLoadersManager_obj::getData( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_128_getData)
HXDLIN( 128)		return ( ( ::openfl::_legacy::utils::ByteArray)(::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_get_data(handle)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,getData,return )

::Array< ::String > URLLoadersManager_obj::getHeaders( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_132_getHeaders)
HXDLIN( 132)		return ( (::Array< ::String >)(::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_get_headers(handle)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,getHeaders,return )

void URLLoadersManager_obj::initialize(::String caCertFilePath){
            	HX_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_135_initialize)
HXLINE( 136)		 ::cpp::vm::Thread _hx_tmp = this->managersThread;
HXDLIN( 136)		_hx_tmp->sendMessage(::openfl::_legacy::net::_URLLoader::ManagersThreadMessage_obj::InitializeCall(caCertFilePath));
HXLINE( 137)		return;
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,initialize,(void))

::Array< ::String > URLLoadersManager_obj::getCookies( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_140_getCookies)
HXLINE( 141)		 ::cpp::vm::Thread _hx_tmp = this->managersThread;
HXDLIN( 141)		_hx_tmp->sendMessage(::openfl::_legacy::net::_URLLoader::ManagersThreadMessage_obj::GetCookiesCall(::cpp::vm::Thread_obj::current(),handle));
HXLINE( 142)		 ::openfl::_legacy::net::_URLLoader::ManagersThreadMessage msg = ::cpp::vm::Thread_obj::readMessage(true);
HXLINE( 143)		if ((_hx_getEnumValueIndex(msg) == (int)1)) {
HXLINE( 144)			::Array< ::String > result = msg->_hx_getObject(0).StaticCast< ::Array< ::String > >();
HXLINE( 145)			return result;
            		}
            		else {
HXLINE( 148)			return ::Array_obj< ::String >::__new(0);
            		}
HXLINE( 143)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,getCookies,return )

 ::openfl::_legacy::net::_URLLoader::URLLoadersManager URLLoadersManager_obj::instance;

 ::openfl::_legacy::net::_URLLoader::URLLoadersManager URLLoadersManager_obj::getInstance(){
            	HX_GC_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_39_getInstance)
HXLINE(  40)		if (hx::IsNull( ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::instance )) {
HXLINE(  41)			::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::instance =  ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::__alloc( HX_CTX );
            		}
HXLINE(  43)		return ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoadersManager_obj,getInstance,return )

 ::Dynamic URLLoadersManager_obj::lime_curl_create;

 ::Dynamic URLLoadersManager_obj::lime_curl_process_loaders;

 ::Dynamic URLLoadersManager_obj::lime_curl_update_loader;

 ::Dynamic URLLoadersManager_obj::lime_curl_get_code;

 ::Dynamic URLLoadersManager_obj::lime_curl_get_error_message;

 ::Dynamic URLLoadersManager_obj::lime_curl_get_data;

 ::Dynamic URLLoadersManager_obj::lime_curl_get_cookies;

 ::Dynamic URLLoadersManager_obj::lime_curl_get_headers;

 ::Dynamic URLLoadersManager_obj::lime_curl_initialize;


hx::ObjectPtr< URLLoadersManager_obj > URLLoadersManager_obj::__new() {
	hx::ObjectPtr< URLLoadersManager_obj > __this = new URLLoadersManager_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< URLLoadersManager_obj > URLLoadersManager_obj::__alloc(hx::Ctx *_hx_ctx) {
	URLLoadersManager_obj *__this = (URLLoadersManager_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(URLLoadersManager_obj), true, "openfl._legacy.net._URLLoader.URLLoadersManager"));
	*(void **)__this = URLLoadersManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

URLLoadersManager_obj::URLLoadersManager_obj()
{
}

void URLLoadersManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLLoadersManager);
	HX_MARK_MEMBER_NAME(managersThread,"managersThread");
	HX_MARK_MEMBER_NAME(activeLoaders,"activeLoaders");
	HX_MARK_MEMBER_NAME(loadsQueue,"loadsQueue");
	HX_MARK_MEMBER_NAME(loadsQueueMutex,"loadsQueueMutex");
	HX_MARK_END_CLASS();
}

void URLLoadersManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(managersThread,"managersThread");
	HX_VISIT_MEMBER_NAME(activeLoaders,"activeLoaders");
	HX_VISIT_MEMBER_NAME(loadsQueue,"loadsQueue");
	HX_VISIT_MEMBER_NAME(loadsQueueMutex,"loadsQueueMutex");
}

hx::Val URLLoadersManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getCode") ) { return hx::Val( getCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"getData") ) { return hx::Val( getData_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mainLoop") ) { return hx::Val( mainLoop_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadsQueue") ) { return hx::Val( loadsQueue ); }
		if (HX_FIELD_EQ(inName,"getHeaders") ) { return hx::Val( getHeaders_dyn() ); }
		if (HX_FIELD_EQ(inName,"initialize") ) { return hx::Val( initialize_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCookies") ) { return hx::Val( getCookies_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"enqueueLoad") ) { return hx::Val( enqueueLoad_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateLoader") ) { return hx::Val( updateLoader_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeLoaders") ) { return hx::Val( activeLoaders ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"managersThread") ) { return hx::Val( managersThread ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadsQueueMutex") ) { return hx::Val( loadsQueueMutex ); }
		if (HX_FIELD_EQ(inName,"getErrorMessage") ) { return hx::Val( getErrorMessage_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getActiveLoaders") ) { return hx::Val( getActiveLoaders_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"activeLoadersIsEmpty") ) { return hx::Val( activeLoadersIsEmpty_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool URLLoadersManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { outValue = getInstance_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_curl_create") ) { outValue = ( lime_curl_create ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_curl_get_code") ) { outValue = ( lime_curl_get_code ); return true; }
		if (HX_FIELD_EQ(inName,"lime_curl_get_data") ) { outValue = ( lime_curl_get_data ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_curl_initialize") ) { outValue = ( lime_curl_initialize ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_curl_get_cookies") ) { outValue = ( lime_curl_get_cookies ); return true; }
		if (HX_FIELD_EQ(inName,"lime_curl_get_headers") ) { outValue = ( lime_curl_get_headers ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_curl_update_loader") ) { outValue = ( lime_curl_update_loader ); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_curl_process_loaders") ) { outValue = ( lime_curl_process_loaders ); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_curl_get_error_message") ) { outValue = ( lime_curl_get_error_message ); return true; }
	}
	return false;
}

hx::Val URLLoadersManager_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"loadsQueue") ) { loadsQueue=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeLoaders") ) { activeLoaders=inValue.Cast<  ::List >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"managersThread") ) { managersThread=inValue.Cast<  ::cpp::vm::Thread >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadsQueueMutex") ) { loadsQueueMutex=inValue.Cast<  ::cpp::vm::Mutex >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool URLLoadersManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::openfl::_legacy::net::_URLLoader::URLLoadersManager >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_curl_create") ) { lime_curl_create=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_curl_get_code") ) { lime_curl_get_code=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_curl_get_data") ) { lime_curl_get_data=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_curl_initialize") ) { lime_curl_initialize=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_curl_get_cookies") ) { lime_curl_get_cookies=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_curl_get_headers") ) { lime_curl_get_headers=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_curl_update_loader") ) { lime_curl_update_loader=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_curl_process_loaders") ) { lime_curl_process_loaders=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_curl_get_error_message") ) { lime_curl_get_error_message=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void URLLoadersManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("managersThread","\xd0","\x8c","\x61","\xe7"));
	outFields->push(HX_HCSTRING("activeLoaders","\xda","\x13","\xb9","\xc0"));
	outFields->push(HX_HCSTRING("loadsQueue","\xc4","\x36","\xb9","\x6c"));
	outFields->push(HX_HCSTRING("loadsQueueMutex","\x1b","\xc2","\x9e","\x1b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo URLLoadersManager_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::vm::Thread*/ ,(int)offsetof(URLLoadersManager_obj,managersThread),HX_HCSTRING("managersThread","\xd0","\x8c","\x61","\xe7")},
	{hx::fsObject /*::List*/ ,(int)offsetof(URLLoadersManager_obj,activeLoaders),HX_HCSTRING("activeLoaders","\xda","\x13","\xb9","\xc0")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(URLLoadersManager_obj,loadsQueue),HX_HCSTRING("loadsQueue","\xc4","\x36","\xb9","\x6c")},
	{hx::fsObject /*::cpp::vm::Mutex*/ ,(int)offsetof(URLLoadersManager_obj,loadsQueueMutex),HX_HCSTRING("loadsQueueMutex","\x1b","\xc2","\x9e","\x1b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo URLLoadersManager_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::net::_URLLoader::URLLoadersManager*/ ,(void *) &URLLoadersManager_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoadersManager_obj::lime_curl_create,HX_HCSTRING("lime_curl_create","\xc5","\x33","\xa9","\xa5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoadersManager_obj::lime_curl_process_loaders,HX_HCSTRING("lime_curl_process_loaders","\x07","\x1e","\x56","\x76")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoadersManager_obj::lime_curl_update_loader,HX_HCSTRING("lime_curl_update_loader","\x20","\xe5","\x16","\x0c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoadersManager_obj::lime_curl_get_code,HX_HCSTRING("lime_curl_get_code","\xbf","\xbd","\xbc","\xde")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoadersManager_obj::lime_curl_get_error_message,HX_HCSTRING("lime_curl_get_error_message","\x3e","\x34","\xef","\x7e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoadersManager_obj::lime_curl_get_data,HX_HCSTRING("lime_curl_get_data","\xbc","\x62","\x5b","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoadersManager_obj::lime_curl_get_cookies,HX_HCSTRING("lime_curl_get_cookies","\xfd","\xd1","\x06","\xc4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoadersManager_obj::lime_curl_get_headers,HX_HCSTRING("lime_curl_get_headers","\xf4","\xec","\x20","\x80")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoadersManager_obj::lime_curl_initialize,HX_HCSTRING("lime_curl_initialize","\x99","\x96","\xb5","\xd0")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String URLLoadersManager_obj_sMemberFields[] = {
	HX_HCSTRING("managersThread","\xd0","\x8c","\x61","\xe7"),
	HX_HCSTRING("activeLoaders","\xda","\x13","\xb9","\xc0"),
	HX_HCSTRING("loadsQueue","\xc4","\x36","\xb9","\x6c"),
	HX_HCSTRING("loadsQueueMutex","\x1b","\xc2","\x9e","\x1b"),
	HX_HCSTRING("mainLoop","\x3d","\x1b","\x3a","\xa0"),
	HX_HCSTRING("enqueueLoad","\xce","\xc2","\x1f","\x42"),
	HX_HCSTRING("activeLoadersIsEmpty","\x89","\x81","\x85","\x05"),
	HX_HCSTRING("getActiveLoaders","\x64","\xbd","\xd9","\x2a"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("updateLoader","\xfc","\xee","\x32","\x58"),
	HX_HCSTRING("getCode","\xe3","\x60","\x47","\x14"),
	HX_HCSTRING("getErrorMessage","\x95","\x70","\x2b","\x6e"),
	HX_HCSTRING("getData","\xe0","\x05","\xe6","\x14"),
	HX_HCSTRING("getHeaders","\x50","\xd8","\x69","\xb2"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("getCookies","\x59","\xbd","\x4f","\xf6"),
	::String(null()) };

static void URLLoadersManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_create,"lime_curl_create");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_process_loaders,"lime_curl_process_loaders");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_update_loader,"lime_curl_update_loader");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_code,"lime_curl_get_code");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_error_message,"lime_curl_get_error_message");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_data,"lime_curl_get_data");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_cookies,"lime_curl_get_cookies");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_headers,"lime_curl_get_headers");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_initialize,"lime_curl_initialize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void URLLoadersManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_create,"lime_curl_create");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_process_loaders,"lime_curl_process_loaders");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_update_loader,"lime_curl_update_loader");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_code,"lime_curl_get_code");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_error_message,"lime_curl_get_error_message");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_data,"lime_curl_get_data");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_cookies,"lime_curl_get_cookies");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_headers,"lime_curl_get_headers");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_initialize,"lime_curl_initialize");
};

#endif

hx::Class URLLoadersManager_obj::__mClass;

static ::String URLLoadersManager_obj_sStaticFields[] = {
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("getInstance","\x4b","\xe2","\xd4","\x7f"),
	HX_HCSTRING("lime_curl_create","\xc5","\x33","\xa9","\xa5"),
	HX_HCSTRING("lime_curl_process_loaders","\x07","\x1e","\x56","\x76"),
	HX_HCSTRING("lime_curl_update_loader","\x20","\xe5","\x16","\x0c"),
	HX_HCSTRING("lime_curl_get_code","\xbf","\xbd","\xbc","\xde"),
	HX_HCSTRING("lime_curl_get_error_message","\x3e","\x34","\xef","\x7e"),
	HX_HCSTRING("lime_curl_get_data","\xbc","\x62","\x5b","\xdf"),
	HX_HCSTRING("lime_curl_get_cookies","\xfd","\xd1","\x06","\xc4"),
	HX_HCSTRING("lime_curl_get_headers","\xf4","\xec","\x20","\x80"),
	HX_HCSTRING("lime_curl_initialize","\x99","\x96","\xb5","\xd0"),
	::String(null())
};

void URLLoadersManager_obj::__register()
{
	hx::Object *dummy = new URLLoadersManager_obj;
	URLLoadersManager_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.net._URLLoader.URLLoadersManager","\xe6","\xd6","\xcc","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &URLLoadersManager_obj::__GetStatic;
	__mClass->mSetStaticField = &URLLoadersManager_obj::__SetStatic;
	__mClass->mMarkFunc = URLLoadersManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(URLLoadersManager_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(URLLoadersManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< URLLoadersManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = URLLoadersManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = URLLoadersManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = URLLoadersManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void URLLoadersManager_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_154_boot)
HXDLIN( 154)		lime_curl_create = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_curl_create",23,e3,8d,e3),(int)1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_155_boot)
HXDLIN( 155)		lime_curl_process_loaders = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_curl_process_loaders",e9,92,3b,df),(int)0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_156_boot)
HXDLIN( 156)		lime_curl_update_loader = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_curl_update_loader",82,fd,3b,8f),(int)2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_157_boot)
HXDLIN( 157)		lime_curl_get_code = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_curl_get_code",9d,80,b2,e2),(int)1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_158_boot)
HXDLIN( 158)		lime_curl_get_error_message = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_curl_get_error_message",a0,25,c5,03),(int)1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_159_boot)
HXDLIN( 159)		lime_curl_get_data = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_curl_get_data",9a,25,51,e3),(int)1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_160_boot)
HXDLIN( 160)		lime_curl_get_cookies = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_curl_get_cookies",df,ad,53,b5),(int)1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_161_boot)
HXDLIN( 161)		lime_curl_get_headers = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_curl_get_headers",d6,c8,6d,71),(int)1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f7c1a3a55c08347e_162_boot)
HXDLIN( 162)		lime_curl_initialize = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_curl_initialize",f7,4c,c8,0f),(int)1);
            	}
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace net
} // end namespace _URLLoader
