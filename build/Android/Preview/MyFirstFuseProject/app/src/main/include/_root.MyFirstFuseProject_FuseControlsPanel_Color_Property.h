// This file was generated based on C:\Users\Eddz-\Documents\Fuse\MyFirstFuseProject\build\Android\Preview\cache\MyFirstFuseProject.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MyFirstFuseProject_FuseControlsPanel_Color_Property;}

namespace g{

// internal sealed class MyFirstFuseProject_FuseControlsPanel_Color_Property :1
// {
::g::Uno::UX::Property1_type* MyFirstFuseProject_FuseControlsPanel_Color_Property_typeof();
void MyFirstFuseProject_FuseControlsPanel_Color_Property__ctor_2_fn(MyFirstFuseProject_FuseControlsPanel_Color_Property* __this, ::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name);
void MyFirstFuseProject_FuseControlsPanel_Color_Property__Get_fn(MyFirstFuseProject_FuseControlsPanel_Color_Property* __this, ::g::Uno::Float4* __retval);
void MyFirstFuseProject_FuseControlsPanel_Color_Property__New1_fn(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name, MyFirstFuseProject_FuseControlsPanel_Color_Property** __retval);
void MyFirstFuseProject_FuseControlsPanel_Color_Property__get_Object_fn(MyFirstFuseProject_FuseControlsPanel_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void MyFirstFuseProject_FuseControlsPanel_Color_Property__Set_fn(MyFirstFuseProject_FuseControlsPanel_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin);
void MyFirstFuseProject_FuseControlsPanel_Color_Property__get_SupportsOriginSetter_fn(MyFirstFuseProject_FuseControlsPanel_Color_Property* __this, bool* __retval);

struct MyFirstFuseProject_FuseControlsPanel_Color_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Controls::Panel*> _obj;

    void ctor_2(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name);
    static MyFirstFuseProject_FuseControlsPanel_Color_Property* New1(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
