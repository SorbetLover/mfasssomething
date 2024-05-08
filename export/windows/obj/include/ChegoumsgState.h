#ifndef INCLUDED_ChegoumsgState
#define INCLUDED_ChegoumsgState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(ChegoumsgState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,display,FlxBackdrop)
HX_DECLARE_CLASS2(flixel,group,FlxTypedContainer)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES ChegoumsgState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef ChegoumsgState_obj OBJ_;
		ChegoumsgState_obj();

	public:
		enum { _hx_ClassId = 0x0cb7af1d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ChegoumsgState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ChegoumsgState"); }
		static ::hx::ObjectPtr< ChegoumsgState_obj > __new();
		static ::hx::ObjectPtr< ChegoumsgState_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ChegoumsgState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ChegoumsgState",5d,2c,cc,2a); }

		 ::flixel::addons::display::FlxBackdrop mfbackdrop;
		bool aaaa;
		void create();

		void update(Float _elapsed);

		void startmovements();
		::Dynamic startmovements_dyn();

};


#endif /* INCLUDED_ChegoumsgState */ 
