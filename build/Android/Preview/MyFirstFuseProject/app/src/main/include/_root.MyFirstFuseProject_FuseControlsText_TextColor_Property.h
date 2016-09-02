// This file was generated based on C:\Users\Eddz-\Documents\Fuse\MyFirstFuseProject\build\Android\Preview\cache\MyFirstFuseProject.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MyFirstFuseProject_FuseControlsText_TextColor_Property;}

namespace g{

// internal sealed class MyFirstFuseProject_FuseControlsText_TextColor_Property :19
// {
::g::Uno::UX::Property1_type* MyFirstFuseProject_FuseControlsText_TextColor_Property_typeof();
void MyFirstFuseProject_FuseControlsText_TextColor_Property__ctor_2_fn(MyFirstFuseProject_FuseControlsText_TextColor_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name);
void MyFirstFuseProject_FuseControlsText_TextColor_Property__Get_fn(MyFirstFuseProject_FuseControlsText_TextColor_Property* __this, ::g::Uno::Float4* __retval);
void MyFirstFuseProject_FuseControlsText_TextColor_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, MyFirstFuseProject_FuseControlsText_TextColor_Property** __retval);
void MyFirstFuseProject_FuseControlsText_TextColor_Property__get_Object_fn(MyFirstFuseProject_FuseControlsText_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void MyFirstFuseProject_FuseControlsText_TextColor_Property__Set_fn(MyFirstFuseProject_FuseControlsText_TextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin);
void MyFirstFuseProject_FuseControlsText_TextColor_Property__get_SupportsOriginSetter_fn(MyFirstFuseProject_FuseControlsText_TextColor_Property* __this, bool* __retval);

struct MyFirstFuseProject_FuseControlsText_TextColor_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Controls::Text*> _obj;

    void ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name);
    static MyFirstFuseProject_FuseControlsText_TextColor_Property* New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
