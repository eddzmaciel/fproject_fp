// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Controls.ScrollView\0.33.5\.uno\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollView__DefaultScroller;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property;}

namespace g{

// internal sealed class FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property :114
// {
::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property_typeof();
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__ctor_2_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* __this, ::g::Fuse::Controls::ScrollView__DefaultScroller* obj, ::g::Uno::UX::Selector* name);
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__Get_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* __this, bool* __retval);
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__New1_fn(::g::Fuse::Controls::ScrollView__DefaultScroller* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property** __retval);
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__get_Object_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__Set_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* __this, bool* v, uObject* origin);
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* __this, bool* __retval);

struct FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Controls::ScrollView__DefaultScroller*> _obj;

    void ctor_2(::g::Fuse::Controls::ScrollView__DefaultScroller* obj, ::g::Uno::UX::Selector name);
    static FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* New1(::g::Fuse::Controls::ScrollView__DefaultScroller* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
