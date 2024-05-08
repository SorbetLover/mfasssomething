#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_addons_display_FlxExtendedMouseSprite
#include <flixel/addons/display/FlxExtendedMouseSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxMouseSpring
#include <flixel/addons/display/FlxMouseSpring.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseEvent
#include <flixel/input/mouse/FlxMouseEvent.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseEventManager
#include <flixel/input/mouse/FlxMouseEventManager.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_20_new,"flixel.addons.display.FlxExtendedMouseSprite","new",0x6af4ffc6,"flixel.addons.display.FlxExtendedMouseSprite.new","flixel/addons/display/FlxExtendedMouseSprite.hx",20,0xb187ea29)
HX_DEFINE_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_221_new,"flixel.addons.display.FlxExtendedMouseSprite","new",0x6af4ffc6,"flixel.addons.display.FlxExtendedMouseSprite.new","flixel/addons/display/FlxExtendedMouseSprite.hx",221,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_235_enableMouseClicks,"flixel.addons.display.FlxExtendedMouseSprite","enableMouseClicks",0x6d504f53,"flixel.addons.display.FlxExtendedMouseSprite.enableMouseClicks","flixel/addons/display/FlxExtendedMouseSprite.hx",235,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_249_disableMouseClicks,"flixel.addons.display.FlxExtendedMouseSprite","disableMouseClicks",0x825eb182,"flixel.addons.display.FlxExtendedMouseSprite.disableMouseClicks","flixel/addons/display/FlxExtendedMouseSprite.hx",249,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_266_enableMouseDrag,"flixel.addons.display.FlxExtendedMouseSprite","enableMouseDrag",0x4ca35e1c,"flixel.addons.display.FlxExtendedMouseSprite.enableMouseDrag","flixel/addons/display/FlxExtendedMouseSprite.hx",266,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_289_disableMouseDrag,"flixel.addons.display.FlxExtendedMouseSprite","disableMouseDrag",0xeb03868b,"flixel.addons.display.FlxExtendedMouseSprite.disableMouseDrag","flixel/addons/display/FlxExtendedMouseSprite.hx",289,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_307_enableMouseThrow,"flixel.addons.display.FlxExtendedMouseSprite","enableMouseThrow",0xf2290dfe,"flixel.addons.display.FlxExtendedMouseSprite.enableMouseThrow","flixel/addons/display/FlxExtendedMouseSprite.hx",307,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_318_disableMouseThrow,"flixel.addons.display.FlxExtendedMouseSprite","disableMouseThrow",0xe7ec46af,"flixel.addons.display.FlxExtendedMouseSprite.disableMouseThrow","flixel/addons/display/FlxExtendedMouseSprite.hx",318,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_331_enableMouseSnap,"flixel.addons.display.FlxExtendedMouseSprite","enableMouseSnap",0x568a8872,"flixel.addons.display.FlxExtendedMouseSprite.enableMouseSnap","flixel/addons/display/FlxExtendedMouseSprite.hx",331,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_342_disableMouseSnap,"flixel.addons.display.FlxExtendedMouseSprite","disableMouseSnap",0xf4eab0e1,"flixel.addons.display.FlxExtendedMouseSprite.disableMouseSnap","flixel/addons/display/FlxExtendedMouseSprite.hx",342,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_360_enableMouseSpring,"flixel.addons.display.FlxExtendedMouseSprite","enableMouseSpring",0x2697e2f5,"flixel.addons.display.FlxExtendedMouseSprite.enableMouseSpring","flixel/addons/display/FlxExtendedMouseSprite.hx",360,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_383_disableMouseSpring,"flixel.addons.display.FlxExtendedMouseSprite","disableMouseSpring",0x3ba64524,"flixel.addons.display.FlxExtendedMouseSprite.disableMouseSpring","flixel/addons/display/FlxExtendedMouseSprite.hx",383,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_396_setDragLock,"flixel.addons.display.FlxExtendedMouseSprite","setDragLock",0x2830cd27,"flixel.addons.display.FlxExtendedMouseSprite.setDragLock","flixel/addons/display/FlxExtendedMouseSprite.hx",396,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_405_update,"flixel.addons.display.FlxExtendedMouseSprite","update",0x0b777a63,"flixel.addons.display.FlxExtendedMouseSprite.update","flixel/addons/display/FlxExtendedMouseSprite.hx",405,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_447_updateGravity,"flixel.addons.display.FlxExtendedMouseSprite","updateGravity",0xcf9e7e2b,"flixel.addons.display.FlxExtendedMouseSprite.updateGravity","flixel/addons/display/FlxExtendedMouseSprite.hx",447,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_547_updateDrag,"flixel.addons.display.FlxExtendedMouseSprite","updateDrag",0xa3b13ff7,"flixel.addons.display.FlxExtendedMouseSprite.updateDrag","flixel/addons/display/FlxExtendedMouseSprite.hx",547,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_585_mousePressedHandler,"flixel.addons.display.FlxExtendedMouseSprite","mousePressedHandler",0x687299b3,"flixel.addons.display.FlxExtendedMouseSprite.mousePressedHandler","flixel/addons/display/FlxExtendedMouseSprite.hx",585,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_614_mouseReleasedHandler,"flixel.addons.display.FlxExtendedMouseSprite","mouseReleasedHandler",0x962f51c2,"flixel.addons.display.FlxExtendedMouseSprite.mouseReleasedHandler","flixel/addons/display/FlxExtendedMouseSprite.hx",614,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_646_isOverPixelPerfect,"flixel.addons.display.FlxExtendedMouseSprite","isOverPixelPerfect",0x7454edff,"flixel.addons.display.FlxExtendedMouseSprite.isOverPixelPerfect","flixel/addons/display/FlxExtendedMouseSprite.hx",646,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_654_startDrag,"flixel.addons.display.FlxExtendedMouseSprite","startDrag",0x971f655c,"flixel.addons.display.FlxExtendedMouseSprite.startDrag","flixel/addons/display/FlxExtendedMouseSprite.hx",654,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_681_checkBoundsRect,"flixel.addons.display.FlxExtendedMouseSprite","checkBoundsRect",0x71f1f587,"flixel.addons.display.FlxExtendedMouseSprite.checkBoundsRect","flixel/addons/display/FlxExtendedMouseSprite.hx",681,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_705_checkBoundsSprite,"flixel.addons.display.FlxExtendedMouseSprite","checkBoundsSprite",0x1025a328,"flixel.addons.display.FlxExtendedMouseSprite.checkBoundsSprite","flixel/addons/display/FlxExtendedMouseSprite.hx",705,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_729_stopDrag,"flixel.addons.display.FlxExtendedMouseSprite","stopDrag",0x9145aff0,"flixel.addons.display.FlxExtendedMouseSprite.stopDrag","flixel/addons/display/FlxExtendedMouseSprite.hx",729,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_758_setGravity,"flixel.addons.display.FlxExtendedMouseSprite","setGravity",0x736abc26,"flixel.addons.display.FlxExtendedMouseSprite.setGravity","flixel/addons/display/FlxExtendedMouseSprite.hx",758,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_784_flipGravity,"flixel.addons.display.FlxExtendedMouseSprite","flipGravity",0x1a87e887,"flixel.addons.display.FlxExtendedMouseSprite.flipGravity","flixel/addons/display/FlxExtendedMouseSprite.hx",784,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_800_get_clicks,"flixel.addons.display.FlxExtendedMouseSprite","get_clicks",0xa361dc4e,"flixel.addons.display.FlxExtendedMouseSprite.get_clicks","flixel/addons/display/FlxExtendedMouseSprite.hx",800,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_805_set_clicks,"flixel.addons.display.FlxExtendedMouseSprite","set_clicks",0xa6df7ac2,"flixel.addons.display.FlxExtendedMouseSprite.set_clicks","flixel/addons/display/FlxExtendedMouseSprite.hx",805,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_810_get_springX,"flixel.addons.display.FlxExtendedMouseSprite","get_springX",0xb7988268,"flixel.addons.display.FlxExtendedMouseSprite.get_springX","flixel/addons/display/FlxExtendedMouseSprite.hx",810,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_815_get_springY,"flixel.addons.display.FlxExtendedMouseSprite","get_springY",0xb7988269,"flixel.addons.display.FlxExtendedMouseSprite.get_springY","flixel/addons/display/FlxExtendedMouseSprite.hx",815,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_820_get_point,"flixel.addons.display.FlxExtendedMouseSprite","get_point",0xa5f4d08d,"flixel.addons.display.FlxExtendedMouseSprite.get_point","flixel/addons/display/FlxExtendedMouseSprite.hx",820,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_825_set_point,"flixel.addons.display.FlxExtendedMouseSprite","set_point",0x8945bc99,"flixel.addons.display.FlxExtendedMouseSprite.set_point","flixel/addons/display/FlxExtendedMouseSprite.hx",825,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_831_get_mouseOver,"flixel.addons.display.FlxExtendedMouseSprite","get_mouseOver",0x43a1c8d6,"flixel.addons.display.FlxExtendedMouseSprite.get_mouseOver","flixel/addons/display/FlxExtendedMouseSprite.hx",831,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_837_get_mouseX,"flixel.addons.display.FlxExtendedMouseSprite","get_mouseX",0x6521e3b6,"flixel.addons.display.FlxExtendedMouseSprite.get_mouseX","flixel/addons/display/FlxExtendedMouseSprite.hx",837,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_847_get_mouseY,"flixel.addons.display.FlxExtendedMouseSprite","get_mouseY",0x6521e3b7,"flixel.addons.display.FlxExtendedMouseSprite.get_mouseY","flixel/addons/display/FlxExtendedMouseSprite.hx",847,0xb187ea29)
HX_LOCAL_STACK_FRAME(_hx_pos_3b92a1e1132e7bd1_858_get_rect,"flixel.addons.display.FlxExtendedMouseSprite","get_rect",0xc77d4787,"flixel.addons.display.FlxExtendedMouseSprite.get_rect","flixel/addons/display/FlxExtendedMouseSprite.hx",858,0xb187ea29)
namespace flixel{
namespace addons{
namespace display{

void FlxExtendedMouseSprite_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic SimpleGraphic){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_20_new)
HXLINE( 207)		this->_allowVerticalDrag = true;
HXLINE( 206)		this->_allowHorizontalDrag = true;
HXLINE( 201)		this->_dragPixelPerfect = false;
HXLINE( 196)		this->_clickCounter = 0;
HXLINE( 194)		this->_clickPixelPerfect = false;
HXLINE( 193)		this->_clickOnRelease = false;
HXLINE( 189)		this->_snapOnRelease = false;
HXLINE( 188)		this->_snapOnDrag = false;
HXLINE( 142)		this->hasMouseSpring = false;
HXLINE( 111)		this->springOffsetY = 0;
HXLINE( 106)		this->springOffsetX = 0;
HXLINE( 101)		this->springOnPressed = true;
HXLINE(  96)		this->draggable = false;
HXLINE(  91)		this->isDragged = false;
HXLINE(  56)		this->hasGravity = false;
HXLINE(  41)		this->throwable = false;
HXLINE(  36)		this->clickable = false;
HXLINE(  31)		this->isPressed = false;
HXLINE( 218)		 ::flixel::addons::display::FlxExtendedMouseSprite _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 219)		super::__construct(X,Y,SimpleGraphic);
HXLINE( 221)		{
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::addons::display::FlxExtendedMouseSprite,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::addons::display::FlxExtendedMouseSprite _){
            				HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_221_new)
HXLINE( 221)				_gthis->mousePressedHandler();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 221)			 ::Dynamic onMouseUp = null();
HXDLIN( 221)			 ::Dynamic onMouseOver = null();
HXDLIN( 221)			 ::Dynamic onMouseOut = null();
HXDLIN( 221)			::Array< int > mouseButtons = null();
HXDLIN( 221)			::flixel::input::mouse::FlxMouseEvent_obj::globalManager->add(::hx::ObjectPtr<OBJ_>(this), ::Dynamic(new _hx_Closure_0(_gthis)),onMouseUp,onMouseOver,onMouseOut,false,true,false,mouseButtons).StaticCast<  ::flixel::addons::display::FlxExtendedMouseSprite >();
            		}
            	}

Dynamic FlxExtendedMouseSprite_obj::__CreateEmpty() { return new FlxExtendedMouseSprite_obj; }

void *FlxExtendedMouseSprite_obj::_hx_vtable = 0;

Dynamic FlxExtendedMouseSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxExtendedMouseSprite_obj > _hx_result = new FlxExtendedMouseSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxExtendedMouseSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x443bac4e) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x443bac4e;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxExtendedMouseSprite_obj::enableMouseClicks(bool OnRelease,::hx::Null< bool >  __o_PixelPerfect,::hx::Null< int >  __o_AlphaThreshold){
            		bool PixelPerfect = __o_PixelPerfect.Default(false);
            		int AlphaThreshold = __o_AlphaThreshold.Default(255);
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_235_enableMouseClicks)
HXLINE( 236)		this->clickable = true;
HXLINE( 238)		this->_clickOnRelease = OnRelease;
HXLINE( 239)		this->_clickPixelPerfect = PixelPerfect;
HXLINE( 240)		this->_clickPixelPerfectAlpha = AlphaThreshold;
HXLINE( 241)		this->_clickCounter = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxExtendedMouseSprite_obj,enableMouseClicks,(void))

void FlxExtendedMouseSprite_obj::disableMouseClicks(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_249_disableMouseClicks)
HXLINE( 250)		this->clickable = false;
HXLINE( 251)		this->mousePressedCallback = null();
HXLINE( 252)		this->mouseReleasedCallback = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,disableMouseClicks,(void))

void FlxExtendedMouseSprite_obj::enableMouseDrag(::hx::Null< bool >  __o_LockCenter,::hx::Null< bool >  __o_PixelPerfect,::hx::Null< int >  __o_AlphaThreshold, ::flixel::math::FlxRect BoundsRect, ::flixel::FlxSprite BoundsSprite){
            		bool LockCenter = __o_LockCenter.Default(false);
            		bool PixelPerfect = __o_PixelPerfect.Default(false);
            		int AlphaThreshold = __o_AlphaThreshold.Default(255);
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_266_enableMouseDrag)
HXLINE( 267)		this->draggable = true;
HXLINE( 269)		this->_dragFromPoint = LockCenter;
HXLINE( 270)		this->_dragPixelPerfect = PixelPerfect;
HXLINE( 271)		this->_dragPixelPerfectAlpha = AlphaThreshold;
HXLINE( 273)		if (::hx::IsNotNull( BoundsRect )) {
HXLINE( 275)			this->boundsRect = BoundsRect;
            		}
HXLINE( 278)		if (::hx::IsNotNull( BoundsSprite )) {
HXLINE( 280)			this->boundsSprite = BoundsSprite;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxExtendedMouseSprite_obj,enableMouseDrag,(void))

void FlxExtendedMouseSprite_obj::disableMouseDrag(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_289_disableMouseDrag)
HXLINE( 290)		if (this->isDragged) {
HXLINE( 291)			this->stopDrag();
            		}
HXLINE( 293)		this->isDragged = false;
HXLINE( 294)		this->draggable = false;
HXLINE( 296)		this->mouseStartDragCallback = null();
HXLINE( 297)		this->mouseStopDragCallback = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,disableMouseDrag,(void))

void FlxExtendedMouseSprite_obj::enableMouseThrow(int FactorX,int FactorY){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_307_enableMouseThrow)
HXLINE( 308)		this->throwable = true;
HXLINE( 309)		this->_throwXFactor = FactorX;
HXLINE( 310)		this->_throwYFactor = FactorY;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxExtendedMouseSprite_obj,enableMouseThrow,(void))

void FlxExtendedMouseSprite_obj::disableMouseThrow(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_318_disableMouseThrow)
HXDLIN( 318)		this->throwable = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,disableMouseThrow,(void))

void FlxExtendedMouseSprite_obj::enableMouseSnap(int SnapX,int SnapY,::hx::Null< bool >  __o_OnDrag,::hx::Null< bool >  __o_OnRelease){
            		bool OnDrag = __o_OnDrag.Default(true);
            		bool OnRelease = __o_OnRelease.Default(false);
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_331_enableMouseSnap)
HXLINE( 332)		this->_snapOnDrag = OnDrag;
HXLINE( 333)		this->_snapOnRelease = OnRelease;
HXLINE( 334)		this->_snapX = SnapX;
HXLINE( 335)		this->_snapY = SnapY;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxExtendedMouseSprite_obj,enableMouseSnap,(void))

void FlxExtendedMouseSprite_obj::disableMouseSnap(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_342_disableMouseSnap)
HXLINE( 343)		this->_snapOnDrag = false;
HXLINE( 344)		this->_snapOnRelease = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,disableMouseSnap,(void))

 ::flixel::addons::display::FlxMouseSpring FlxExtendedMouseSprite_obj::enableMouseSpring(::hx::Null< bool >  __o_onPressed,::hx::Null< bool >  __o_retainVelocity,::hx::Null< Float >  __o_tension,::hx::Null< Float >  __o_friction,::hx::Null< Float >  __o_gravity, ::flixel::math::FlxBasePoint offset){
            		bool onPressed = __o_onPressed.Default(true);
            		bool retainVelocity = __o_retainVelocity.Default(false);
            		Float tension = __o_tension.Default(((Float)0.1));
            		Float friction = __o_friction.Default(((Float)0.95));
            		Float gravity = __o_gravity.Default(((Float)0.0));
            	HX_GC_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_360_enableMouseSpring)
HXLINE( 361)		this->hasMouseSpring = true;
HXLINE( 362)		this->springOnPressed = onPressed;
HXLINE( 364)		if (::hx::IsNull( this->mouseSpring )) {
HXLINE( 366)			this->mouseSpring =  ::flixel::addons::display::FlxMouseSpring_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),retainVelocity,tension,friction,gravity,offset);
            		}
            		else {
HXLINE( 370)			this->mouseSpring->tension = tension;
HXLINE( 371)			this->mouseSpring->friction = friction;
HXLINE( 372)			this->mouseSpring->gravity = gravity;
HXLINE( 373)			this->mouseSpring->retainVelocity = retainVelocity;
            		}
HXLINE( 376)		return this->mouseSpring;
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxExtendedMouseSprite_obj,enableMouseSpring,return )

void FlxExtendedMouseSprite_obj::disableMouseSpring(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_383_disableMouseSpring)
HXLINE( 384)		this->hasMouseSpring = false;
HXLINE( 385)		this->mouseSpring = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,disableMouseSpring,(void))

void FlxExtendedMouseSprite_obj::setDragLock(::hx::Null< bool >  __o_AllowHorizontalDrag,::hx::Null< bool >  __o_AllowVerticalDrag){
            		bool AllowHorizontalDrag = __o_AllowHorizontalDrag.Default(true);
            		bool AllowVerticalDrag = __o_AllowVerticalDrag.Default(true);
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_396_setDragLock)
HXLINE( 397)		this->_allowHorizontalDrag = AllowHorizontalDrag;
HXLINE( 398)		this->_allowVerticalDrag = AllowVerticalDrag;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxExtendedMouseSprite_obj,setDragLock,(void))

void FlxExtendedMouseSprite_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_405_update)
HXLINE( 407)		bool _hx_tmp;
HXDLIN( 407)		if (this->draggable) {
HXLINE( 407)			_hx_tmp = this->isDragged;
            		}
            		else {
HXLINE( 407)			_hx_tmp = false;
            		}
HXDLIN( 407)		if (_hx_tmp) {
HXLINE( 409)			this->updateDrag();
            		}
HXLINE( 412)		if (this->hasGravity) {
HXLINE( 414)			this->updateGravity();
            		}
HXLINE( 417)		if (this->hasMouseSpring) {
HXLINE( 419)			if ((this->springOnPressed == false)) {
HXLINE( 421)				this->mouseSpring->update(elapsed);
            			}
            			else {
HXLINE( 425)				if (this->isPressed) {
HXLINE( 427)					this->mouseSpring->update(elapsed);
            				}
            				else {
HXLINE( 431)					this->mouseSpring->reset();
            				}
            			}
            		}
HXLINE( 436)		if ((::flixel::FlxG_obj::mouse->_leftButton->current == -1)) {
HXLINE( 437)			this->mouseReleasedHandler();
            		}
HXLINE( 440)		this->super::update(elapsed);
            	}


void FlxExtendedMouseSprite_obj::updateGravity(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_447_updateGravity)
HXLINE( 451)		if ((this->velocity->x != 0)) {
HXLINE( 453)			if ((this->acceleration->x < 0)) {
HXLINE( 456)				if (((this->touching & 17) != 0)) {
HXLINE( 458)					this->drag->set_y(this->frictionY);
HXLINE( 460)					if (((this->wasTouching & 17) == 0)) {
HXLINE( 462)						if ((this->velocity->x < this->toleranceX)) {
HXLINE( 464)							this->velocity->set_x(( (Float)(0) ));
            						}
            					}
            				}
            				else {
HXLINE( 470)					this->drag->set_y(( (Float)(0) ));
            				}
            			}
            			else {
HXLINE( 473)				if ((this->acceleration->x > 0)) {
HXLINE( 476)					if (((this->touching & 17) != 0)) {
HXLINE( 479)						this->drag->set_y(this->frictionY);
HXLINE( 481)						if (((this->wasTouching & 17) == 0)) {
HXLINE( 483)							if ((this->velocity->x > -(this->toleranceX))) {
HXLINE( 485)								this->velocity->set_x(( (Float)(0) ));
            							}
            						}
            					}
            					else {
HXLINE( 491)						this->drag->set_y(( (Float)(0) ));
            					}
            				}
            			}
            		}
HXLINE( 497)		if ((this->velocity->y != 0)) {
HXLINE( 499)			if ((this->acceleration->y < 0)) {
HXLINE( 502)				if (((this->touching & 256) != 0)) {
HXLINE( 504)					this->drag->set_x(this->frictionX);
HXLINE( 506)					if (((this->wasTouching & 256) == 0)) {
HXLINE( 508)						if ((this->velocity->y < this->toleranceY)) {
HXLINE( 510)							this->velocity->set_y(( (Float)(0) ));
            						}
            					}
            				}
            				else {
HXLINE( 516)					this->drag->set_x(( (Float)(0) ));
            				}
            			}
            			else {
HXLINE( 519)				if ((this->acceleration->y > 0)) {
HXLINE( 522)					if (((this->touching & 4096) != 0)) {
HXLINE( 525)						this->drag->set_x(this->frictionX);
HXLINE( 527)						if (((this->wasTouching & 4096) == 0)) {
HXLINE( 529)							if ((this->velocity->y > -(this->toleranceY))) {
HXLINE( 531)								this->velocity->set_y(( (Float)(0) ));
            							}
            						}
            					}
            					else {
HXLINE( 537)						this->drag->set_x(( (Float)(0) ));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,updateGravity,(void))

void FlxExtendedMouseSprite_obj::updateDrag(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_547_updateDrag)
HXLINE( 549)		if (this->_allowHorizontalDrag) {
HXLINE( 552)			this->set_x(( (Float)((::Math_obj::floor((::flixel::FlxG_obj::mouse->screenX + (this->scrollFactor->x * ( (Float)((::flixel::FlxG_obj::mouse->x - ::flixel::FlxG_obj::mouse->screenX)) )))) - this->_dragOffsetX)) ));
            		}
HXLINE( 556)		if (this->_allowVerticalDrag) {
HXLINE( 559)			this->set_y(( (Float)((::Math_obj::floor((::flixel::FlxG_obj::mouse->screenY + (this->scrollFactor->y * ( (Float)((::flixel::FlxG_obj::mouse->y - ::flixel::FlxG_obj::mouse->screenY)) )))) - this->_dragOffsetY)) ));
            		}
HXLINE( 563)		if (::hx::IsNotNull( this->boundsRect )) {
HXLINE( 565)			this->checkBoundsRect();
            		}
HXLINE( 568)		if (::hx::IsNotNull( this->boundsSprite )) {
HXLINE( 570)			this->checkBoundsSprite();
            		}
HXLINE( 573)		if (this->_snapOnDrag) {
HXLINE( 575)			this->set_x(( (Float)((::Math_obj::floor((this->x / ( (Float)(this->_snapX) ))) * this->_snapX)) ));
HXLINE( 576)			this->set_y(( (Float)((::Math_obj::floor((this->y / ( (Float)(this->_snapY) ))) * this->_snapY)) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,updateDrag,(void))

void FlxExtendedMouseSprite_obj::mousePressedHandler(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_585_mousePressedHandler)
HXLINE( 586)		this->isPressed = true;
HXLINE( 588)		 ::flixel::math::FlxBasePoint mouse = ::flixel::FlxG_obj::mouse->getWorldPosition(null(),null());
HXLINE( 589)		bool _hx_tmp;
HXDLIN( 589)		if (this->clickable) {
HXLINE( 589)			_hx_tmp = this->isOverPixelPerfect(mouse,this->_clickPixelPerfect,this->_clickPixelPerfectAlpha);
            		}
            		else {
HXLINE( 589)			_hx_tmp = false;
            		}
HXDLIN( 589)		if (_hx_tmp) {
HXLINE( 591)			if ((this->_clickOnRelease == false)) {
HXLINE( 593)				this->_clickCounter++;
            			}
HXLINE( 596)			if (::hx::IsNotNull( this->mousePressedCallback )) {
HXLINE( 598)				 ::Dynamic _hx_tmp = this->mousePressedCallback;
HXDLIN( 598)				int _hx_tmp1 = this->get_mouseX();
HXDLIN( 598)				_hx_tmp(::hx::ObjectPtr<OBJ_>(this),_hx_tmp1,this->get_mouseY());
            			}
            		}
HXLINE( 602)		bool _hx_tmp1;
HXDLIN( 602)		if (this->draggable) {
HXLINE( 602)			_hx_tmp1 = this->isOverPixelPerfect(mouse,this->_dragPixelPerfect,this->_dragPixelPerfectAlpha);
            		}
            		else {
HXLINE( 602)			_hx_tmp1 = false;
            		}
HXDLIN( 602)		if (_hx_tmp1) {
HXLINE( 604)			this->startDrag();
            		}
HXLINE( 607)		mouse->put();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,mousePressedHandler,(void))

void FlxExtendedMouseSprite_obj::mouseReleasedHandler(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_614_mouseReleasedHandler)
HXLINE( 615)		bool wasPressed = this->isPressed;
HXLINE( 616)		this->isPressed = false;
HXLINE( 618)		if (this->isDragged) {
HXLINE( 620)			this->stopDrag();
            		}
HXLINE( 623)		bool _hx_tmp;
HXDLIN( 623)		if (wasPressed) {
HXLINE( 623)			_hx_tmp = this->throwable;
            		}
            		else {
HXLINE( 623)			_hx_tmp = false;
            		}
HXDLIN( 623)		if (_hx_tmp) {
HXLINE( 625)			{
HXLINE( 625)				 ::flixel::input::mouse::FlxMouse _this = ::flixel::FlxG_obj::mouse;
HXDLIN( 625)				this->velocity->set_x(( (Float)(((_this->x - _this->_prevX) * this->_throwXFactor)) ));
            			}
HXLINE( 626)			{
HXLINE( 626)				 ::flixel::input::mouse::FlxMouse _this1 = ::flixel::FlxG_obj::mouse;
HXDLIN( 626)				this->velocity->set_y(( (Float)(((_this1->y - _this1->_prevY) * this->_throwYFactor)) ));
            			}
            		}
HXLINE( 629)		 ::flixel::math::FlxBasePoint mouse = ::flixel::FlxG_obj::mouse->getWorldPosition(null(),null());
HXLINE( 630)		bool _hx_tmp1;
HXDLIN( 630)		bool _hx_tmp2;
HXDLIN( 630)		if (wasPressed) {
HXLINE( 630)			_hx_tmp2 = this->clickable;
            		}
            		else {
HXLINE( 630)			_hx_tmp2 = false;
            		}
HXDLIN( 630)		if (_hx_tmp2) {
HXLINE( 630)			_hx_tmp1 = this->isOverPixelPerfect(mouse,this->_clickPixelPerfect,this->_clickPixelPerfectAlpha);
            		}
            		else {
HXLINE( 630)			_hx_tmp1 = false;
            		}
HXDLIN( 630)		if (_hx_tmp1) {
HXLINE( 632)			if (this->_clickOnRelease) {
HXLINE( 634)				this->_clickCounter++;
            			}
HXLINE( 637)			if (::hx::IsNotNull( this->mouseReleasedCallback )) {
HXLINE( 639)				 ::Dynamic _hx_tmp = this->mouseReleasedCallback;
HXDLIN( 639)				int _hx_tmp1 = this->get_mouseX();
HXDLIN( 639)				_hx_tmp(::hx::ObjectPtr<OBJ_>(this),_hx_tmp1,this->get_mouseY());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,mouseReleasedHandler,(void))

bool FlxExtendedMouseSprite_obj::isOverPixelPerfect( ::flixel::math::FlxBasePoint mouse,bool pixelPerfect,int alphaThreshold){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_646_isOverPixelPerfect)
HXDLIN( 646)		if ((pixelPerfect != false)) {
HXDLIN( 646)			return this->pixelsOverlapPoint(mouse,alphaThreshold,null());
            		}
            		else {
HXDLIN( 646)			return true;
            		}
HXDLIN( 646)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxExtendedMouseSprite_obj,isOverPixelPerfect,return )

void FlxExtendedMouseSprite_obj::startDrag(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_654_startDrag)
HXLINE( 655)		this->isDragged = true;
HXLINE( 658)		if ((this->_dragFromPoint == false)) {
HXLINE( 660)			this->_dragOffsetX = ::Math_obj::floor(((::flixel::FlxG_obj::mouse->screenX + (this->scrollFactor->x * ( (Float)((::flixel::FlxG_obj::mouse->x - ::flixel::FlxG_obj::mouse->screenX)) ))) - this->x));
HXLINE( 661)			this->_dragOffsetY = ::Math_obj::floor(((::flixel::FlxG_obj::mouse->screenY + (this->scrollFactor->y * ( (Float)((::flixel::FlxG_obj::mouse->y - ::flixel::FlxG_obj::mouse->screenY)) ))) - this->y));
            		}
            		else {
HXLINE( 666)			this->_dragOffsetX = ::Std_obj::_hx_int((( (Float)(this->frameWidth) ) / ( (Float)(2) )));
HXLINE( 667)			this->_dragOffsetY = ::Std_obj::_hx_int((( (Float)(this->frameHeight) ) / ( (Float)(2) )));
            		}
HXLINE( 670)		if (::hx::IsNotNull( this->mouseStartDragCallback )) {
HXLINE( 672)			 ::Dynamic _hx_tmp = this->mouseStartDragCallback;
HXDLIN( 672)			int _hx_tmp1 = this->get_mouseX();
HXDLIN( 672)			_hx_tmp(::hx::ObjectPtr<OBJ_>(this),_hx_tmp1,this->get_mouseY());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,startDrag,(void))

void FlxExtendedMouseSprite_obj::checkBoundsRect(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_681_checkBoundsRect)
HXLINE( 682)		if ((this->x < this->boundsRect->x)) {
HXLINE( 684)			this->set_x(this->boundsRect->x);
            		}
            		else {
HXLINE( 686)			Float _hx_tmp = this->x;
HXDLIN( 686)			Float _hx_tmp1 = (_hx_tmp + this->get_width());
HXDLIN( 686)			 ::flixel::math::FlxRect _this = this->boundsRect;
HXDLIN( 686)			if ((_hx_tmp1 > (_this->x + _this->width))) {
HXLINE( 688)				 ::flixel::math::FlxRect _this = this->boundsRect;
HXDLIN( 688)				Float _hx_tmp = (_this->x + _this->width);
HXDLIN( 688)				this->set_x((_hx_tmp - this->get_width()));
            			}
            		}
HXLINE( 691)		if ((this->y < this->boundsRect->y)) {
HXLINE( 693)			this->set_y(this->boundsRect->y);
            		}
            		else {
HXLINE( 695)			Float _hx_tmp = this->y;
HXDLIN( 695)			Float _hx_tmp1 = (_hx_tmp + this->get_height());
HXDLIN( 695)			 ::flixel::math::FlxRect _this = this->boundsRect;
HXDLIN( 695)			if ((_hx_tmp1 > (_this->y + _this->height))) {
HXLINE( 697)				 ::flixel::math::FlxRect _this = this->boundsRect;
HXDLIN( 697)				Float _hx_tmp = (_this->y + _this->height);
HXDLIN( 697)				this->set_y((_hx_tmp - this->get_height()));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,checkBoundsRect,(void))

void FlxExtendedMouseSprite_obj::checkBoundsSprite(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_705_checkBoundsSprite)
HXLINE( 706)		if ((this->x < this->boundsSprite->x)) {
HXLINE( 708)			this->set_x(this->boundsSprite->x);
            		}
            		else {
HXLINE( 710)			Float _hx_tmp = this->x;
HXDLIN( 710)			Float _hx_tmp1 = (_hx_tmp + this->get_width());
HXDLIN( 710)			Float _hx_tmp2 = this->boundsSprite->x;
HXDLIN( 710)			if ((_hx_tmp1 > (_hx_tmp2 + this->boundsSprite->get_width()))) {
HXLINE( 712)				Float _hx_tmp = this->boundsSprite->x;
HXDLIN( 712)				Float _hx_tmp1 = (_hx_tmp + this->boundsSprite->get_width());
HXDLIN( 712)				this->set_x((_hx_tmp1 - this->get_width()));
            			}
            		}
HXLINE( 715)		if ((this->y < this->boundsSprite->y)) {
HXLINE( 717)			this->set_y(this->boundsSprite->y);
            		}
            		else {
HXLINE( 719)			Float _hx_tmp = this->y;
HXDLIN( 719)			Float _hx_tmp1 = (_hx_tmp + this->get_height());
HXDLIN( 719)			Float _hx_tmp2 = this->boundsSprite->y;
HXDLIN( 719)			if ((_hx_tmp1 > (_hx_tmp2 + this->boundsSprite->get_height()))) {
HXLINE( 721)				Float _hx_tmp = this->boundsSprite->y;
HXDLIN( 721)				Float _hx_tmp1 = (_hx_tmp + this->boundsSprite->get_height());
HXDLIN( 721)				this->set_y((_hx_tmp1 - this->get_height()));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,checkBoundsSprite,(void))

void FlxExtendedMouseSprite_obj::stopDrag(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_729_stopDrag)
HXLINE( 730)		this->isDragged = false;
HXLINE( 732)		if (this->_snapOnRelease) {
HXLINE( 734)			this->set_x(( (Float)((::Math_obj::floor((this->x / ( (Float)(this->_snapX) ))) * this->_snapX)) ));
HXLINE( 735)			this->set_y(( (Float)((::Math_obj::floor((this->y / ( (Float)(this->_snapY) ))) * this->_snapY)) ));
            		}
HXLINE( 739)		if (::hx::IsNotNull( this->mouseStopDragCallback )) {
HXLINE( 741)			 ::Dynamic _hx_tmp = this->mouseStopDragCallback;
HXDLIN( 741)			int _hx_tmp1 = this->get_mouseX();
HXDLIN( 741)			_hx_tmp(::hx::ObjectPtr<OBJ_>(this),_hx_tmp1,this->get_mouseY());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,stopDrag,(void))

void FlxExtendedMouseSprite_obj::setGravity(int GravityX,int GravityY,::hx::Null< Float >  __o_FrictionX,::hx::Null< Float >  __o_FrictionY,::hx::Null< Float >  __o_ToleranceX,::hx::Null< Float >  __o_ToleranceY){
            		Float FrictionX = __o_FrictionX.Default(500);
            		Float FrictionY = __o_FrictionY.Default(500);
            		Float ToleranceX = __o_ToleranceX.Default(10);
            		Float ToleranceY = __o_ToleranceY.Default(10);
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_758_setGravity)
HXLINE( 759)		this->hasGravity = true;
HXLINE( 761)		this->gravityX = GravityX;
HXLINE( 762)		this->gravityY = GravityY;
HXLINE( 764)		this->frictionX = FrictionX;
HXLINE( 765)		this->frictionY = FrictionY;
HXLINE( 767)		this->toleranceX = ToleranceX;
HXLINE( 768)		this->toleranceY = ToleranceY;
HXLINE( 770)		bool _hx_tmp;
HXDLIN( 770)		if ((GravityX == 0)) {
HXLINE( 770)			_hx_tmp = (GravityY == 0);
            		}
            		else {
HXLINE( 770)			_hx_tmp = false;
            		}
HXDLIN( 770)		if (_hx_tmp) {
HXLINE( 772)			this->hasGravity = false;
            		}
HXLINE( 775)		this->acceleration->set_x(( (Float)(GravityX) ));
HXLINE( 776)		this->acceleration->set_y(( (Float)(GravityY) ));
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxExtendedMouseSprite_obj,setGravity,(void))

void FlxExtendedMouseSprite_obj::flipGravity(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_784_flipGravity)
HXLINE( 785)		bool _hx_tmp;
HXDLIN( 785)		if (!(::Math_obj::isNaN(( (Float)(this->gravityX) )))) {
HXLINE( 785)			_hx_tmp = (this->gravityX != 0);
            		}
            		else {
HXLINE( 785)			_hx_tmp = false;
            		}
HXDLIN( 785)		if (_hx_tmp) {
HXLINE( 787)			this->gravityX = -(this->gravityX);
HXLINE( 788)			this->acceleration->set_x(( (Float)(this->gravityX) ));
            		}
HXLINE( 791)		bool _hx_tmp1;
HXDLIN( 791)		if (!(::Math_obj::isNaN(( (Float)(this->gravityY) )))) {
HXLINE( 791)			_hx_tmp1 = (this->gravityY != 0);
            		}
            		else {
HXLINE( 791)			_hx_tmp1 = false;
            		}
HXDLIN( 791)		if (_hx_tmp1) {
HXLINE( 793)			this->gravityY = -(this->gravityY);
HXLINE( 794)			this->acceleration->set_y(( (Float)(this->gravityY) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,flipGravity,(void))

int FlxExtendedMouseSprite_obj::get_clicks(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_800_get_clicks)
HXDLIN( 800)		return this->_clickCounter;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,get_clicks,return )

int FlxExtendedMouseSprite_obj::set_clicks(int NewValue){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_805_set_clicks)
HXDLIN( 805)		return (this->_clickCounter = NewValue);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxExtendedMouseSprite_obj,set_clicks,return )

int FlxExtendedMouseSprite_obj::get_springX(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_810_get_springX)
HXDLIN( 810)		return ::Math_obj::floor((this->x + this->springOffsetX));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,get_springX,return )

int FlxExtendedMouseSprite_obj::get_springY(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_815_get_springY)
HXDLIN( 815)		return ::Math_obj::floor((this->y + this->springOffsetY));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,get_springY,return )

 ::flixel::math::FlxBasePoint FlxExtendedMouseSprite_obj::get_point(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_820_get_point)
HXDLIN( 820)		return this->_point;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,get_point,return )

 ::flixel::math::FlxBasePoint FlxExtendedMouseSprite_obj::set_point( ::flixel::math::FlxBasePoint NewPoint){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_825_set_point)
HXDLIN( 825)		return (this->_point = NewPoint);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxExtendedMouseSprite_obj,set_point,return )

bool FlxExtendedMouseSprite_obj::get_mouseOver(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_831_get_mouseOver)
HXDLIN( 831)		int _hx_tmp = ::Math_obj::floor((::flixel::FlxG_obj::mouse->screenX + (this->scrollFactor->x * ( (Float)((::flixel::FlxG_obj::mouse->x - ::flixel::FlxG_obj::mouse->screenX)) ))));
HXLINE( 832)		int _hx_tmp1 = ::Math_obj::floor((::flixel::FlxG_obj::mouse->screenY + (this->scrollFactor->y * ( (Float)((::flixel::FlxG_obj::mouse->y - ::flixel::FlxG_obj::mouse->screenY)) ))));
HXDLIN( 832)		int _hx_tmp2 = ::Math_obj::floor(this->x);
HXDLIN( 832)		int _hx_tmp3 = ::Math_obj::floor(this->y);
HXDLIN( 832)		int _hx_tmp4 = ::Math_obj::floor(this->get_width());
HXLINE( 831)		return ::flixel::math::FlxMath_obj::pointInCoordinates(( (Float)(_hx_tmp) ),( (Float)(_hx_tmp1) ),( (Float)(_hx_tmp2) ),( (Float)(_hx_tmp3) ),( (Float)(_hx_tmp4) ),( (Float)(::Math_obj::floor(this->get_height())) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,get_mouseOver,return )

int FlxExtendedMouseSprite_obj::get_mouseX(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_837_get_mouseX)
HXLINE( 838)		if (this->get_mouseOver()) {
HXLINE( 840)			return ::Math_obj::floor((( (Float)(::flixel::FlxG_obj::mouse->x) ) - this->x));
            		}
HXLINE( 843)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,get_mouseX,return )

int FlxExtendedMouseSprite_obj::get_mouseY(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_847_get_mouseY)
HXLINE( 848)		if (this->get_mouseOver()) {
HXLINE( 850)			return ::Math_obj::floor((( (Float)(::flixel::FlxG_obj::mouse->y) ) - this->y));
            		}
HXLINE( 853)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,get_mouseY,return )

 ::flixel::math::FlxRect FlxExtendedMouseSprite_obj::get_rect(){
            	HX_STACKFRAME(&_hx_pos_3b92a1e1132e7bd1_858_get_rect)
HXLINE( 859)		this->_rect->x = this->x;
HXLINE( 860)		this->_rect->y = this->y;
HXLINE( 861)		this->_rect->width = this->get_width();
HXLINE( 862)		this->_rect->height = this->get_height();
HXLINE( 864)		return this->_rect;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedMouseSprite_obj,get_rect,return )


::hx::ObjectPtr< FlxExtendedMouseSprite_obj > FlxExtendedMouseSprite_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic SimpleGraphic) {
	::hx::ObjectPtr< FlxExtendedMouseSprite_obj > __this = new FlxExtendedMouseSprite_obj();
	__this->__construct(__o_X,__o_Y,SimpleGraphic);
	return __this;
}

::hx::ObjectPtr< FlxExtendedMouseSprite_obj > FlxExtendedMouseSprite_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic SimpleGraphic) {
	FlxExtendedMouseSprite_obj *__this = (FlxExtendedMouseSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxExtendedMouseSprite_obj), true, "flixel.addons.display.FlxExtendedMouseSprite"));
	*(void **)__this = FlxExtendedMouseSprite_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,SimpleGraphic);
	return __this;
}

FlxExtendedMouseSprite_obj::FlxExtendedMouseSprite_obj()
{
}

void FlxExtendedMouseSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxExtendedMouseSprite);
	HX_MARK_MEMBER_NAME(priorityID,"priorityID");
	HX_MARK_MEMBER_NAME(isPressed,"isPressed");
	HX_MARK_MEMBER_NAME(clickable,"clickable");
	HX_MARK_MEMBER_NAME(throwable,"throwable");
	HX_MARK_MEMBER_NAME(boundsRect,"boundsRect");
	HX_MARK_MEMBER_NAME(boundsSprite,"boundsSprite");
	HX_MARK_MEMBER_NAME(hasGravity,"hasGravity");
	HX_MARK_MEMBER_NAME(gravityX,"gravityX");
	HX_MARK_MEMBER_NAME(gravityY,"gravityY");
	HX_MARK_MEMBER_NAME(frictionX,"frictionX");
	HX_MARK_MEMBER_NAME(frictionY,"frictionY");
	HX_MARK_MEMBER_NAME(toleranceX,"toleranceX");
	HX_MARK_MEMBER_NAME(toleranceY,"toleranceY");
	HX_MARK_MEMBER_NAME(isDragged,"isDragged");
	HX_MARK_MEMBER_NAME(draggable,"draggable");
	HX_MARK_MEMBER_NAME(springOnPressed,"springOnPressed");
	HX_MARK_MEMBER_NAME(springOffsetX,"springOffsetX");
	HX_MARK_MEMBER_NAME(springOffsetY,"springOffsetY");
	HX_MARK_MEMBER_NAME(mousePressedCallback,"mousePressedCallback");
	HX_MARK_MEMBER_NAME(mouseReleasedCallback,"mouseReleasedCallback");
	HX_MARK_MEMBER_NAME(mouseSpring,"mouseSpring");
	HX_MARK_MEMBER_NAME(mouseStartDragCallback,"mouseStartDragCallback");
	HX_MARK_MEMBER_NAME(mouseStopDragCallback,"mouseStopDragCallback");
	HX_MARK_MEMBER_NAME(hasMouseSpring,"hasMouseSpring");
	HX_MARK_MEMBER_NAME(_snapOnDrag,"_snapOnDrag");
	HX_MARK_MEMBER_NAME(_snapOnRelease,"_snapOnRelease");
	HX_MARK_MEMBER_NAME(_snapX,"_snapX");
	HX_MARK_MEMBER_NAME(_snapY,"_snapY");
	HX_MARK_MEMBER_NAME(_clickOnRelease,"_clickOnRelease");
	HX_MARK_MEMBER_NAME(_clickPixelPerfect,"_clickPixelPerfect");
	HX_MARK_MEMBER_NAME(_clickPixelPerfectAlpha,"_clickPixelPerfectAlpha");
	HX_MARK_MEMBER_NAME(_clickCounter,"_clickCounter");
	HX_MARK_MEMBER_NAME(_throwXFactor,"_throwXFactor");
	HX_MARK_MEMBER_NAME(_throwYFactor,"_throwYFactor");
	HX_MARK_MEMBER_NAME(_dragPixelPerfect,"_dragPixelPerfect");
	HX_MARK_MEMBER_NAME(_dragPixelPerfectAlpha,"_dragPixelPerfectAlpha");
	HX_MARK_MEMBER_NAME(_dragOffsetX,"_dragOffsetX");
	HX_MARK_MEMBER_NAME(_dragOffsetY,"_dragOffsetY");
	HX_MARK_MEMBER_NAME(_dragFromPoint,"_dragFromPoint");
	HX_MARK_MEMBER_NAME(_allowHorizontalDrag,"_allowHorizontalDrag");
	HX_MARK_MEMBER_NAME(_allowVerticalDrag,"_allowVerticalDrag");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxExtendedMouseSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(priorityID,"priorityID");
	HX_VISIT_MEMBER_NAME(isPressed,"isPressed");
	HX_VISIT_MEMBER_NAME(clickable,"clickable");
	HX_VISIT_MEMBER_NAME(throwable,"throwable");
	HX_VISIT_MEMBER_NAME(boundsRect,"boundsRect");
	HX_VISIT_MEMBER_NAME(boundsSprite,"boundsSprite");
	HX_VISIT_MEMBER_NAME(hasGravity,"hasGravity");
	HX_VISIT_MEMBER_NAME(gravityX,"gravityX");
	HX_VISIT_MEMBER_NAME(gravityY,"gravityY");
	HX_VISIT_MEMBER_NAME(frictionX,"frictionX");
	HX_VISIT_MEMBER_NAME(frictionY,"frictionY");
	HX_VISIT_MEMBER_NAME(toleranceX,"toleranceX");
	HX_VISIT_MEMBER_NAME(toleranceY,"toleranceY");
	HX_VISIT_MEMBER_NAME(isDragged,"isDragged");
	HX_VISIT_MEMBER_NAME(draggable,"draggable");
	HX_VISIT_MEMBER_NAME(springOnPressed,"springOnPressed");
	HX_VISIT_MEMBER_NAME(springOffsetX,"springOffsetX");
	HX_VISIT_MEMBER_NAME(springOffsetY,"springOffsetY");
	HX_VISIT_MEMBER_NAME(mousePressedCallback,"mousePressedCallback");
	HX_VISIT_MEMBER_NAME(mouseReleasedCallback,"mouseReleasedCallback");
	HX_VISIT_MEMBER_NAME(mouseSpring,"mouseSpring");
	HX_VISIT_MEMBER_NAME(mouseStartDragCallback,"mouseStartDragCallback");
	HX_VISIT_MEMBER_NAME(mouseStopDragCallback,"mouseStopDragCallback");
	HX_VISIT_MEMBER_NAME(hasMouseSpring,"hasMouseSpring");
	HX_VISIT_MEMBER_NAME(_snapOnDrag,"_snapOnDrag");
	HX_VISIT_MEMBER_NAME(_snapOnRelease,"_snapOnRelease");
	HX_VISIT_MEMBER_NAME(_snapX,"_snapX");
	HX_VISIT_MEMBER_NAME(_snapY,"_snapY");
	HX_VISIT_MEMBER_NAME(_clickOnRelease,"_clickOnRelease");
	HX_VISIT_MEMBER_NAME(_clickPixelPerfect,"_clickPixelPerfect");
	HX_VISIT_MEMBER_NAME(_clickPixelPerfectAlpha,"_clickPixelPerfectAlpha");
	HX_VISIT_MEMBER_NAME(_clickCounter,"_clickCounter");
	HX_VISIT_MEMBER_NAME(_throwXFactor,"_throwXFactor");
	HX_VISIT_MEMBER_NAME(_throwYFactor,"_throwYFactor");
	HX_VISIT_MEMBER_NAME(_dragPixelPerfect,"_dragPixelPerfect");
	HX_VISIT_MEMBER_NAME(_dragPixelPerfectAlpha,"_dragPixelPerfectAlpha");
	HX_VISIT_MEMBER_NAME(_dragOffsetX,"_dragOffsetX");
	HX_VISIT_MEMBER_NAME(_dragOffsetY,"_dragOffsetY");
	HX_VISIT_MEMBER_NAME(_dragFromPoint,"_dragFromPoint");
	HX_VISIT_MEMBER_NAME(_allowHorizontalDrag,"_allowHorizontalDrag");
	HX_VISIT_MEMBER_NAME(_allowVerticalDrag,"_allowVerticalDrag");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxExtendedMouseSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rect() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_point() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"clicks") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_clicks() ); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mouseX() ); }
		if (HX_FIELD_EQ(inName,"mouseY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mouseY() ); }
		if (HX_FIELD_EQ(inName,"_snapX") ) { return ::hx::Val( _snapX ); }
		if (HX_FIELD_EQ(inName,"_snapY") ) { return ::hx::Val( _snapY ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"springX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_springX() ); }
		if (HX_FIELD_EQ(inName,"springY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_springY() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gravityX") ) { return ::hx::Val( gravityX ); }
		if (HX_FIELD_EQ(inName,"gravityY") ) { return ::hx::Val( gravityY ); }
		if (HX_FIELD_EQ(inName,"stopDrag") ) { return ::hx::Val( stopDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_rect") ) { return ::hx::Val( get_rect_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPressed") ) { return ::hx::Val( isPressed ); }
		if (HX_FIELD_EQ(inName,"clickable") ) { return ::hx::Val( clickable ); }
		if (HX_FIELD_EQ(inName,"throwable") ) { return ::hx::Val( throwable ); }
		if (HX_FIELD_EQ(inName,"frictionX") ) { return ::hx::Val( frictionX ); }
		if (HX_FIELD_EQ(inName,"frictionY") ) { return ::hx::Val( frictionY ); }
		if (HX_FIELD_EQ(inName,"isDragged") ) { return ::hx::Val( isDragged ); }
		if (HX_FIELD_EQ(inName,"draggable") ) { return ::hx::Val( draggable ); }
		if (HX_FIELD_EQ(inName,"mouseOver") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mouseOver() ); }
		if (HX_FIELD_EQ(inName,"startDrag") ) { return ::hx::Val( startDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_point") ) { return ::hx::Val( get_point_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_point") ) { return ::hx::Val( set_point_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"priorityID") ) { return ::hx::Val( priorityID ); }
		if (HX_FIELD_EQ(inName,"boundsRect") ) { return ::hx::Val( boundsRect ); }
		if (HX_FIELD_EQ(inName,"hasGravity") ) { return ::hx::Val( hasGravity ); }
		if (HX_FIELD_EQ(inName,"toleranceX") ) { return ::hx::Val( toleranceX ); }
		if (HX_FIELD_EQ(inName,"toleranceY") ) { return ::hx::Val( toleranceY ); }
		if (HX_FIELD_EQ(inName,"updateDrag") ) { return ::hx::Val( updateDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"setGravity") ) { return ::hx::Val( setGravity_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_clicks") ) { return ::hx::Val( get_clicks_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_clicks") ) { return ::hx::Val( set_clicks_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return ::hx::Val( get_mouseX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return ::hx::Val( get_mouseY_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouseSpring") ) { return ::hx::Val( mouseSpring ); }
		if (HX_FIELD_EQ(inName,"_snapOnDrag") ) { return ::hx::Val( _snapOnDrag ); }
		if (HX_FIELD_EQ(inName,"setDragLock") ) { return ::hx::Val( setDragLock_dyn() ); }
		if (HX_FIELD_EQ(inName,"flipGravity") ) { return ::hx::Val( flipGravity_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_springX") ) { return ::hx::Val( get_springX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_springY") ) { return ::hx::Val( get_springY_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"boundsSprite") ) { return ::hx::Val( boundsSprite ); }
		if (HX_FIELD_EQ(inName,"_dragOffsetX") ) { return ::hx::Val( _dragOffsetX ); }
		if (HX_FIELD_EQ(inName,"_dragOffsetY") ) { return ::hx::Val( _dragOffsetY ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"springOffsetX") ) { return ::hx::Val( springOffsetX ); }
		if (HX_FIELD_EQ(inName,"springOffsetY") ) { return ::hx::Val( springOffsetY ); }
		if (HX_FIELD_EQ(inName,"_clickCounter") ) { return ::hx::Val( _clickCounter ); }
		if (HX_FIELD_EQ(inName,"_throwXFactor") ) { return ::hx::Val( _throwXFactor ); }
		if (HX_FIELD_EQ(inName,"_throwYFactor") ) { return ::hx::Val( _throwYFactor ); }
		if (HX_FIELD_EQ(inName,"updateGravity") ) { return ::hx::Val( updateGravity_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mouseOver") ) { return ::hx::Val( get_mouseOver_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hasMouseSpring") ) { return ::hx::Val( hasMouseSpring ); }
		if (HX_FIELD_EQ(inName,"_snapOnRelease") ) { return ::hx::Val( _snapOnRelease ); }
		if (HX_FIELD_EQ(inName,"_dragFromPoint") ) { return ::hx::Val( _dragFromPoint ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"springOnPressed") ) { return ::hx::Val( springOnPressed ); }
		if (HX_FIELD_EQ(inName,"_clickOnRelease") ) { return ::hx::Val( _clickOnRelease ); }
		if (HX_FIELD_EQ(inName,"enableMouseDrag") ) { return ::hx::Val( enableMouseDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"enableMouseSnap") ) { return ::hx::Val( enableMouseSnap_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkBoundsRect") ) { return ::hx::Val( checkBoundsRect_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"disableMouseDrag") ) { return ::hx::Val( disableMouseDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"enableMouseThrow") ) { return ::hx::Val( enableMouseThrow_dyn() ); }
		if (HX_FIELD_EQ(inName,"disableMouseSnap") ) { return ::hx::Val( disableMouseSnap_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_dragPixelPerfect") ) { return ::hx::Val( _dragPixelPerfect ); }
		if (HX_FIELD_EQ(inName,"enableMouseClicks") ) { return ::hx::Val( enableMouseClicks_dyn() ); }
		if (HX_FIELD_EQ(inName,"disableMouseThrow") ) { return ::hx::Val( disableMouseThrow_dyn() ); }
		if (HX_FIELD_EQ(inName,"enableMouseSpring") ) { return ::hx::Val( enableMouseSpring_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkBoundsSprite") ) { return ::hx::Val( checkBoundsSprite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_clickPixelPerfect") ) { return ::hx::Val( _clickPixelPerfect ); }
		if (HX_FIELD_EQ(inName,"_allowVerticalDrag") ) { return ::hx::Val( _allowVerticalDrag ); }
		if (HX_FIELD_EQ(inName,"disableMouseClicks") ) { return ::hx::Val( disableMouseClicks_dyn() ); }
		if (HX_FIELD_EQ(inName,"disableMouseSpring") ) { return ::hx::Val( disableMouseSpring_dyn() ); }
		if (HX_FIELD_EQ(inName,"isOverPixelPerfect") ) { return ::hx::Val( isOverPixelPerfect_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mousePressedHandler") ) { return ::hx::Val( mousePressedHandler_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"mousePressedCallback") ) { return ::hx::Val( mousePressedCallback ); }
		if (HX_FIELD_EQ(inName,"_allowHorizontalDrag") ) { return ::hx::Val( _allowHorizontalDrag ); }
		if (HX_FIELD_EQ(inName,"mouseReleasedHandler") ) { return ::hx::Val( mouseReleasedHandler_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"mouseReleasedCallback") ) { return ::hx::Val( mouseReleasedCallback ); }
		if (HX_FIELD_EQ(inName,"mouseStopDragCallback") ) { return ::hx::Val( mouseStopDragCallback ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"mouseStartDragCallback") ) { return ::hx::Val( mouseStartDragCallback ); }
		if (HX_FIELD_EQ(inName,"_dragPixelPerfectAlpha") ) { return ::hx::Val( _dragPixelPerfectAlpha ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_clickPixelPerfectAlpha") ) { return ::hx::Val( _clickPixelPerfectAlpha ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxExtendedMouseSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_point(inValue.Cast<  ::flixel::math::FlxBasePoint >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"clicks") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_clicks(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_snapX") ) { _snapX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snapY") ) { _snapY=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gravityX") ) { gravityX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravityY") ) { gravityY=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPressed") ) { isPressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clickable") ) { clickable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"throwable") ) { throwable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frictionX") ) { frictionX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frictionY") ) { frictionY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isDragged") ) { isDragged=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"draggable") ) { draggable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"priorityID") ) { priorityID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boundsRect") ) { boundsRect=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasGravity") ) { hasGravity=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toleranceX") ) { toleranceX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toleranceY") ) { toleranceY=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouseSpring") ) { mouseSpring=inValue.Cast<  ::flixel::addons::display::FlxMouseSpring >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snapOnDrag") ) { _snapOnDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"boundsSprite") ) { boundsSprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragOffsetX") ) { _dragOffsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragOffsetY") ) { _dragOffsetY=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"springOffsetX") ) { springOffsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"springOffsetY") ) { springOffsetY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clickCounter") ) { _clickCounter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_throwXFactor") ) { _throwXFactor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_throwYFactor") ) { _throwYFactor=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hasMouseSpring") ) { hasMouseSpring=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snapOnRelease") ) { _snapOnRelease=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragFromPoint") ) { _dragFromPoint=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"springOnPressed") ) { springOnPressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clickOnRelease") ) { _clickOnRelease=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_dragPixelPerfect") ) { _dragPixelPerfect=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_clickPixelPerfect") ) { _clickPixelPerfect=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_allowVerticalDrag") ) { _allowVerticalDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"mousePressedCallback") ) { mousePressedCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_allowHorizontalDrag") ) { _allowHorizontalDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"mouseReleasedCallback") ) { mouseReleasedCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseStopDragCallback") ) { mouseStopDragCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"mouseStartDragCallback") ) { mouseStartDragCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragPixelPerfectAlpha") ) { _dragPixelPerfectAlpha=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_clickPixelPerfectAlpha") ) { _clickPixelPerfectAlpha=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxExtendedMouseSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("priorityID",3f,5c,5f,e4));
	outFields->push(HX_("isPressed",d8,4f,e5,3d));
	outFields->push(HX_("clickable",e2,ad,8e,34));
	outFields->push(HX_("throwable",c0,55,25,7d));
	outFields->push(HX_("boundsRect",39,de,ba,7e));
	outFields->push(HX_("boundsSprite",5a,9c,7f,8f));
	outFields->push(HX_("hasGravity",14,56,b3,02));
	outFields->push(HX_("gravityX",4a,16,81,87));
	outFields->push(HX_("gravityY",4b,16,81,87));
	outFields->push(HX_("frictionX",1e,62,80,38));
	outFields->push(HX_("frictionY",1f,62,80,38));
	outFields->push(HX_("toleranceX",ab,2e,39,d9));
	outFields->push(HX_("toleranceY",ac,2e,39,d9));
	outFields->push(HX_("isDragged",48,c2,51,f5));
	outFields->push(HX_("draggable",0d,2d,d6,5d));
	outFields->push(HX_("springOnPressed",b6,d2,05,91));
	outFields->push(HX_("springOffsetX",18,7e,8c,a6));
	outFields->push(HX_("springOffsetY",19,7e,8c,a6));
	outFields->push(HX_("mouseSpring",d2,0a,1e,b9));
	outFields->push(HX_("hasMouseSpring",98,4d,a8,aa));
	outFields->push(HX_("clicks",2b,43,4e,0a));
	outFields->push(HX_("springX",eb,1c,86,5f));
	outFields->push(HX_("springY",ec,1c,86,5f));
	outFields->push(HX_("point",50,b4,8f,c6));
	outFields->push(HX_("rect",24,4d,a7,4b));
	outFields->push(HX_("mouseOver",19,4a,0d,f6));
	outFields->push(HX_("mouseX",93,4a,0e,cc));
	outFields->push(HX_("mouseY",94,4a,0e,cc));
	outFields->push(HX_("_snapOnDrag",bc,9f,c8,ce));
	outFields->push(HX_("_snapOnRelease",ff,9e,51,9b));
	outFields->push(HX_("_snapX",0f,72,fb,7b));
	outFields->push(HX_("_snapY",10,72,fb,7b));
	outFields->push(HX_("_clickOnRelease",9f,21,af,fe));
	outFields->push(HX_("_clickPixelPerfect",50,dc,03,38));
	outFields->push(HX_("_clickPixelPerfectAlpha",ee,98,cf,11));
	outFields->push(HX_("_clickCounter",73,86,f2,f1));
	outFields->push(HX_("_throwXFactor",c0,a5,d3,19));
	outFields->push(HX_("_throwYFactor",81,1c,69,43));
	outFields->push(HX_("_dragPixelPerfect",9a,a7,19,c0));
	outFields->push(HX_("_dragPixelPerfectAlpha",64,a1,42,26));
	outFields->push(HX_("_dragOffsetX",d2,d9,8f,f3));
	outFields->push(HX_("_dragOffsetY",d3,d9,8f,f3));
	outFields->push(HX_("_dragFromPoint",33,24,ea,13));
	outFields->push(HX_("_allowHorizontalDrag",62,64,99,55));
	outFields->push(HX_("_allowVerticalDrag",74,46,da,fd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxExtendedMouseSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxExtendedMouseSprite_obj,priorityID),HX_("priorityID",3f,5c,5f,e4)},
	{::hx::fsBool,(int)offsetof(FlxExtendedMouseSprite_obj,isPressed),HX_("isPressed",d8,4f,e5,3d)},
	{::hx::fsBool,(int)offsetof(FlxExtendedMouseSprite_obj,clickable),HX_("clickable",e2,ad,8e,34)},
	{::hx::fsBool,(int)offsetof(FlxExtendedMouseSprite_obj,throwable),HX_("throwable",c0,55,25,7d)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxExtendedMouseSprite_obj,boundsRect),HX_("boundsRect",39,de,ba,7e)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxExtendedMouseSprite_obj,boundsSprite),HX_("boundsSprite",5a,9c,7f,8f)},
	{::hx::fsBool,(int)offsetof(FlxExtendedMouseSprite_obj,hasGravity),HX_("hasGravity",14,56,b3,02)},
	{::hx::fsInt,(int)offsetof(FlxExtendedMouseSprite_obj,gravityX),HX_("gravityX",4a,16,81,87)},
	{::hx::fsInt,(int)offsetof(FlxExtendedMouseSprite_obj,gravityY),HX_("gravityY",4b,16,81,87)},
	{::hx::fsFloat,(int)offsetof(FlxExtendedMouseSprite_obj,frictionX),HX_("frictionX",1e,62,80,38)},
	{::hx::fsFloat,(int)offsetof(FlxExtendedMouseSprite_obj,frictionY),HX_("frictionY",1f,62,80,38)},
	{::hx::fsFloat,(int)offsetof(FlxExtendedMouseSprite_obj,toleranceX),HX_("toleranceX",ab,2e,39,d9)},
	{::hx::fsFloat,(int)offsetof(FlxExtendedMouseSprite_obj,toleranceY),HX_("toleranceY",ac,2e,39,d9)},
	{::hx::fsBool,(int)offsetof(FlxExtendedMouseSprite_obj,isDragged),HX_("isDragged",48,c2,51,f5)},
	{::hx::fsBool,(int)offsetof(FlxExtendedMouseSprite_obj,draggable),HX_("draggable",0d,2d,d6,5d)},
	{::hx::fsBool,(int)offsetof(FlxExtendedMouseSprite_obj,springOnPressed),HX_("springOnPressed",b6,d2,05,91)},
	{::hx::fsInt,(int)offsetof(FlxExtendedMouseSprite_obj,springOffsetX),HX_("springOffsetX",18,7e,8c,a6)},
	{::hx::fsInt,(int)offsetof(FlxExtendedMouseSprite_obj,springOffsetY),HX_("springOffsetY",19,7e,8c,a6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxExtendedMouseSprite_obj,mousePressedCallback),HX_("mousePressedCallback",e2,3d,cb,68)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxExtendedMouseSprite_obj,mouseReleasedCallback),HX_("mouseReleasedCallback",e7,af,4b,6c)},
	{::hx::fsObject /*  ::flixel::addons::display::FlxMouseSpring */ ,(int)offsetof(FlxExtendedMouseSprite_obj,mouseSpring),HX_("mouseSpring",d2,0a,1e,b9)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxExtendedMouseSprite_obj,mouseStartDragCallback),HX_("mouseStartDragCallback",76,d1,88,55)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxExtendedMouseSprite_obj,mouseStopDragCallback),HX_("mouseStopDragCallback",40,19,a4,b9)},
	{::hx::fsBool,(int)offsetof(FlxExtendedMouseSprite_obj,hasMouseSpring),HX_("hasMouseSpring",98,4d,a8,aa)},
	{::hx::fsBool,(int)offsetof(FlxExtendedMouseSprite_obj,_snapOnDrag),HX_("_snapOnDrag",bc,9f,c8,ce)},
	{::hx::fsBool,(int)offsetof(FlxExtendedMouseSprite_obj,_snapOnRelease),HX_("_snapOnRelease",ff,9e,51,9b)},
	{::hx::fsInt,(int)offsetof(FlxExtendedMouseSprite_obj,_snapX),HX_("_snapX",0f,72,fb,7b)},
	{::hx::fsInt,(int)offsetof(FlxExtendedMouseSprite_obj,_snapY),HX_("_snapY",10,72,fb,7b)},
	{::hx::fsBool,(int)offsetof(FlxExtendedMouseSprite_obj,_clickOnRelease),HX_("_clickOnRelease",9f,21,af,fe)},
	{::hx::fsBool,(int)offsetof(FlxExtendedMouseSprite_obj,_clickPixelPerfect),HX_("_clickPixelPerfect",50,dc,03,38)},
	{::hx::fsInt,(int)offsetof(FlxExtendedMouseSprite_obj,_clickPixelPerfectAlpha),HX_("_clickPixelPerfectAlpha",ee,98,cf,11)},
	{::hx::fsInt,(int)offsetof(FlxExtendedMouseSprite_obj,_clickCounter),HX_("_clickCounter",73,86,f2,f1)},
	{::hx::fsInt,(int)offsetof(FlxExtendedMouseSprite_obj,_throwXFactor),HX_("_throwXFactor",c0,a5,d3,19)},
	{::hx::fsInt,(int)offsetof(FlxExtendedMouseSprite_obj,_throwYFactor),HX_("_throwYFactor",81,1c,69,43)},
	{::hx::fsBool,(int)offsetof(FlxExtendedMouseSprite_obj,_dragPixelPerfect),HX_("_dragPixelPerfect",9a,a7,19,c0)},
	{::hx::fsInt,(int)offsetof(FlxExtendedMouseSprite_obj,_dragPixelPerfectAlpha),HX_("_dragPixelPerfectAlpha",64,a1,42,26)},
	{::hx::fsInt,(int)offsetof(FlxExtendedMouseSprite_obj,_dragOffsetX),HX_("_dragOffsetX",d2,d9,8f,f3)},
	{::hx::fsInt,(int)offsetof(FlxExtendedMouseSprite_obj,_dragOffsetY),HX_("_dragOffsetY",d3,d9,8f,f3)},
	{::hx::fsBool,(int)offsetof(FlxExtendedMouseSprite_obj,_dragFromPoint),HX_("_dragFromPoint",33,24,ea,13)},
	{::hx::fsBool,(int)offsetof(FlxExtendedMouseSprite_obj,_allowHorizontalDrag),HX_("_allowHorizontalDrag",62,64,99,55)},
	{::hx::fsBool,(int)offsetof(FlxExtendedMouseSprite_obj,_allowVerticalDrag),HX_("_allowVerticalDrag",74,46,da,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxExtendedMouseSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxExtendedMouseSprite_obj_sMemberFields[] = {
	HX_("priorityID",3f,5c,5f,e4),
	HX_("isPressed",d8,4f,e5,3d),
	HX_("clickable",e2,ad,8e,34),
	HX_("throwable",c0,55,25,7d),
	HX_("boundsRect",39,de,ba,7e),
	HX_("boundsSprite",5a,9c,7f,8f),
	HX_("hasGravity",14,56,b3,02),
	HX_("gravityX",4a,16,81,87),
	HX_("gravityY",4b,16,81,87),
	HX_("frictionX",1e,62,80,38),
	HX_("frictionY",1f,62,80,38),
	HX_("toleranceX",ab,2e,39,d9),
	HX_("toleranceY",ac,2e,39,d9),
	HX_("isDragged",48,c2,51,f5),
	HX_("draggable",0d,2d,d6,5d),
	HX_("springOnPressed",b6,d2,05,91),
	HX_("springOffsetX",18,7e,8c,a6),
	HX_("springOffsetY",19,7e,8c,a6),
	HX_("mousePressedCallback",e2,3d,cb,68),
	HX_("mouseReleasedCallback",e7,af,4b,6c),
	HX_("mouseSpring",d2,0a,1e,b9),
	HX_("mouseStartDragCallback",76,d1,88,55),
	HX_("mouseStopDragCallback",40,19,a4,b9),
	HX_("hasMouseSpring",98,4d,a8,aa),
	HX_("_snapOnDrag",bc,9f,c8,ce),
	HX_("_snapOnRelease",ff,9e,51,9b),
	HX_("_snapX",0f,72,fb,7b),
	HX_("_snapY",10,72,fb,7b),
	HX_("_clickOnRelease",9f,21,af,fe),
	HX_("_clickPixelPerfect",50,dc,03,38),
	HX_("_clickPixelPerfectAlpha",ee,98,cf,11),
	HX_("_clickCounter",73,86,f2,f1),
	HX_("_throwXFactor",c0,a5,d3,19),
	HX_("_throwYFactor",81,1c,69,43),
	HX_("_dragPixelPerfect",9a,a7,19,c0),
	HX_("_dragPixelPerfectAlpha",64,a1,42,26),
	HX_("_dragOffsetX",d2,d9,8f,f3),
	HX_("_dragOffsetY",d3,d9,8f,f3),
	HX_("_dragFromPoint",33,24,ea,13),
	HX_("_allowHorizontalDrag",62,64,99,55),
	HX_("_allowVerticalDrag",74,46,da,fd),
	HX_("enableMouseClicks",6d,39,59,7c),
	HX_("disableMouseClicks",28,9e,22,9b),
	HX_("enableMouseDrag",b6,ad,c5,d2),
	HX_("disableMouseDrag",b1,dd,e6,c2),
	HX_("enableMouseThrow",24,65,0c,ca),
	HX_("disableMouseThrow",c9,30,f5,f6),
	HX_("enableMouseSnap",0c,d8,ac,dc),
	HX_("disableMouseSnap",07,08,ce,cc),
	HX_("enableMouseSpring",0f,cd,a0,35),
	HX_("disableMouseSpring",ca,31,6a,54),
	HX_("setDragLock",c1,c7,18,56),
	HX_("update",09,86,05,87),
	HX_("updateGravity",45,d3,6d,43),
	HX_("updateDrag",9d,16,25,fb),
	HX_("mousePressedHandler",4d,be,1d,fb),
	HX_("mouseReleasedHandler",e8,33,44,59),
	HX_("isOverPixelPerfect",a5,da,18,8d),
	HX_("startDrag",76,a5,63,fb),
	HX_("checkBoundsRect",21,45,14,f8),
	HX_("checkBoundsSprite",42,8d,2e,1f),
	HX_("stopDrag",16,71,2a,95),
	HX_("setGravity",cc,92,de,ca),
	HX_("flipGravity",21,e3,6f,48),
	HX_("get_clicks",f4,b2,d5,fa),
	HX_("set_clicks",68,51,53,fe),
	HX_("get_springX",02,7d,80,e5),
	HX_("get_springY",03,7d,80,e5),
	HX_("get_point",a7,10,39,0a),
	HX_("set_point",b3,fc,89,ed),
	HX_("get_mouseOver",f0,1d,71,b7),
	HX_("get_mouseX",5c,ba,95,bc),
	HX_("get_mouseY",5d,ba,95,bc),
	HX_("get_rect",ad,08,62,cb),
	::String(null()) };

::hx::Class FlxExtendedMouseSprite_obj::__mClass;

void FlxExtendedMouseSprite_obj::__register()
{
	FlxExtendedMouseSprite_obj _hx_dummy;
	FlxExtendedMouseSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.display.FlxExtendedMouseSprite",d4,64,44,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxExtendedMouseSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxExtendedMouseSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxExtendedMouseSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxExtendedMouseSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace display
