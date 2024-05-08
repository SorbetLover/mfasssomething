#include <hxcpp.h>

#ifndef INCLUDED_ChegoumsgState
#include <ChegoumsgState.h>
#endif
#ifndef INCLUDED_MainMenu
#include <MainMenu.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#include <flixel/addons/display/FlxBackdrop.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedContainer
#include <flixel/group/FlxTypedContainer.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSoundGroup
#include <flixel/sound/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_typeLimit__NextState_NextState_Impl_
#include <flixel/util/typeLimit/_NextState/NextState_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_137c8ee62fa992e2_13_new,"ChegoumsgState","new",0xcd51bfcf,"ChegoumsgState.new","ChegoumsgState.hx",13,0xefb36e81)
HX_LOCAL_STACK_FRAME(_hx_pos_137c8ee62fa992e2_19_create,"ChegoumsgState","create",0x6e8f86ed,"ChegoumsgState.create","ChegoumsgState.hx",19,0xefb36e81)
HX_LOCAL_STACK_FRAME(_hx_pos_137c8ee62fa992e2_35_update,"ChegoumsgState","update",0x7985a5fa,"ChegoumsgState.update","ChegoumsgState.hx",35,0xefb36e81)
HX_LOCAL_STACK_FRAME(_hx_pos_137c8ee62fa992e2_40_update,"ChegoumsgState","update",0x7985a5fa,"ChegoumsgState.update","ChegoumsgState.hx",40,0xefb36e81)
HX_LOCAL_STACK_FRAME(_hx_pos_137c8ee62fa992e2_49_startmovements,"ChegoumsgState","startmovements",0xf13fecb3,"ChegoumsgState.startmovements","ChegoumsgState.hx",49,0xefb36e81)
HX_LOCAL_STACK_FRAME(_hx_pos_137c8ee62fa992e2_45_startmovements,"ChegoumsgState","startmovements",0xf13fecb3,"ChegoumsgState.startmovements","ChegoumsgState.hx",45,0xefb36e81)

void ChegoumsgState_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_137c8ee62fa992e2_13_new)
HXLINE(  16)		this->aaaa = true;
HXLINE(  13)		super::__construct();
            	}

Dynamic ChegoumsgState_obj::__CreateEmpty() { return new ChegoumsgState_obj; }

void *ChegoumsgState_obj::_hx_vtable = 0;

Dynamic ChegoumsgState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChegoumsgState_obj > _hx_result = new ChegoumsgState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ChegoumsgState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x563293a6) {
			if (inClassId<=(int)0x0cb7af1d) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0cb7af1d;
			} else {
				return inClassId==(int)0x563293a6;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void ChegoumsgState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_137c8ee62fa992e2_19_create)
HXLINE(  20)		this->super::create();
HXLINE(  22)		this->mfbackdrop =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  23)		this->mfbackdrop->loadGraphic(HX_("assets/images/chegoumsg.png",e4,51,92,d5),null(),null(),null(),null(),null());
HXLINE(  24)		this->mfbackdrop->repeatAxes = 1;
HXLINE(  25)		{
HXLINE(  25)			 ::flixel::math::FlxBasePoint this1 = this->mfbackdrop->velocity;
HXDLIN(  25)			this1->set_x(( (Float)(100) ));
HXDLIN(  25)			this1->set_y(( (Float)(100) ));
            		}
HXLINE(  26)		this->mfbackdrop->spacing->set_x(( (Float)(100) ));
HXLINE(  27)		{
HXLINE(  27)			 ::flixel::math::FlxBasePoint this2 = this->mfbackdrop->scale;
HXDLIN(  27)			this2->set_x(( (Float)(5) ));
HXDLIN(  27)			this2->set_y(( (Float)(5) ));
            		}
HXLINE(  28)		{
HXLINE(  28)			 ::flixel::addons::display::FlxBackdrop _this = this->mfbackdrop;
HXDLIN(  28)			int axes = 17;
HXDLIN(  28)			bool _hx_tmp;
HXDLIN(  28)			if ((axes != 1)) {
HXLINE(  28)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  28)				_hx_tmp = true;
            			}
HXDLIN(  28)			if (_hx_tmp) {
HXLINE(  28)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  28)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  28)			bool _hx_tmp1;
HXDLIN(  28)			if ((axes != 16)) {
HXLINE(  28)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  28)				_hx_tmp1 = true;
            			}
HXDLIN(  28)			if (_hx_tmp1) {
HXLINE(  28)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  28)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  29)		this->add(this->mfbackdrop);
HXLINE(  30)		::flixel::FlxG_obj::sound->playMusic(HX_("assets/music/chegoumsgogg.ogg",32,a1,e1,be),1,null(),null());
HXLINE(  31)		this->startmovements();
            	}


void ChegoumsgState_obj::update(Float _elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_137c8ee62fa992e2_35_update)
HXLINE(  36)		this->aaaa = true;
HXLINE(  37)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  37)		if (_this->keyManager->checkStatusUnsafe(27,_this->status)) {
HXLINE(  39)			::flixel::FlxG_obj::sound->music->destroy();
HXLINE(  40)			{
HXLINE(  40)				 ::Dynamic nextState = ::flixel::util::typeLimit::_NextState::NextState_Impl__obj::fromState( ::MainMenu_obj::__alloc( HX_CTX ));
HXDLIN(  40)				 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN(  40)				bool _hx_tmp;
HXDLIN(  40)				if (::Std_obj::isOfType(nextState,::hx::ClassOf< ::flixel::FlxState >())) {
HXLINE(  40)					_hx_tmp = ::flixel::FlxG_obj::canSwitchTo(( ( ::flixel::FlxState)(nextState) ));
            				}
            				else {
HXLINE(  40)					_hx_tmp = true;
            				}
HXDLIN(  40)				if (_hx_tmp) {
            					HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            					void _hx_run(){
            						HX_GC_STACKFRAME(&_hx_pos_137c8ee62fa992e2_40_update)
HXLINE(  40)						if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXLINE(  40)							::flixel::FlxG_obj::game->_nextState = nextState;
            						}
            						else {
HXLINE(  40)							::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            						}
            					}
            					HX_END_LOCAL_FUNC0((void))

HXLINE(  40)					::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_0(nextState,stateOnCall)));
            				}
            			}
            		}
            	}


void ChegoumsgState_obj::startmovements(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::ChegoumsgState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_137c8ee62fa992e2_49_startmovements)
HXLINE(  49)			_gthis->startmovements();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_137c8ee62fa992e2_45_startmovements)
HXDLIN(  45)		 ::ChegoumsgState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  46)		 ::flixel::addons::display::FlxBackdrop fh = this->mfbackdrop;
HXDLIN(  46)		fh->set_x((fh->x + 10));
HXLINE(  47)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.001), ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ChegoumsgState_obj,startmovements,(void))


::hx::ObjectPtr< ChegoumsgState_obj > ChegoumsgState_obj::__new() {
	::hx::ObjectPtr< ChegoumsgState_obj > __this = new ChegoumsgState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ChegoumsgState_obj > ChegoumsgState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ChegoumsgState_obj *__this = (ChegoumsgState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChegoumsgState_obj), true, "ChegoumsgState"));
	*(void **)__this = ChegoumsgState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ChegoumsgState_obj::ChegoumsgState_obj()
{
}

void ChegoumsgState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChegoumsgState);
	HX_MARK_MEMBER_NAME(mfbackdrop,"mfbackdrop");
	HX_MARK_MEMBER_NAME(aaaa,"aaaa");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ChegoumsgState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mfbackdrop,"mfbackdrop");
	HX_VISIT_MEMBER_NAME(aaaa,"aaaa");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ChegoumsgState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"aaaa") ) { return ::hx::Val( aaaa ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mfbackdrop") ) { return ::hx::Val( mfbackdrop ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"startmovements") ) { return ::hx::Val( startmovements_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ChegoumsgState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"aaaa") ) { aaaa=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mfbackdrop") ) { mfbackdrop=inValue.Cast<  ::flixel::addons::display::FlxBackdrop >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChegoumsgState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mfbackdrop",2f,92,7b,06));
	outFields->push(HX_("aaaa",c0,a1,67,40));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChegoumsgState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::addons::display::FlxBackdrop */ ,(int)offsetof(ChegoumsgState_obj,mfbackdrop),HX_("mfbackdrop",2f,92,7b,06)},
	{::hx::fsBool,(int)offsetof(ChegoumsgState_obj,aaaa),HX_("aaaa",c0,a1,67,40)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ChegoumsgState_obj_sStaticStorageInfo = 0;
#endif

static ::String ChegoumsgState_obj_sMemberFields[] = {
	HX_("mfbackdrop",2f,92,7b,06),
	HX_("aaaa",c0,a1,67,40),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("startmovements",c2,f3,c4,ad),
	::String(null()) };

::hx::Class ChegoumsgState_obj::__mClass;

void ChegoumsgState_obj::__register()
{
	ChegoumsgState_obj _hx_dummy;
	ChegoumsgState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ChegoumsgState",5d,2c,cc,2a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChegoumsgState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChegoumsgState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChegoumsgState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChegoumsgState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

