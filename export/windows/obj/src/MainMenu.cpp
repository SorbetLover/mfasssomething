#include <hxcpp.h>

#ifndef INCLUDED_ChegoumsgState
#include <ChegoumsgState.h>
#endif
#ifndef INCLUDED_HaxeMenu
#include <HaxeMenu.h>
#endif
#ifndef INCLUDED_MainMenu
#include <MainMenu.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
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
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e14ecd74b1471178_10_new,"MainMenu","new",0x3124438a,"MainMenu.new","MainMenu.hx",10,0x3f5bfb26)
HX_LOCAL_STACK_FRAME(_hx_pos_e14ecd74b1471178_21_create,"MainMenu","create",0xcc8bca12,"MainMenu.create","MainMenu.hx",21,0x3f5bfb26)
HX_LOCAL_STACK_FRAME(_hx_pos_e14ecd74b1471178_52_update,"MainMenu","update",0xd781e91f,"MainMenu.update","MainMenu.hx",52,0x3f5bfb26)
HX_LOCAL_STACK_FRAME(_hx_pos_e14ecd74b1471178_55_update,"MainMenu","update",0xd781e91f,"MainMenu.update","MainMenu.hx",55,0x3f5bfb26)
HX_LOCAL_STACK_FRAME(_hx_pos_e14ecd74b1471178_76_update,"MainMenu","update",0xd781e91f,"MainMenu.update","MainMenu.hx",76,0x3f5bfb26)
HX_LOCAL_STACK_FRAME(_hx_pos_e14ecd74b1471178_85_update,"MainMenu","update",0xd781e91f,"MainMenu.update","MainMenu.hx",85,0x3f5bfb26)
HX_LOCAL_STACK_FRAME(_hx_pos_e14ecd74b1471178_94_changeselection,"MainMenu","changeselection",0xb9a84306,"MainMenu.changeselection","MainMenu.hx",94,0x3f5bfb26)

void MainMenu_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e14ecd74b1471178_10_new)
HXLINE(  17)		this->defaulty = ((Float)353);
HXLINE(  16)		this->thingselected = ((Float)1);
HXLINE(  15)		this->thingscaled = false;
HXLINE(  10)		super::__construct();
            	}

Dynamic MainMenu_obj::__CreateEmpty() { return new MainMenu_obj; }

void *MainMenu_obj::_hx_vtable = 0;

Dynamic MainMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainMenu_obj > _hx_result = new MainMenu_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MainMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x563293a6) {
			if (inClassId<=(int)0x2d004ebc) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2d004ebc;
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

void MainMenu_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_e14ecd74b1471178_21_create)
HXLINE(  22)		this->sprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  23)		this->sprite->loadGraphic(HX_("assets/images/drawers.png",52,4e,ca,7e),null(),null(),null(),null(),null());
HXLINE(  24)		{
HXLINE(  24)			 ::flixel::FlxSprite _this = this->sprite;
HXDLIN(  24)			int axes = 17;
HXDLIN(  24)			bool _hx_tmp;
HXDLIN(  24)			if ((axes != 1)) {
HXLINE(  24)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  24)				_hx_tmp = true;
            			}
HXDLIN(  24)			if (_hx_tmp) {
HXLINE(  24)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  24)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  24)			bool _hx_tmp1;
HXDLIN(  24)			if ((axes != 16)) {
HXLINE(  24)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  24)				_hx_tmp1 = true;
            			}
HXDLIN(  24)			if (_hx_tmp1) {
HXLINE(  24)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  24)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  25)		{
HXLINE(  25)			 ::flixel::math::FlxBasePoint this1 = this->sprite->scale;
HXDLIN(  25)			this1->set_x(( (Float)(1) ));
HXDLIN(  25)			this1->set_y(( (Float)(1) ));
            		}
HXLINE(  26)		this->add(this->sprite);
HXLINE(  28)		this->playst =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("PlayState",5d,83,c2,46),null(),null());
HXLINE(  29)		{
HXLINE(  29)			 ::flixel::text::FlxText _this1 = this->playst;
HXDLIN(  29)			int axes1 = 17;
HXDLIN(  29)			bool _hx_tmp2;
HXDLIN(  29)			if ((axes1 != 1)) {
HXLINE(  29)				_hx_tmp2 = (axes1 == 17);
            			}
            			else {
HXLINE(  29)				_hx_tmp2 = true;
            			}
HXDLIN(  29)			if (_hx_tmp2) {
HXLINE(  29)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  29)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  29)			bool _hx_tmp3;
HXDLIN(  29)			if ((axes1 != 16)) {
HXLINE(  29)				_hx_tmp3 = (axes1 == 17);
            			}
            			else {
HXLINE(  29)				_hx_tmp3 = true;
            			}
HXDLIN(  29)			if (_hx_tmp3) {
HXLINE(  29)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  29)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  31)		{
HXLINE(  31)			 ::flixel::math::FlxBasePoint this2 = this->playst->scale;
HXDLIN(  31)			this2->set_x(( (Float)(5) ));
HXDLIN(  31)			this2->set_y(( (Float)(5) ));
            		}
HXLINE(  32)		this->playst->set_alpha(( (Float)(1) ));
HXLINE(  33)		this->add(this->playst);
HXLINE(  35)		this->playst2 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("chegoumsg",34,71,b7,9d),null(),null());
HXLINE(  36)		{
HXLINE(  36)			 ::flixel::text::FlxText _this2 = this->playst2;
HXDLIN(  36)			int axes2 = 17;
HXDLIN(  36)			bool _hx_tmp4;
HXDLIN(  36)			if ((axes2 != 1)) {
HXLINE(  36)				_hx_tmp4 = (axes2 == 17);
            			}
            			else {
HXLINE(  36)				_hx_tmp4 = true;
            			}
HXDLIN(  36)			if (_hx_tmp4) {
HXLINE(  36)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  36)				_this2->set_x(((( (Float)(_hx_tmp) ) - _this2->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  36)			bool _hx_tmp5;
HXDLIN(  36)			if ((axes2 != 16)) {
HXLINE(  36)				_hx_tmp5 = (axes2 == 17);
            			}
            			else {
HXLINE(  36)				_hx_tmp5 = true;
            			}
HXDLIN(  36)			if (_hx_tmp5) {
HXLINE(  36)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  36)				_this2->set_y(((( (Float)(_hx_tmp) ) - _this2->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  38)		{
HXLINE(  38)			 ::flixel::math::FlxBasePoint this3 = this->playst2->scale;
HXDLIN(  38)			this3->set_x(( (Float)(5) ));
HXDLIN(  38)			this3->set_y(( (Float)(5) ));
            		}
HXLINE(  39)		this->playst2->set_alpha(( (Float)(1) ));
HXLINE(  40)		this->add(this->playst2);
HXLINE(  41)		this->changeselection();
HXLINE(  42)		::haxe::Log_obj::trace(this->playst->y,::hx::SourceInfo(HX_("source/MainMenu.hx",b2,28,26,8b),42,HX_("MainMenu",98,76,8d,7a),HX_("create",fc,66,0f,7c)));
HXLINE(  44)		this->screenfadething =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  45)		this->screenfadething->makeGraphic(3000,3000,null(),null(),HX_("000000",00,fe,3b,f4));
HXLINE(  46)		{
HXLINE(  46)			 ::flixel::FlxSprite _this3 = this->screenfadething;
HXDLIN(  46)			int axes3 = 17;
HXDLIN(  46)			bool _hx_tmp6;
HXDLIN(  46)			if ((axes3 != 1)) {
HXLINE(  46)				_hx_tmp6 = (axes3 == 17);
            			}
            			else {
HXLINE(  46)				_hx_tmp6 = true;
            			}
HXDLIN(  46)			if (_hx_tmp6) {
HXLINE(  46)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  46)				_this3->set_x(((( (Float)(_hx_tmp) ) - _this3->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  46)			bool _hx_tmp7;
HXDLIN(  46)			if ((axes3 != 16)) {
HXLINE(  46)				_hx_tmp7 = (axes3 == 17);
            			}
            			else {
HXLINE(  46)				_hx_tmp7 = true;
            			}
HXDLIN(  46)			if (_hx_tmp7) {
HXLINE(  46)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  46)				_this3->set_y(((( (Float)(_hx_tmp) ) - _this3->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  47)		this->screenfadething->set_alpha(( (Float)(0) ));
HXLINE(  48)		this->add(this->screenfadething);
            	}


void MainMenu_obj::update(Float _elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_e14ecd74b1471178_52_update)
HXLINE(  53)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  53)		if (_this->keyManager->checkStatusUnsafe(67,_this->status)) {
HXLINE(  55)			 ::Dynamic nextState = ::flixel::util::typeLimit::_NextState::NextState_Impl__obj::fromState( ::HaxeMenu_obj::__alloc( HX_CTX ));
HXDLIN(  55)			 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN(  55)			bool _hx_tmp;
HXDLIN(  55)			if (::Std_obj::isOfType(nextState,::hx::ClassOf< ::flixel::FlxState >())) {
HXLINE(  55)				_hx_tmp = ::flixel::FlxG_obj::canSwitchTo(( ( ::flixel::FlxState)(nextState) ));
            			}
            			else {
HXLINE(  55)				_hx_tmp = true;
            			}
HXDLIN(  55)			if (_hx_tmp) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_e14ecd74b1471178_55_update)
HXLINE(  55)					if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXLINE(  55)						::flixel::FlxG_obj::game->_nextState = nextState;
            					}
            					else {
HXLINE(  55)						::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE(  55)				::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_0(nextState,stateOnCall)));
            			}
            		}
HXLINE(  57)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  57)		if (_this1->keyManager->checkStatusUnsafe(87,_this1->status)) {
HXLINE(  59)			this->thingselected = (this->thingselected - ( (Float)(1) ));
HXLINE(  60)			this->changeselection();
            		}
HXLINE(  62)		 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  62)		if (_this2->keyManager->checkStatusUnsafe(83,_this2->status)) {
HXLINE(  64)			this->thingselected = (this->thingselected + 1);
HXLINE(  65)			this->changeselection();
            		}
HXLINE(  67)		 ::flixel::input::keyboard::FlxKeyList _this3 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  67)		if (_this3->keyManager->checkStatusUnsafe(13,_this3->status)) {
HXLINE(  69)			Float _hx_switch_0 = this->thingselected;
            			if (  (_hx_switch_0==( (Float)(1) )) ){
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            				void _hx_run( ::flixel::tweens::FlxTween _){
            					HX_GC_STACKFRAME(&_hx_pos_e14ecd74b1471178_76_update)
HXLINE(  76)					 ::Dynamic nextState = ::flixel::util::typeLimit::_NextState::NextState_Impl__obj::fromState( ::PlayState_obj::__alloc( HX_CTX ));
HXDLIN(  76)					 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN(  76)					bool _hx_tmp;
HXDLIN(  76)					if (::Std_obj::isOfType(nextState,::hx::ClassOf< ::flixel::FlxState >())) {
HXLINE(  76)						_hx_tmp = ::flixel::FlxG_obj::canSwitchTo(( ( ::flixel::FlxState)(nextState) ));
            					}
            					else {
HXLINE(  76)						_hx_tmp = true;
            					}
HXDLIN(  76)					if (_hx_tmp) {
            						HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            						void _hx_run(){
            							HX_GC_STACKFRAME(&_hx_pos_e14ecd74b1471178_76_update)
HXLINE(  76)							if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXLINE(  76)								::flixel::FlxG_obj::game->_nextState = nextState;
            							}
            							else {
HXLINE(  76)								::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            							}
            						}
            						HX_END_LOCAL_FUNC0((void))

HXLINE(  76)						::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_1(nextState,stateOnCall)));
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  72)				::flixel::tweens::FlxTween_obj::tween(this->screenfadething, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeOut_dyn())
            					->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_2()))));
HXDLIN(  72)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==( (Float)(2) )) ){
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_4) HXARGC(1)
            				void _hx_run( ::flixel::tweens::FlxTween _){
            					HX_GC_STACKFRAME(&_hx_pos_e14ecd74b1471178_85_update)
HXLINE(  85)					 ::Dynamic nextState = ::flixel::util::typeLimit::_NextState::NextState_Impl__obj::fromState( ::ChegoumsgState_obj::__alloc( HX_CTX ));
HXDLIN(  85)					 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN(  85)					bool _hx_tmp;
HXDLIN(  85)					if (::Std_obj::isOfType(nextState,::hx::ClassOf< ::flixel::FlxState >())) {
HXLINE(  85)						_hx_tmp = ::flixel::FlxG_obj::canSwitchTo(( ( ::flixel::FlxState)(nextState) ));
            					}
            					else {
HXLINE(  85)						_hx_tmp = true;
            					}
HXDLIN(  85)					if (_hx_tmp) {
            						HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_3, ::Dynamic,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            						void _hx_run(){
            							HX_GC_STACKFRAME(&_hx_pos_e14ecd74b1471178_85_update)
HXLINE(  85)							if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXLINE(  85)								::flixel::FlxG_obj::game->_nextState = nextState;
            							}
            							else {
HXLINE(  85)								::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            							}
            						}
            						HX_END_LOCAL_FUNC0((void))

HXLINE(  85)						::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_3(nextState,stateOnCall)));
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  81)				::flixel::tweens::FlxTween_obj::tween(this->screenfadething, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeOut_dyn())
            					->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_4()))));
HXDLIN(  81)				goto _hx_goto_2;
            			}
            			_hx_goto_2:;
            		}
            	}


void MainMenu_obj::changeselection(){
            	HX_STACKFRAME(&_hx_pos_e14ecd74b1471178_94_changeselection)
HXDLIN(  94)		Float _hx_switch_0 = this->thingselected;
            		if (  (_hx_switch_0==( (Float)(1) )) ){
HXLINE(  97)			::flixel::tweens::FlxTween_obj::tween(this->playst, ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("y",79,00,00,00),this->defaulty)
            				->setFixed(1,HX_("scale.x",94,2d,07,65),6)
            				->setFixed(2,HX_("scale.y",95,2d,07,65),6)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
HXLINE(  98)			::flixel::tweens::FlxTween_obj::tween(this->playst2, ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("y",79,00,00,00),(this->defaulty + 100))
            				->setFixed(1,HX_("scale.x",94,2d,07,65),5)
            				->setFixed(2,HX_("scale.y",95,2d,07,65),5)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
HXLINE(  96)			goto _hx_goto_9;
            		}
            		if (  (_hx_switch_0==( (Float)(2) )) ){
HXLINE( 100)			::flixel::tweens::FlxTween_obj::tween(this->playst, ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("y",79,00,00,00),(this->defaulty - ( (Float)(100) )))
            				->setFixed(1,HX_("scale.x",94,2d,07,65),5)
            				->setFixed(2,HX_("scale.y",95,2d,07,65),5)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
HXLINE( 101)			::flixel::tweens::FlxTween_obj::tween(this->playst2, ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("y",79,00,00,00),this->defaulty)
            				->setFixed(1,HX_("scale.x",94,2d,07,65),6)
            				->setFixed(2,HX_("scale.y",95,2d,07,65),6)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
HXLINE(  99)			goto _hx_goto_9;
            		}
            		_hx_goto_9:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MainMenu_obj,changeselection,(void))


::hx::ObjectPtr< MainMenu_obj > MainMenu_obj::__new() {
	::hx::ObjectPtr< MainMenu_obj > __this = new MainMenu_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MainMenu_obj > MainMenu_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MainMenu_obj *__this = (MainMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainMenu_obj), true, "MainMenu"));
	*(void **)__this = MainMenu_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MainMenu_obj::MainMenu_obj()
{
}

void MainMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainMenu);
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(playst,"playst");
	HX_MARK_MEMBER_NAME(playst2,"playst2");
	HX_MARK_MEMBER_NAME(thingscaled,"thingscaled");
	HX_MARK_MEMBER_NAME(thingselected,"thingselected");
	HX_MARK_MEMBER_NAME(defaulty,"defaulty");
	HX_MARK_MEMBER_NAME(screenfadething,"screenfadething");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(playst,"playst");
	HX_VISIT_MEMBER_NAME(playst2,"playst2");
	HX_VISIT_MEMBER_NAME(thingscaled,"thingscaled");
	HX_VISIT_MEMBER_NAME(thingselected,"thingselected");
	HX_VISIT_MEMBER_NAME(defaulty,"defaulty");
	HX_VISIT_MEMBER_NAME(screenfadething,"screenfadething");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MainMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return ::hx::Val( sprite ); }
		if (HX_FIELD_EQ(inName,"playst") ) { return ::hx::Val( playst ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playst2") ) { return ::hx::Val( playst2 ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"defaulty") ) { return ::hx::Val( defaulty ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"thingscaled") ) { return ::hx::Val( thingscaled ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"thingselected") ) { return ::hx::Val( thingselected ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"screenfadething") ) { return ::hx::Val( screenfadething ); }
		if (HX_FIELD_EQ(inName,"changeselection") ) { return ::hx::Val( changeselection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MainMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playst") ) { playst=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playst2") ) { playst2=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"defaulty") ) { defaulty=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"thingscaled") ) { thingscaled=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"thingselected") ) { thingselected=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"screenfadething") ) { screenfadething=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprite",05,dc,95,c3));
	outFields->push(HX_("playst",95,f7,b8,37));
	outFields->push(HX_("playst2",fd,aa,1f,8a));
	outFields->push(HX_("thingscaled",08,19,03,93));
	outFields->push(HX_("thingselected",49,50,c5,5c));
	outFields->push(HX_("defaulty",98,d0,99,af));
	outFields->push(HX_("screenfadething",06,68,52,16));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenu_obj,sprite),HX_("sprite",05,dc,95,c3)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MainMenu_obj,playst),HX_("playst",95,f7,b8,37)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MainMenu_obj,playst2),HX_("playst2",fd,aa,1f,8a)},
	{::hx::fsBool,(int)offsetof(MainMenu_obj,thingscaled),HX_("thingscaled",08,19,03,93)},
	{::hx::fsFloat,(int)offsetof(MainMenu_obj,thingselected),HX_("thingselected",49,50,c5,5c)},
	{::hx::fsFloat,(int)offsetof(MainMenu_obj,defaulty),HX_("defaulty",98,d0,99,af)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenu_obj,screenfadething),HX_("screenfadething",06,68,52,16)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MainMenu_obj_sStaticStorageInfo = 0;
#endif

static ::String MainMenu_obj_sMemberFields[] = {
	HX_("sprite",05,dc,95,c3),
	HX_("playst",95,f7,b8,37),
	HX_("playst2",fd,aa,1f,8a),
	HX_("thingscaled",08,19,03,93),
	HX_("thingselected",49,50,c5,5c),
	HX_("defaulty",98,d0,99,af),
	HX_("screenfadething",06,68,52,16),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("changeselection",dc,b8,e2,a6),
	::String(null()) };

::hx::Class MainMenu_obj::__mClass;

void MainMenu_obj::__register()
{
	MainMenu_obj _hx_dummy;
	MainMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MainMenu",98,76,8d,7a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainMenu_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

