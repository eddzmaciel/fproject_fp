// This file was generated based on C:\Users\Eddz-\Documents\Fuse\MyFirstFuseProject\build\Android\Preview\cache\MyFirstFuseProject.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MyFirstFuseProject_PageWithTitle_HeaderColor_Property;}
namespace g{struct PageWithTitle;}

namespace g{

// internal sealed class MyFirstFuseProject_PageWithTitle_HeaderColor_Property :55
// {
::g::Uno::UX::Property1_type* MyFirstFuseProject_PageWithTitle_HeaderColor_Property_typeof();
void MyFirstFuseProject_PageWithTitle_HeaderColor_Property__ctor_2_fn(MyFirstFuseProject_PageWithTitle_HeaderColor_Property* __this, ::g::PageWithTitle* obj, ::g::Uno::UX::Selector* name);
void MyFirstFuseProject_PageWithTitle_HeaderColor_Property__Get_fn(MyFirstFuseProject_PageWithTitle_HeaderColor_Property* __this, ::g::Uno::Float4* __retval);
void MyFirstFuseProject_PageWithTitle_HeaderColor_Property__New1_fn(::g::PageWithTitle* obj, ::g::Uno::UX::Selector* name, MyFirstFuseProject_PageWithTitle_HeaderColor_Property** __retval);
void MyFirstFuseProject_PageWithTitle_HeaderColor_Property__get_Object_fn(MyFirstFuseProject_PageWithTitle_HeaderColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void MyFirstFuseProject_PageWithTitle_HeaderColor_Property__Set_fn(MyFirstFuseProject_PageWithTitle_HeaderColor_Property* __this, ::g::Uno::Float4* v, uObject* origin);
void MyFirstFuseProject_PageWithTitle_HeaderColor_Property__get_SupportsOriginSetter_fn(MyFirstFuseProject_PageWithTitle_HeaderColor_Property* __this, bool* __retval);

struct MyFirstFuseProject_PageWithTitle_HeaderColor_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::PageWithTitle*> _obj;

    void ctor_2(::g::PageWithTitle* obj, ::g::Uno::UX::Selector name);
    static MyFirstFuseProject_PageWithTitle_HeaderColor_Property* New1(::g::PageWithTitle* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
