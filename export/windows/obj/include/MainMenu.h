#ifndef INCLUDED_MainMenu
#define INCLUDED_MainMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(MainMenu)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedContainer)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES MainMenu_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef MainMenu_obj OBJ_;
		MainMenu_obj();

	public:
		enum { _hx_ClassId = 0x2d004ebc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="MainMenu")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"MainMenu"); }
		static ::hx::ObjectPtr< MainMenu_obj > __new();
		static ::hx::ObjectPtr< MainMenu_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MainMenu_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MainMenu",98,76,8d,7a); }

		 ::flixel::FlxSprite sprite;
		 ::flixel::text::FlxText playst;
		 ::flixel::text::FlxText playst2;
		bool thingscaled;
		Float thingselected;
		Float defaulty;
		 ::flixel::FlxSprite screenfadething;
		void create();

		void update(Float _elapsed);

		void changeselection();
		::Dynamic changeselection_dyn();

};


#endif /* INCLUDED_MainMenu */ 
