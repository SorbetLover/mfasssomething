#include <hxcpp.h>

#ifndef INCLUDED_Char
#include <Char.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_19_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",19,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_30_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",30,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_93_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",93,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_177_shoot,"PlayState","shoot",0x3be5020e,"PlayState.shoot","PlayState.hx",177,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_205_shoot,"PlayState","shoot",0x3be5020e,"PlayState.shoot","PlayState.hx",205,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_172_shoot,"PlayState","shoot",0x3be5020e,"PlayState.shoot","PlayState.hx",172,0xb30d7781)

void PlayState_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_19_new)
HXLINE( 169)		this->canshoot = true;
HXLINE(  90)		this->lastfacing = HX_("right",dc,0b,64,e9);
HXLINE(  89)		this->pressingShift = false;
HXLINE(  88)		this->pressingD = false;
HXLINE(  87)		this->pressingA = false;
HXLINE(  19)		super::__construct();
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x563293a6) {
			if (inClassId<=(int)0x0a05f89d) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0a05f89d;
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

void PlayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_30_create)
HXLINE(  31)		this->super::create();
HXLINE(  33)		this->shitCam =  ::flixel::FlxCamera_obj::__alloc( HX_CTX ,0,0,1280,720,null());
HXLINE(  34)		this->mfbackdrop =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  35)		this->mfbackdrop->loadGraphic(HX_("assets/images/drawers.png",52,4e,ca,7e),null(),null(),null(),null(),null());
HXLINE(  37)		{
HXLINE(  37)			 ::flixel::math::FlxBasePoint this1 = this->mfbackdrop->scrollFactor;
HXDLIN(  37)			this1->set_x(((Float).33));
HXDLIN(  37)			this1->set_y(((Float).33));
            		}
HXLINE(  38)		this->add(this->mfbackdrop);
HXLINE(  39)		this->ground =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(2000,300,null(),null(),null());
HXLINE(  40)		this->ground->set_color(-14540254);
HXLINE(  41)		this->add(this->ground);
HXLINE(  43)		this->shit =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->loadGraphic(HX_("assets/images/shit.png",a6,47,3e,39),null(),null(),null(),null(),null());
HXLINE(  44)		this->shit->set_x(( (Float)(640) ));
HXLINE(  45)		this->shit->set_y(( (Float)(500) ));
HXLINE(  46)		this->shit->set_color(-11579569);
HXLINE(  47)		this->add(this->shit);
HXLINE(  49)		this->_hx_char =  ::Char_obj::__alloc( HX_CTX ,0,500);
HXLINE(  50)		this->add(this->_hx_char);
HXLINE(  51)		this->hand =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->loadGraphic(HX_("assets/images/hand.png",d5,a6,5c,6a),null(),null(),null(),null(),null());
HXLINE(  52)		{
HXLINE(  52)			 ::flixel::math::FlxBasePoint this2 = this->hand->scale;
HXDLIN(  52)			this2->set_x(((Float)0.1));
HXDLIN(  52)			this2->set_y(((Float)0.1));
            		}
HXLINE(  53)		this->add(this->hand);
HXLINE(  54)		::flixel::FlxG_obj::camera->follow(this->_hx_char,::flixel::FlxCameraFollowStyle_obj::TOPDOWN_dyn(),null());
HXLINE(  56)		this->bullet =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->loadGraphic(HX_("assets/images/bulet.png",18,48,9c,62),null(),null(),null(),null(),null());
HXLINE(  57)		{
HXLINE(  57)			 ::flixel::math::FlxBasePoint this3 = this->bullet->scale;
HXDLIN(  57)			this3->set_x(( (Float)(3) ));
HXDLIN(  57)			this3->set_y(( (Float)(3) ));
            		}
HXLINE(  58)		this->add(this->bullet);
HXLINE(  84)		 ::flixel::FlxSprite _hx_tmp = this->ground;
HXDLIN(  84)		Float _hx_tmp1 = this->_hx_char->y;
HXDLIN(  84)		_hx_tmp->set_y((_hx_tmp1 + this->_hx_char->get_height()));
            	}


void PlayState_obj::update(Float _elapsed){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_93_update)
HXLINE(  94)		this->ground->set_x((this->_hx_char->x - ( (Float)(1000) )));
HXLINE(  96)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  96)		if (_this->keyManager->checkStatusUnsafe(32,_this->status)) {
HXLINE(  98)			this->shoot();
            		}
HXLINE( 100)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 100)		if (_this1->keyManager->checkStatusUnsafe(65,_this1->status)) {
HXLINE( 102)			this->_hx_char->set_flipX(true);
HXLINE( 103)			this->lastfacing = HX_("left",07,08,b0,47);
HXLINE( 104)			this->pressingA = true;
            		}
HXLINE( 106)		 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justReleased) );
HXDLIN( 106)		if (_this2->keyManager->checkStatusUnsafe(65,_this2->status)) {
HXLINE( 108)			this->pressingA = false;
            		}
HXLINE( 110)		 ::flixel::input::keyboard::FlxKeyList _this3 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 110)		if (_this3->keyManager->checkStatusUnsafe(68,_this3->status)) {
HXLINE( 112)			this->_hx_char->set_flipX(false);
HXLINE( 113)			this->pressingD = true;
HXLINE( 114)			this->lastfacing = HX_("right",dc,0b,64,e9);
            		}
HXLINE( 116)		 ::flixel::input::keyboard::FlxKeyList _this4 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justReleased) );
HXDLIN( 116)		if (_this4->keyManager->checkStatusUnsafe(68,_this4->status)) {
HXLINE( 118)			this->pressingD = false;
            		}
HXLINE( 120)		 ::flixel::input::keyboard::FlxKeyList _this5 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 120)		if (_this5->keyManager->checkStatusUnsafe(16,_this5->status)) {
HXLINE( 122)			this->pressingShift = true;
            		}
HXLINE( 124)		 ::flixel::input::keyboard::FlxKeyList _this6 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justReleased) );
HXDLIN( 124)		if (_this6->keyManager->checkStatusUnsafe(16,_this6->status)) {
HXLINE( 126)			this->pressingShift = false;
            		}
HXLINE( 129)		bool _hx_tmp;
HXDLIN( 129)		bool _hx_tmp1;
HXDLIN( 129)		if ((this->pressingA == true)) {
HXLINE( 129)			_hx_tmp1 = (this->pressingD == false);
            		}
            		else {
HXLINE( 129)			_hx_tmp1 = false;
            		}
HXDLIN( 129)		if (_hx_tmp1) {
HXLINE( 129)			_hx_tmp = (this->pressingShift == false);
            		}
            		else {
HXLINE( 129)			_hx_tmp = false;
            		}
HXDLIN( 129)		if (_hx_tmp) {
HXLINE( 131)			 ::Char fh = this->_hx_char;
HXDLIN( 131)			fh->set_x((fh->x - ( (Float)(5) )));
            		}
HXLINE( 133)		bool _hx_tmp2;
HXDLIN( 133)		bool _hx_tmp3;
HXDLIN( 133)		if ((this->pressingD == true)) {
HXLINE( 133)			_hx_tmp3 = (this->pressingA == false);
            		}
            		else {
HXLINE( 133)			_hx_tmp3 = false;
            		}
HXDLIN( 133)		if (_hx_tmp3) {
HXLINE( 133)			_hx_tmp2 = (this->pressingShift == false);
            		}
            		else {
HXLINE( 133)			_hx_tmp2 = false;
            		}
HXDLIN( 133)		if (_hx_tmp2) {
HXLINE( 135)			 ::Char fh = this->_hx_char;
HXDLIN( 135)			fh->set_x((fh->x + 5));
            		}
HXLINE( 137)		bool _hx_tmp4;
HXDLIN( 137)		bool _hx_tmp5;
HXDLIN( 137)		if ((this->pressingA == true)) {
HXLINE( 137)			_hx_tmp5 = (this->pressingD == false);
            		}
            		else {
HXLINE( 137)			_hx_tmp5 = false;
            		}
HXDLIN( 137)		if (_hx_tmp5) {
HXLINE( 137)			_hx_tmp4 = (this->pressingShift == true);
            		}
            		else {
HXLINE( 137)			_hx_tmp4 = false;
            		}
HXDLIN( 137)		if (_hx_tmp4) {
HXLINE( 139)			 ::Char fh = this->_hx_char;
HXDLIN( 139)			fh->set_x((fh->x - ( (Float)(10) )));
            		}
HXLINE( 141)		bool _hx_tmp6;
HXDLIN( 141)		bool _hx_tmp7;
HXDLIN( 141)		if ((this->pressingD == true)) {
HXLINE( 141)			_hx_tmp7 = (this->pressingA == false);
            		}
            		else {
HXLINE( 141)			_hx_tmp7 = false;
            		}
HXDLIN( 141)		if (_hx_tmp7) {
HXLINE( 141)			_hx_tmp6 = (this->pressingShift == true);
            		}
            		else {
HXLINE( 141)			_hx_tmp6 = false;
            		}
HXDLIN( 141)		if (_hx_tmp6) {
HXLINE( 143)			 ::Char fh = this->_hx_char;
HXDLIN( 143)			fh->set_x((fh->x + 10));
            		}
HXLINE( 146)		this->shitCam->set_x(-(this->_hx_char->x));
HXLINE( 148)		bool _hx_tmp8;
HXDLIN( 148)		if (::flixel::FlxG_obj::mouse->overlaps(this->shit,null())) {
HXLINE( 148)			_hx_tmp8 = !(::flixel::FlxG_obj::mouse->overlaps(this->_hx_char,null()));
            		}
            		else {
HXLINE( 148)			_hx_tmp8 = false;
            		}
HXDLIN( 148)		if (_hx_tmp8) {
HXLINE( 150)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == -1)) {
HXLINE( 152)				::haxe::Log_obj::trace(HX_("uhhhhhAAAAAAAAAAAAAAAa",f3,fe,b3,b8),::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),152,HX_("PlayState",5d,83,c2,46),HX_("update",09,86,05,87)));
HXLINE( 153)				::flixel::FlxG_obj::sound->play(HX_("assets/sounds/uwudaddy.ogg",e9,3a,f9,fa),null(),null(),null(),null(),null());
            			}
            		}
HXLINE( 156)		this->hand->set_y(( (Float)(200) ));
HXLINE( 157)		if ((this->lastfacing == HX_("left",07,08,b0,47))) {
HXLINE( 159)			this->hand->set_flipX(false);
HXLINE( 160)			this->hand->set_x((this->_hx_char->x - ( (Float)(528) )));
            		}
            		else {
HXLINE( 164)			this->hand->set_x((this->_hx_char->x - ( (Float)(307) )));
HXLINE( 165)			this->hand->set_flipX(true);
            		}
            	}


void PlayState_obj::shoot(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::PlayState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_177_shoot)
HXLINE( 177)			_gthis->bullet->set_alpha(( (Float)(0) ));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::PlayState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_205_shoot)
HXLINE( 205)			_gthis->canshoot = true;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_172_shoot)
HXDLIN( 172)		 ::PlayState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 173)		this->bullet->set_alpha(( (Float)(1) ));
HXLINE( 175)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.5), ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE( 194)		if ((this->canshoot == true)) {
HXLINE( 196)			this->bullet->set_x(this->_hx_char->x);
HXLINE( 197)			this->bullet->set_y(this->_hx_char->y);
HXLINE( 198)			::flixel::tweens::FlxTween_obj::tween(this->bullet, ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("x",78,00,00,00),::flixel::FlxG_obj::mouse->x)
            				->setFixed(1,HX_("y",79,00,00,00),::flixel::FlxG_obj::mouse->y)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())));
            		}
HXLINE( 202)		this->canshoot = false;
HXLINE( 203)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.6), ::Dynamic(new _hx_Closure_1(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,shoot,(void))


::hx::ObjectPtr< PlayState_obj > PlayState_obj::__new() {
	::hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PlayState_obj *__this = (PlayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(ground,"ground");
	HX_MARK_MEMBER_NAME(mfbackdrop,"mfbackdrop");
	HX_MARK_MEMBER_NAME(_hx_char,"char");
	HX_MARK_MEMBER_NAME(shit,"shit");
	HX_MARK_MEMBER_NAME(shitCam,"shitCam");
	HX_MARK_MEMBER_NAME(bullet,"bullet");
	HX_MARK_MEMBER_NAME(hand,"hand");
	HX_MARK_MEMBER_NAME(pressingA,"pressingA");
	HX_MARK_MEMBER_NAME(pressingD,"pressingD");
	HX_MARK_MEMBER_NAME(pressingShift,"pressingShift");
	HX_MARK_MEMBER_NAME(lastfacing,"lastfacing");
	HX_MARK_MEMBER_NAME(canshoot,"canshoot");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ground,"ground");
	HX_VISIT_MEMBER_NAME(mfbackdrop,"mfbackdrop");
	HX_VISIT_MEMBER_NAME(_hx_char,"char");
	HX_VISIT_MEMBER_NAME(shit,"shit");
	HX_VISIT_MEMBER_NAME(shitCam,"shitCam");
	HX_VISIT_MEMBER_NAME(bullet,"bullet");
	HX_VISIT_MEMBER_NAME(hand,"hand");
	HX_VISIT_MEMBER_NAME(pressingA,"pressingA");
	HX_VISIT_MEMBER_NAME(pressingD,"pressingD");
	HX_VISIT_MEMBER_NAME(pressingShift,"pressingShift");
	HX_VISIT_MEMBER_NAME(lastfacing,"lastfacing");
	HX_VISIT_MEMBER_NAME(canshoot,"canshoot");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PlayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { return ::hx::Val( _hx_char ); }
		if (HX_FIELD_EQ(inName,"shit") ) { return ::hx::Val( shit ); }
		if (HX_FIELD_EQ(inName,"hand") ) { return ::hx::Val( hand ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shoot") ) { return ::hx::Val( shoot_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ground") ) { return ::hx::Val( ground ); }
		if (HX_FIELD_EQ(inName,"bullet") ) { return ::hx::Val( bullet ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shitCam") ) { return ::hx::Val( shitCam ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canshoot") ) { return ::hx::Val( canshoot ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pressingA") ) { return ::hx::Val( pressingA ); }
		if (HX_FIELD_EQ(inName,"pressingD") ) { return ::hx::Val( pressingD ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mfbackdrop") ) { return ::hx::Val( mfbackdrop ); }
		if (HX_FIELD_EQ(inName,"lastfacing") ) { return ::hx::Val( lastfacing ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pressingShift") ) { return ::hx::Val( pressingShift ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { _hx_char=inValue.Cast<  ::Char >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shit") ) { shit=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hand") ) { hand=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ground") ) { ground=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bullet") ) { bullet=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shitCam") ) { shitCam=inValue.Cast<  ::flixel::FlxCamera >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canshoot") ) { canshoot=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pressingA") ) { pressingA=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pressingD") ) { pressingD=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mfbackdrop") ) { mfbackdrop=inValue.Cast<  ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastfacing") ) { lastfacing=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pressingShift") ) { pressingShift=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ground",87,22,28,1c));
	outFields->push(HX_("mfbackdrop",2f,92,7b,06));
	outFields->push(HX_("char",d6,5e,bf,41));
	outFields->push(HX_("shit",c0,cf,52,4c));
	outFields->push(HX_("shitCam",2f,b4,34,05));
	outFields->push(HX_("bullet",42,92,90,d4));
	outFields->push(HX_("hand",6f,2b,08,45));
	outFields->push(HX_("pressingA",22,0a,e7,a1));
	outFields->push(HX_("pressingD",25,0a,e7,a1));
	outFields->push(HX_("pressingShift",c3,6a,18,59));
	outFields->push(HX_("lastfacing",f0,ad,4b,7a));
	outFields->push(HX_("canshoot",cf,53,8d,57));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,ground),HX_("ground",87,22,28,1c)},
	{::hx::fsObject /*  ::flixel::addons::display::FlxBackdrop */ ,(int)offsetof(PlayState_obj,mfbackdrop),HX_("mfbackdrop",2f,92,7b,06)},
	{::hx::fsObject /*  ::Char */ ,(int)offsetof(PlayState_obj,_hx_char),HX_("char",d6,5e,bf,41)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,shit),HX_("shit",c0,cf,52,4c)},
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(int)offsetof(PlayState_obj,shitCam),HX_("shitCam",2f,b4,34,05)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,bullet),HX_("bullet",42,92,90,d4)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,hand),HX_("hand",6f,2b,08,45)},
	{::hx::fsBool,(int)offsetof(PlayState_obj,pressingA),HX_("pressingA",22,0a,e7,a1)},
	{::hx::fsBool,(int)offsetof(PlayState_obj,pressingD),HX_("pressingD",25,0a,e7,a1)},
	{::hx::fsBool,(int)offsetof(PlayState_obj,pressingShift),HX_("pressingShift",c3,6a,18,59)},
	{::hx::fsString,(int)offsetof(PlayState_obj,lastfacing),HX_("lastfacing",f0,ad,4b,7a)},
	{::hx::fsBool,(int)offsetof(PlayState_obj,canshoot),HX_("canshoot",cf,53,8d,57)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PlayState_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("ground",87,22,28,1c),
	HX_("mfbackdrop",2f,92,7b,06),
	HX_("char",d6,5e,bf,41),
	HX_("shit",c0,cf,52,4c),
	HX_("shitCam",2f,b4,34,05),
	HX_("bullet",42,92,90,d4),
	HX_("hand",6f,2b,08,45),
	HX_("create",fc,66,0f,7c),
	HX_("pressingA",22,0a,e7,a1),
	HX_("pressingD",25,0a,e7,a1),
	HX_("pressingShift",c3,6a,18,59),
	HX_("lastfacing",f0,ad,4b,7a),
	HX_("update",09,86,05,87),
	HX_("canshoot",cf,53,8d,57),
	HX_("shoot",df,81,27,7c),
	::String(null()) };

::hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayState",5d,83,c2,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

