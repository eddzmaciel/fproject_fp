// This file was generated based on C:\Users\Eddz-\Documents\Fuse\MyFirstFuseProject\build\Android\Preview\cache\MyFirstFuseProject.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MyFirstFuseProject_FuseReactiveEach_Items_Property;}

namespace g{

// internal sealed class MyFirstFuseProject_FuseReactiveEach_Items_Property :28
// {
::g::Uno::UX::Property1_type* MyFirstFuseProject_FuseReactiveEach_Items_Property_typeof();
void MyFirstFuseProject_FuseReactiveEach_Items_Property__ctor_2_fn(MyFirstFuseProject_FuseReactiveEach_Items_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name);
void MyFirstFuseProject_FuseReactiveEach_Items_Property__Get_fn(MyFirstFuseProject_FuseReactiveEach_Items_Property* __this, uObject** __retval);
void MyFirstFuseProject_FuseReactiveEach_Items_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, MyFirstFuseProject_FuseReactiveEach_Items_Property** __retval);
void MyFirstFuseProject_FuseReactiveEach_Items_Property__get_Object_fn(MyFirstFuseProject_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void MyFirstFuseProject_FuseReactiveEach_Items_Property__Set_fn(MyFirstFuseProject_FuseReactiveEach_Items_Property* __this, uObject* v, uObject* origin);
void MyFirstFuseProject_FuseReactiveEach_Items_Property__get_SupportsOriginSetter_fn(MyFirstFuseProject_FuseReactiveEach_Items_Property* __this, bool* __retval);

struct MyFirstFuseProject_FuseReactiveEach_Items_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Reactive::Each*> _obj;

    void ctor_2(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
    static MyFirstFuseProject_FuseReactiveEach_Items_Property* New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
