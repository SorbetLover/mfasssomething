#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_813bae724619fe52_9_new,"flixel.addons.display.FlxMouseSpring","new",0x7170d847,"flixel.addons.display.FlxMouseSpring.new","flixel/addons/display/FlxMouseSpring.hx",9,0xe39b05c8)
HX_LOCAL_STACK_FRAME(_hx_pos_813bae724619fe52_43_get__retainVelocity,"flixel.addons.display.FlxMouseSpring","get__retainVelocity",0x3463989f,"flixel.addons.display.FlxMouseSpring.get__retainVelocity","flixel/addons/display/FlxMouseSpring.hx",43,0xe39b05c8)
HX_LOCAL_STACK_FRAME(_hx_pos_813bae724619fe52_48_set__retainVelocity,"flixel.addons.display.FlxMouseSpring","set__retainVelocity",0x71008bab,"flixel.addons.display.FlxMouseSpring.set__retainVelocity","flixel/addons/display/FlxMouseSpring.hx",48,0xe39b05c8)
HX_LOCAL_STACK_FRAME(_hx_pos_813bae724619fe52_90_update,"flixel.addons.display.FlxMouseSpring","update",0x1f372882,"flixel.addons.display.FlxMouseSpring.update","flixel/addons/display/FlxMouseSpring.hx",90,0xe39b05c8)
HX_LOCAL_STACK_FRAME(_hx_pos_813bae724619fe52_114_reset,"flixel.addons.display.FlxMouseSpring","reset",0x9f245976,"flixel.addons.display.FlxMouseSpring.reset","flixel/addons/display/FlxMouseSpring.hx",114,0xe39b05c8)
HX_LOCAL_STACK_FRAME(_hx_pos_813bae724619fe52_118_destroy,"flixel.addons.display.FlxMouseSpring","destroy",0xb7c2b461,"flixel.addons.display.FlxMouseSpring.destroy","flixel/addons/display/FlxMouseSpring.hx",118,0xe39b05c8)
namespace flixel{
namespace addons{
namespace display{

void FlxMouseSpring_obj::__construct( ::flixel::FlxSprite sprite,::hx::Null< bool >  __o_retainVelocity,::hx::Null< Float >  __o_tension,::hx::Null< Float >  __o_friction,::hx::Null< Float >  __o_gravity, ::flixel::math::FlxBasePoint offset){
            		bool retainVelocity = __o_retainVelocity.Default(false);
            		Float tension = __o_tension.Default(((Float)0.1));
            		Float friction = __o_friction.Default(((Float)0.95));
            		Float gravity = __o_gravity.Default(((Float)0.0));
            	HX_STACKFRAME(&_hx_pos_813bae724619fe52_9_new)
HXLINE(  51)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  51)		point->_inPool = false;
HXDLIN(  51)		this->velocity = point;
HXLINE(  68)		this->sprite = sprite;
HXLINE(  69)		this->retainVelocity = retainVelocity;
HXLINE(  70)		this->tension = tension;
HXLINE(  71)		this->friction = friction;
HXLINE(  72)		this->gravity = gravity;
HXLINE(  74)		if (::hx::IsNotNull( offset )) {
HXLINE(  76)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  76)			point->_inPool = false;
HXDLIN(  76)			 ::flixel::math::FlxBasePoint this1 = point;
HXDLIN(  76)			{
HXLINE(  76)				Float y = offset->y;
HXDLIN(  76)				this1->set_x(offset->x);
HXDLIN(  76)				this1->set_y(y);
            			}
HXDLIN(  76)			if (offset->_weak) {
HXLINE(  76)				offset->put();
            			}
HXDLIN(  76)			this->offset = this1;
HXLINE(  77)			if (offset->_weak) {
HXLINE(  77)				offset->put();
            			}
            		}
            		else {
HXLINE(  79)			if (::Std_obj::isOfType(sprite,::hx::ClassOf< ::flixel::addons::display::FlxExtendedMouseSprite >())) {
HXLINE(  81)				 ::flixel::addons::display::FlxExtendedMouseSprite extSprite = ( ( ::flixel::addons::display::FlxExtendedMouseSprite)(sprite) );
HXLINE(  82)				Float x = ( (Float)(extSprite->springOffsetX) );
HXDLIN(  82)				Float y = ( (Float)(extSprite->springOffsetY) );
HXDLIN(  82)				 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN(  82)				point->_inPool = false;
HXDLIN(  82)				this->offset = point;
            			}
            		}
            	}

Dynamic FlxMouseSpring_obj::__CreateEmpty() { return new FlxMouseSpring_obj; }

void *FlxMouseSpring_obj::_hx_vtable = 0;

Dynamic FlxMouseSpring_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxMouseSpring_obj > _hx_result = new FlxMouseSpring_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FlxMouseSpring_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4d452333;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_display_FlxMouseSpring__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::addons::display::FlxMouseSpring_obj::destroy,
};

void *FlxMouseSpring_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_display_FlxMouseSpring__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool FlxMouseSpring_obj::get__retainVelocity(){
            	HX_STACKFRAME(&_hx_pos_813bae724619fe52_43_get__retainVelocity)
HXDLIN(  43)		return this->retainVelocity;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseSpring_obj,get__retainVelocity,return )

bool FlxMouseSpring_obj::set__retainVelocity(bool value){
            	HX_STACKFRAME(&_hx_pos_813bae724619fe52_48_set__retainVelocity)
HXDLIN(  48)		return (this->retainVelocity = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseSpring_obj,set__retainVelocity,return )

void FlxMouseSpring_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_813bae724619fe52_90_update)
HXLINE(  91)		Float offsetX;
HXDLIN(  91)		if (::hx::IsNull( this->offset )) {
HXLINE(  91)			offsetX = this->offset->x;
            		}
            		else {
HXLINE(  91)			offsetX = this->sprite->origin->x;
            		}
HXLINE(  92)		Float offsetY;
HXDLIN(  92)		if (::hx::IsNull( this->offset )) {
HXLINE(  92)			offsetY = this->offset->y;
            		}
            		else {
HXLINE(  92)			offsetY = this->sprite->origin->y;
            		}
HXLINE(  94)		Float disX = (( (Float)(::flixel::FlxG_obj::mouse->x) ) - (this->sprite->x + offsetX));
HXLINE(  95)		Float disY = (( (Float)(::flixel::FlxG_obj::mouse->y) ) - (this->sprite->y + offsetY));
HXLINE(  97)		this->velocity->set_x((this->velocity->x + (disX * this->tension)));
HXLINE(  98)		this->velocity->set_y((this->velocity->y + (disY * this->tension)));
HXLINE( 100)		this->velocity->set_x((this->velocity->x * this->friction));
HXLINE( 101)		this->velocity->set_y((this->velocity->y + this->gravity));
HXLINE( 102)		this->velocity->set_y((this->velocity->y * this->friction));
HXLINE( 105)		 ::flixel::FlxSprite fh = this->sprite;
HXDLIN( 105)		fh->set_x((fh->x + this->velocity->x));
HXLINE( 106)		 ::flixel::FlxSprite fh1 = this->sprite;
HXDLIN( 106)		fh1->set_y((fh1->y + this->velocity->y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseSpring_obj,update,(void))

void FlxMouseSpring_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_813bae724619fe52_114_reset)
HXDLIN( 114)		 ::flixel::math::FlxBasePoint this1 = this->velocity;
HXDLIN( 114)		this1->set_x(( (Float)(0) ));
HXDLIN( 114)		this1->set_y(( (Float)(0) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseSpring_obj,reset,(void))

void FlxMouseSpring_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_813bae724619fe52_118_destroy)
HXLINE( 119)		this->sprite = null();
HXLINE( 120)		this->offset = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->offset)) );
HXLINE( 121)		this->velocity = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->velocity)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseSpring_obj,destroy,(void))


::hx::ObjectPtr< FlxMouseSpring_obj > FlxMouseSpring_obj::__new( ::flixel::FlxSprite sprite,::hx::Null< bool >  __o_retainVelocity,::hx::Null< Float >  __o_tension,::hx::Null< Float >  __o_friction,::hx::Null< Float >  __o_gravity, ::flixel::math::FlxBasePoint offset) {
	::hx::ObjectPtr< FlxMouseSpring_obj > __this = new FlxMouseSpring_obj();
	__this->__construct(sprite,__o_retainVelocity,__o_tension,__o_friction,__o_gravity,offset);
	return __this;
}

::hx::ObjectPtr< FlxMouseSpring_obj > FlxMouseSpring_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxSprite sprite,::hx::Null< bool >  __o_retainVelocity,::hx::Null< Float >  __o_tension,::hx::Null< Float >  __o_friction,::hx::Null< Float >  __o_gravity, ::flixel::math::FlxBasePoint offset) {
	FlxMouseSpring_obj *__this = (FlxMouseSpring_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxMouseSpring_obj), true, "flixel.addons.display.FlxMouseSpring"));
	*(void **)__this = FlxMouseSpring_obj::_hx_vtable;
	__this->__construct(sprite,__o_retainVelocity,__o_tension,__o_friction,__o_gravity,offset);
	return __this;
}

FlxMouseSpring_obj::FlxMouseSpring_obj()
{
}

void FlxMouseSpring_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouseSpring);
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(tension,"tension");
	HX_MARK_MEMBER_NAME(friction,"friction");
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(retainVelocity,"retainVelocity");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(velY,"velY");
	HX_MARK_END_CLASS();
}

void FlxMouseSpring_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(tension,"tension");
	HX_VISIT_MEMBER_NAME(friction,"friction");
	HX_VISIT_MEMBER_NAME(gravity,"gravity");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(retainVelocity,"retainVelocity");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(velY,"velY");
}

::hx::Val FlxMouseSpring_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"velY") ) { return ::hx::Val( velY ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return ::hx::Val( sprite ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tension") ) { return ::hx::Val( tension ); }
		if (HX_FIELD_EQ(inName,"gravity") ) { return ::hx::Val( gravity ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { return ::hx::Val( friction ); }
		if (HX_FIELD_EQ(inName,"velocity") ) { return ::hx::Val( velocity ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"retainVelocity") ) { return ::hx::Val( retainVelocity ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_retainVelocity") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get__retainVelocity() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get__retainVelocity") ) { return ::hx::Val( get__retainVelocity_dyn() ); }
		if (HX_FIELD_EQ(inName,"set__retainVelocity") ) { return ::hx::Val( set__retainVelocity_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxMouseSpring_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"velY") ) { velY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tension") ) { tension=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravity") ) { gravity=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { friction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"retainVelocity") ) { retainVelocity=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_retainVelocity") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set__retainVelocity(inValue.Cast< bool >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMouseSpring_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprite",05,dc,95,c3));
	outFields->push(HX_("tension",92,a7,2c,dc));
	outFields->push(HX_("friction",fa,78,c9,97));
	outFields->push(HX_("gravity",4e,6e,ff,77));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("retainVelocity",02,fb,1a,50));
	outFields->push(HX_("_retainVelocity",a1,43,7b,99));
	outFields->push(HX_("velocity",1d,02,fe,1e));
	outFields->push(HX_("velY",5c,2f,4c,4e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxMouseSpring_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxMouseSpring_obj,sprite),HX_("sprite",05,dc,95,c3)},
	{::hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,tension),HX_("tension",92,a7,2c,dc)},
	{::hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,friction),HX_("friction",fa,78,c9,97)},
	{::hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,gravity),HX_("gravity",4e,6e,ff,77)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxMouseSpring_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsBool,(int)offsetof(FlxMouseSpring_obj,retainVelocity),HX_("retainVelocity",02,fb,1a,50)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxMouseSpring_obj,velocity),HX_("velocity",1d,02,fe,1e)},
	{::hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,velY),HX_("velY",5c,2f,4c,4e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxMouseSpring_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxMouseSpring_obj_sMemberFields[] = {
	HX_("sprite",05,dc,95,c3),
	HX_("tension",92,a7,2c,dc),
	HX_("friction",fa,78,c9,97),
	HX_("gravity",4e,6e,ff,77),
	HX_("offset",93,97,3f,60),
	HX_("retainVelocity",02,fb,1a,50),
	HX_("get__retainVelocity",b8,12,86,24),
	HX_("set__retainVelocity",c4,05,23,61),
	HX_("velocity",1d,02,fe,1e),
	HX_("velY",5c,2f,4c,4e),
	HX_("update",09,86,05,87),
	HX_("reset",cf,49,c8,e6),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class FlxMouseSpring_obj::__mClass;

void FlxMouseSpring_obj::__register()
{
	FlxMouseSpring_obj _hx_dummy;
	FlxMouseSpring_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.display.FlxMouseSpring",d5,a8,67,1d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxMouseSpring_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxMouseSpring_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxMouseSpring_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxMouseSpring_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace display
