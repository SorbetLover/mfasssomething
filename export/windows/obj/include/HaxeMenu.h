#ifndef INCLUDED_HaxeMenu
#define INCLUDED_HaxeMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(HaxeMenu)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedContainer)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES HaxeMenu_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef HaxeMenu_obj OBJ_;
		HaxeMenu_obj();

	public:
		enum { _hx_ClassId = 0x36a52a8d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="HaxeMenu")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"HaxeMenu"); }
		static ::hx::ObjectPtr< HaxeMenu_obj > __new();
		static ::hx::ObjectPtr< HaxeMenu_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HaxeMenu_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HaxeMenu",05,6d,50,2d); }

		 ::flixel::FlxSprite sprite1;
		 ::flixel::FlxSprite sprite2;
		 ::flixel::FlxSprite sprite3;
		 ::flixel::FlxSprite sprite4;
		 ::flixel::FlxSprite sprite5;
		 ::flixel::text::FlxText haxes;
		void create();

		void update(Float _elapsed);

};


#endif /* INCLUDED_HaxeMenu */ 
