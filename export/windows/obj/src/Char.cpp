#include <hxcpp.h>

#ifndef INCLUDED_Char
#include <Char.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9298642b577f29bb_10_new,"Char","new",0x67f3dee8,"Char.new","Char.hx",10,0x9c977588)

void Char_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_9298642b577f29bb_10_new)
HXLINE(  11)		super::__construct(x,y,null());
HXLINE(  12)		this->loadGraphic(HX_("assets/images/shit.png",a6,47,3e,39),null(),null(),null(),null(),null());
            	}

Dynamic Char_obj::__CreateEmpty() { return new Char_obj; }

void *Char_obj::_hx_vtable = 0;

Dynamic Char_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Char_obj > _hx_result = new Char_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Char_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x00eb811a) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x00eb811a;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}


::hx::ObjectPtr< Char_obj > Char_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	::hx::ObjectPtr< Char_obj > __this = new Char_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< Char_obj > Char_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	Char_obj *__this = (Char_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Char_obj), true, "Char"));
	*(void **)__this = Char_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

Char_obj::Char_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Char_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Char_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Char_obj::__mClass;

void Char_obj::__register()
{
	Char_obj _hx_dummy;
	Char_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Char",f6,8a,98,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Char_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Char_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Char_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

