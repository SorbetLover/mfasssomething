#include <hxcpp.h>

#ifndef INCLUDED_HaxeMenu
#include <HaxeMenu.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedContainer
#include <flixel/group/FlxTypedContainer.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_9a171bc7e793a4be_15_new,"HaxeMenu","new",0xc2477477,"HaxeMenu.new","HaxeMenu.hx",15,0x146306d9)
HX_LOCAL_STACK_FRAME(_hx_pos_9a171bc7e793a4be_79_create,"HaxeMenu","create",0xaa2e2b45,"HaxeMenu.create","HaxeMenu.hx",79,0x146306d9)
HX_LOCAL_STACK_FRAME(_hx_pos_9a171bc7e793a4be_85_create,"HaxeMenu","create",0xaa2e2b45,"HaxeMenu.create","HaxeMenu.hx",85,0x146306d9)
HX_LOCAL_STACK_FRAME(_hx_pos_9a171bc7e793a4be_89_create,"HaxeMenu","create",0xaa2e2b45,"HaxeMenu.create","HaxeMenu.hx",89,0x146306d9)
HX_LOCAL_STACK_FRAME(_hx_pos_9a171bc7e793a4be_93_create,"HaxeMenu","create",0xaa2e2b45,"HaxeMenu.create","HaxeMenu.hx",93,0x146306d9)
HX_LOCAL_STACK_FRAME(_hx_pos_9a171bc7e793a4be_97_create,"HaxeMenu","create",0xaa2e2b45,"HaxeMenu.create","HaxeMenu.hx",97,0x146306d9)
HX_LOCAL_STACK_FRAME(_hx_pos_9a171bc7e793a4be_100_create,"HaxeMenu","create",0xaa2e2b45,"HaxeMenu.create","HaxeMenu.hx",100,0x146306d9)
HX_LOCAL_STACK_FRAME(_hx_pos_9a171bc7e793a4be_110_create,"HaxeMenu","create",0xaa2e2b45,"HaxeMenu.create","HaxeMenu.hx",110,0x146306d9)
HX_LOCAL_STACK_FRAME(_hx_pos_9a171bc7e793a4be_26_create,"HaxeMenu","create",0xaa2e2b45,"HaxeMenu.create","HaxeMenu.hx",26,0x146306d9)
HX_LOCAL_STACK_FRAME(_hx_pos_9a171bc7e793a4be_114_update,"HaxeMenu","update",0xb5244a52,"HaxeMenu.update","HaxeMenu.hx",114,0x146306d9)

void HaxeMenu_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9a171bc7e793a4be_15_new)
HXDLIN(  15)		super::__construct();
            	}

Dynamic HaxeMenu_obj::__CreateEmpty() { return new HaxeMenu_obj; }

void *HaxeMenu_obj::_hx_vtable = 0;

Dynamic HaxeMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HaxeMenu_obj > _hx_result = new HaxeMenu_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HaxeMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x563293a6) {
			if (inClassId<=(int)0x36a52a8d) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x36a52a8d;
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

void HaxeMenu_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::HaxeMenu,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_9a171bc7e793a4be_79_create)
HXLINE(  80)			::flixel::tweens::FlxTween_obj::tween(_gthis->sprite1, ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("scale.x",94,2d,07,65),1)
            				->setFixed(1,HX_("scale.y",95,2d,07,65),1)),((Float)0.3), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::backOut_dyn())));
HXLINE(  81)			::flixel::tweens::FlxTween_obj::tween(_gthis->haxes, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.3), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::backOut_dyn())));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::HaxeMenu,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_9a171bc7e793a4be_85_create)
HXLINE(  85)			::flixel::tweens::FlxTween_obj::tween(_gthis->sprite2, ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("scale.x",94,2d,07,65),1)
            				->setFixed(1,HX_("scale.y",95,2d,07,65),1)),((Float)0.3), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::backOut_dyn())));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::HaxeMenu,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_9a171bc7e793a4be_89_create)
HXLINE(  89)			::flixel::tweens::FlxTween_obj::tween(_gthis->sprite3, ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("scale.x",94,2d,07,65),1)
            				->setFixed(1,HX_("scale.y",95,2d,07,65),1)),((Float)0.3), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::backOut_dyn())));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::HaxeMenu,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_9a171bc7e793a4be_93_create)
HXLINE(  93)			::flixel::tweens::FlxTween_obj::tween(_gthis->sprite4, ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("scale.x",94,2d,07,65),1)
            				->setFixed(1,HX_("scale.y",95,2d,07,65),1)),((Float)0.3), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::backOut_dyn())));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_4, ::HaxeMenu,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_9a171bc7e793a4be_97_create)
HXLINE(  97)			::flixel::tweens::FlxTween_obj::tween(_gthis->sprite5, ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("scale.x",94,2d,07,65),1)
            				->setFixed(1,HX_("scale.y",95,2d,07,65),1)),((Float)0.3), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::backOut_dyn())));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_5, ::HaxeMenu,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_9a171bc7e793a4be_100_create)
HXLINE( 101)			::flixel::tweens::FlxTween_obj::tween(_gthis->sprite1, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),2, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
HXLINE( 102)			::flixel::tweens::FlxTween_obj::tween(_gthis->sprite2, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),2, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
HXLINE( 103)			::flixel::tweens::FlxTween_obj::tween(_gthis->sprite3, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),2, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
HXLINE( 104)			::flixel::tweens::FlxTween_obj::tween(_gthis->sprite4, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),2, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
HXLINE( 105)			::flixel::tweens::FlxTween_obj::tween(_gthis->sprite5, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),2, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
HXLINE( 106)			::flixel::tweens::FlxTween_obj::tween(_gthis->haxes, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)2.5), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_7) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_9a171bc7e793a4be_110_create)
HXLINE( 110)			 ::Dynamic nextState = ::flixel::util::typeLimit::_NextState::NextState_Impl__obj::fromState( ::MainMenu_obj::__alloc( HX_CTX ));
HXDLIN( 110)			 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN( 110)			bool _hx_tmp;
HXDLIN( 110)			if (::Std_obj::isOfType(nextState,::hx::ClassOf< ::flixel::FlxState >())) {
HXLINE( 110)				_hx_tmp = ::flixel::FlxG_obj::canSwitchTo(( ( ::flixel::FlxState)(nextState) ));
            			}
            			else {
HXLINE( 110)				_hx_tmp = true;
            			}
HXDLIN( 110)			if (_hx_tmp) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_6, ::Dynamic,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_9a171bc7e793a4be_110_create)
HXLINE( 110)					if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXLINE( 110)						::flixel::FlxG_obj::game->_nextState = nextState;
            					}
            					else {
HXLINE( 110)						::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 110)				::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_6(nextState,stateOnCall)));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_9a171bc7e793a4be_26_create)
HXDLIN(  26)		 ::HaxeMenu _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  27)		this->super::create();
HXLINE(  28)		this->sprite1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  29)		this->sprite1->loadGraphic(HX_("assets/images/haxestartup/1.png",69,66,18,dd),null(),null(),null(),null(),null());
HXLINE(  30)		this->sprite1->set_alpha(( (Float)(1) ));
HXLINE(  32)		this->sprite2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  33)		this->sprite2->loadGraphic(HX_("assets/images/haxestartup/2.png",ea,fa,7e,70),null(),null(),null(),null(),null());
HXLINE(  34)		this->sprite2->set_alpha(( (Float)(1) ));
HXLINE(  36)		this->sprite3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  37)		this->sprite3->loadGraphic(HX_("assets/images/haxestartup/3.png",6b,8f,e5,03),null(),null(),null(),null(),null());
HXLINE(  38)		this->sprite3->set_alpha(( (Float)(1) ));
HXLINE(  40)		this->sprite4 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  41)		this->sprite4->loadGraphic(HX_("assets/images/haxestartup/4.png",ec,23,4c,97),null(),null(),null(),null(),null());
HXLINE(  42)		this->sprite4->set_alpha(( (Float)(1) ));
HXLINE(  44)		this->sprite5 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  45)		this->sprite5->loadGraphic(HX_("assets/images/haxestartup/5.png",6d,b8,b2,2a),null(),null(),null(),null(),null());
HXLINE(  46)		this->sprite5->set_alpha(( (Float)(1) ));
HXLINE(  48)		{
HXLINE(  48)			 ::flixel::FlxSprite _this = this->sprite1;
HXDLIN(  48)			int axes = 17;
HXDLIN(  48)			bool _hx_tmp;
HXDLIN(  48)			if ((axes != 1)) {
HXLINE(  48)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  48)				_hx_tmp = true;
            			}
HXDLIN(  48)			if (_hx_tmp) {
HXLINE(  48)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  48)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  48)			bool _hx_tmp1;
HXDLIN(  48)			if ((axes != 16)) {
HXLINE(  48)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  48)				_hx_tmp1 = true;
            			}
HXDLIN(  48)			if (_hx_tmp1) {
HXLINE(  48)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  48)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  49)		{
HXLINE(  49)			 ::flixel::FlxSprite _this1 = this->sprite2;
HXDLIN(  49)			int axes1 = 17;
HXDLIN(  49)			bool _hx_tmp2;
HXDLIN(  49)			if ((axes1 != 1)) {
HXLINE(  49)				_hx_tmp2 = (axes1 == 17);
            			}
            			else {
HXLINE(  49)				_hx_tmp2 = true;
            			}
HXDLIN(  49)			if (_hx_tmp2) {
HXLINE(  49)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  49)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  49)			bool _hx_tmp3;
HXDLIN(  49)			if ((axes1 != 16)) {
HXLINE(  49)				_hx_tmp3 = (axes1 == 17);
            			}
            			else {
HXLINE(  49)				_hx_tmp3 = true;
            			}
HXDLIN(  49)			if (_hx_tmp3) {
HXLINE(  49)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  49)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  50)		{
HXLINE(  50)			 ::flixel::FlxSprite _this2 = this->sprite3;
HXDLIN(  50)			int axes2 = 17;
HXDLIN(  50)			bool _hx_tmp4;
HXDLIN(  50)			if ((axes2 != 1)) {
HXLINE(  50)				_hx_tmp4 = (axes2 == 17);
            			}
            			else {
HXLINE(  50)				_hx_tmp4 = true;
            			}
HXDLIN(  50)			if (_hx_tmp4) {
HXLINE(  50)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  50)				_this2->set_x(((( (Float)(_hx_tmp) ) - _this2->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  50)			bool _hx_tmp5;
HXDLIN(  50)			if ((axes2 != 16)) {
HXLINE(  50)				_hx_tmp5 = (axes2 == 17);
            			}
            			else {
HXLINE(  50)				_hx_tmp5 = true;
            			}
HXDLIN(  50)			if (_hx_tmp5) {
HXLINE(  50)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  50)				_this2->set_y(((( (Float)(_hx_tmp) ) - _this2->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  51)		{
HXLINE(  51)			 ::flixel::FlxSprite _this3 = this->sprite4;
HXDLIN(  51)			int axes3 = 17;
HXDLIN(  51)			bool _hx_tmp6;
HXDLIN(  51)			if ((axes3 != 1)) {
HXLINE(  51)				_hx_tmp6 = (axes3 == 17);
            			}
            			else {
HXLINE(  51)				_hx_tmp6 = true;
            			}
HXDLIN(  51)			if (_hx_tmp6) {
HXLINE(  51)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  51)				_this3->set_x(((( (Float)(_hx_tmp) ) - _this3->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  51)			bool _hx_tmp7;
HXDLIN(  51)			if ((axes3 != 16)) {
HXLINE(  51)				_hx_tmp7 = (axes3 == 17);
            			}
            			else {
HXLINE(  51)				_hx_tmp7 = true;
            			}
HXDLIN(  51)			if (_hx_tmp7) {
HXLINE(  51)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  51)				_this3->set_y(((( (Float)(_hx_tmp) ) - _this3->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  52)		{
HXLINE(  52)			 ::flixel::FlxSprite _this4 = this->sprite5;
HXDLIN(  52)			int axes4 = 17;
HXDLIN(  52)			bool _hx_tmp8;
HXDLIN(  52)			if ((axes4 != 1)) {
HXLINE(  52)				_hx_tmp8 = (axes4 == 17);
            			}
            			else {
HXLINE(  52)				_hx_tmp8 = true;
            			}
HXDLIN(  52)			if (_hx_tmp8) {
HXLINE(  52)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  52)				_this4->set_x(((( (Float)(_hx_tmp) ) - _this4->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  52)			bool _hx_tmp9;
HXDLIN(  52)			if ((axes4 != 16)) {
HXLINE(  52)				_hx_tmp9 = (axes4 == 17);
            			}
            			else {
HXLINE(  52)				_hx_tmp9 = true;
            			}
HXDLIN(  52)			if (_hx_tmp9) {
HXLINE(  52)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  52)				_this4->set_y(((( (Float)(_hx_tmp) ) - _this4->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  54)		{
HXLINE(  54)			 ::flixel::math::FlxBasePoint this1 = this->sprite1->scale;
HXDLIN(  54)			this1->set_x(( (Float)(0) ));
HXDLIN(  54)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  55)		{
HXLINE(  55)			 ::flixel::math::FlxBasePoint this2 = this->sprite2->scale;
HXDLIN(  55)			this2->set_x(( (Float)(0) ));
HXDLIN(  55)			this2->set_y(( (Float)(0) ));
            		}
HXLINE(  56)		{
HXLINE(  56)			 ::flixel::math::FlxBasePoint this3 = this->sprite3->scale;
HXDLIN(  56)			this3->set_x(( (Float)(0) ));
HXDLIN(  56)			this3->set_y(( (Float)(0) ));
            		}
HXLINE(  57)		{
HXLINE(  57)			 ::flixel::math::FlxBasePoint this4 = this->sprite4->scale;
HXDLIN(  57)			this4->set_x(( (Float)(0) ));
HXDLIN(  57)			this4->set_y(( (Float)(0) ));
            		}
HXLINE(  58)		{
HXLINE(  58)			 ::flixel::math::FlxBasePoint this5 = this->sprite5->scale;
HXDLIN(  58)			this5->set_x(( (Float)(0) ));
HXDLIN(  58)			this5->set_y(( (Float)(0) ));
            		}
HXLINE(  60)		this->haxes =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  61)		this->haxes->set_text(HX_("HaxeFlixel",42,8f,0c,ac));
HXLINE(  62)		this->haxes->set_color(-8355712);
HXLINE(  63)		this->haxes->set_size(32);
HXLINE(  64)		{
HXLINE(  64)			 ::flixel::text::FlxText _this5 = this->haxes;
HXDLIN(  64)			int axes5 = 1;
HXDLIN(  64)			bool _hx_tmp10;
HXDLIN(  64)			if ((axes5 != 1)) {
HXLINE(  64)				_hx_tmp10 = (axes5 == 17);
            			}
            			else {
HXLINE(  64)				_hx_tmp10 = true;
            			}
HXDLIN(  64)			if (_hx_tmp10) {
HXLINE(  64)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  64)				_this5->set_x(((( (Float)(_hx_tmp) ) - _this5->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  64)			bool _hx_tmp11;
HXDLIN(  64)			if ((axes5 != 16)) {
HXLINE(  64)				_hx_tmp11 = (axes5 == 17);
            			}
            			else {
HXLINE(  64)				_hx_tmp11 = true;
            			}
HXDLIN(  64)			if (_hx_tmp11) {
HXLINE(  64)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  64)				_this5->set_y(((( (Float)(_hx_tmp) ) - _this5->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  65)		this->haxes->set_y((this->sprite1->y + 250));
HXLINE(  66)		this->haxes->set_alpha(( (Float)(0) ));
HXLINE(  68)		this->add(this->sprite2);
HXLINE(  69)		this->add(this->sprite3);
HXLINE(  70)		this->add(this->sprite4);
HXLINE(  71)		this->add(this->sprite5);
HXLINE(  72)		this->add(this->sprite1);
HXLINE(  73)		this->add(this->haxes);
HXLINE(  75)		 ::flixel::sound::FlxSound haxesound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/haxeboop.ogg",d4,8e,e4,de),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  77)		haxesound->play(null(),null(),null());
HXLINE(  78)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.28), ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE(  83)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.43), ::Dynamic(new _hx_Closure_1(_gthis)),null());
HXLINE(  87)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.58), ::Dynamic(new _hx_Closure_2(_gthis)),null());
HXLINE(  91)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.74), ::Dynamic(new _hx_Closure_3(_gthis)),null());
HXLINE(  95)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.88), ::Dynamic(new _hx_Closure_4(_gthis)),null());
HXLINE(  99)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_5(_gthis)),null());
HXLINE( 108)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(4, ::Dynamic(new _hx_Closure_7()),null());
            	}


void HaxeMenu_obj::update(Float _elapsed){
            	HX_STACKFRAME(&_hx_pos_9a171bc7e793a4be_114_update)
            	}



::hx::ObjectPtr< HaxeMenu_obj > HaxeMenu_obj::__new() {
	::hx::ObjectPtr< HaxeMenu_obj > __this = new HaxeMenu_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HaxeMenu_obj > HaxeMenu_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HaxeMenu_obj *__this = (HaxeMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HaxeMenu_obj), true, "HaxeMenu"));
	*(void **)__this = HaxeMenu_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HaxeMenu_obj::HaxeMenu_obj()
{
}

void HaxeMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HaxeMenu);
	HX_MARK_MEMBER_NAME(sprite1,"sprite1");
	HX_MARK_MEMBER_NAME(sprite2,"sprite2");
	HX_MARK_MEMBER_NAME(sprite3,"sprite3");
	HX_MARK_MEMBER_NAME(sprite4,"sprite4");
	HX_MARK_MEMBER_NAME(sprite5,"sprite5");
	HX_MARK_MEMBER_NAME(haxes,"haxes");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HaxeMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprite1,"sprite1");
	HX_VISIT_MEMBER_NAME(sprite2,"sprite2");
	HX_VISIT_MEMBER_NAME(sprite3,"sprite3");
	HX_VISIT_MEMBER_NAME(sprite4,"sprite4");
	HX_VISIT_MEMBER_NAME(sprite5,"sprite5");
	HX_VISIT_MEMBER_NAME(haxes,"haxes");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HaxeMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"haxes") ) { return ::hx::Val( haxes ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sprite1") ) { return ::hx::Val( sprite1 ); }
		if (HX_FIELD_EQ(inName,"sprite2") ) { return ::hx::Val( sprite2 ); }
		if (HX_FIELD_EQ(inName,"sprite3") ) { return ::hx::Val( sprite3 ); }
		if (HX_FIELD_EQ(inName,"sprite4") ) { return ::hx::Val( sprite4 ); }
		if (HX_FIELD_EQ(inName,"sprite5") ) { return ::hx::Val( sprite5 ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HaxeMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"haxes") ) { haxes=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sprite1") ) { sprite1=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprite2") ) { sprite2=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprite3") ) { sprite3=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprite4") ) { sprite4=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprite5") ) { sprite5=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HaxeMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprite1",8c,a8,8a,5f));
	outFields->push(HX_("sprite2",8d,a8,8a,5f));
	outFields->push(HX_("sprite3",8e,a8,8a,5f));
	outFields->push(HX_("sprite4",8f,a8,8a,5f));
	outFields->push(HX_("sprite5",90,a8,8a,5f));
	outFields->push(HX_("haxes",8d,6d,25,22));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HaxeMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HaxeMenu_obj,sprite1),HX_("sprite1",8c,a8,8a,5f)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HaxeMenu_obj,sprite2),HX_("sprite2",8d,a8,8a,5f)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HaxeMenu_obj,sprite3),HX_("sprite3",8e,a8,8a,5f)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HaxeMenu_obj,sprite4),HX_("sprite4",8f,a8,8a,5f)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HaxeMenu_obj,sprite5),HX_("sprite5",90,a8,8a,5f)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(HaxeMenu_obj,haxes),HX_("haxes",8d,6d,25,22)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HaxeMenu_obj_sStaticStorageInfo = 0;
#endif

static ::String HaxeMenu_obj_sMemberFields[] = {
	HX_("sprite1",8c,a8,8a,5f),
	HX_("sprite2",8d,a8,8a,5f),
	HX_("sprite3",8e,a8,8a,5f),
	HX_("sprite4",8f,a8,8a,5f),
	HX_("sprite5",90,a8,8a,5f),
	HX_("haxes",8d,6d,25,22),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class HaxeMenu_obj::__mClass;

void HaxeMenu_obj::__register()
{
	HaxeMenu_obj _hx_dummy;
	HaxeMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HaxeMenu",05,6d,50,2d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HaxeMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HaxeMenu_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HaxeMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HaxeMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

