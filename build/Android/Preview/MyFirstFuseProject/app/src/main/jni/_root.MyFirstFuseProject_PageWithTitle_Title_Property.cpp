// This file was generated based on C:\Users\Eddz-\Documents\Fuse\MyFirstFuseProject\build\Android\Preview\cache\MyFirstFuseProject.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MyFirstFuseProject_PageWithTitle_Title_Property.h>
#include <_root.PageWithTitle.h>
#include <Fuse.Controls.Page.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class MyFirstFuseProject_PageWithTitle_Title_Property :64
// {
static void MyFirstFuseProject_PageWithTitle_Title_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::PageWithTitle_typeof(), offsetof(::g::MyFirstFuseProject_PageWithTitle_Title_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* MyFirstFuseProject_PageWithTitle_Title_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(MyFirstFuseProject_PageWithTitle_Title_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("MyFirstFuseProject_PageWithTitle_Title_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_build_ = MyFirstFuseProject_PageWithTitle_Title_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))MyFirstFuseProject_PageWithTitle_Title_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))MyFirstFuseProject_PageWithTitle_Title_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))MyFirstFuseProject_PageWithTitle_Title_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))MyFirstFuseProject_PageWithTitle_Title_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public MyFirstFuseProject_PageWithTitle_Title_Property(PageWithTitle obj, Uno.UX.Selector name) :67
void MyFirstFuseProject_PageWithTitle_Title_Property__ctor_2_fn(MyFirstFuseProject_PageWithTitle_Title_Property* __this, ::g::PageWithTitle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :69
void MyFirstFuseProject_PageWithTitle_Title_Property__Get_fn(MyFirstFuseProject_PageWithTitle_Title_Property* __this, uString** __retval)
{
    uStackFrame __("MyFirstFuseProject_PageWithTitle_Title_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Title(), void();
}

// public MyFirstFuseProject_PageWithTitle_Title_Property New(PageWithTitle obj, Uno.UX.Selector name) :67
void MyFirstFuseProject_PageWithTitle_Title_Property__New1_fn(::g::PageWithTitle* obj, ::g::Uno::UX::Selector* name, MyFirstFuseProject_PageWithTitle_Title_Property** __retval)
{
    *__retval = MyFirstFuseProject_PageWithTitle_Title_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :68
void MyFirstFuseProject_PageWithTitle_Title_Property__get_Object_fn(MyFirstFuseProject_PageWithTitle_Title_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("MyFirstFuseProject_PageWithTitle_Title_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :70
void MyFirstFuseProject_PageWithTitle_Title_Property__Set_fn(MyFirstFuseProject_PageWithTitle_Title_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("MyFirstFuseProject_PageWithTitle_Title_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->Title(v);
}

// public override sealed bool get_SupportsOriginSetter() :71
void MyFirstFuseProject_PageWithTitle_Title_Property__get_SupportsOriginSetter_fn(MyFirstFuseProject_PageWithTitle_Title_Property* __this, bool* __retval)
{
    uStackFrame __("MyFirstFuseProject_PageWithTitle_Title_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public MyFirstFuseProject_PageWithTitle_Title_Property(PageWithTitle obj, Uno.UX.Selector name) [instance] :67
void MyFirstFuseProject_PageWithTitle_Title_Property::ctor_2(::g::PageWithTitle* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("MyFirstFuseProject_PageWithTitle_Title_Property", ".ctor(PageWithTitle,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public MyFirstFuseProject_PageWithTitle_Title_Property New(PageWithTitle obj, Uno.UX.Selector name) [static] :67
MyFirstFuseProject_PageWithTitle_Title_Property* MyFirstFuseProject_PageWithTitle_Title_Property::New1(::g::PageWithTitle* obj, ::g::Uno::UX::Selector name)
{
    MyFirstFuseProject_PageWithTitle_Title_Property* obj1 = (MyFirstFuseProject_PageWithTitle_Title_Property*)uNew(MyFirstFuseProject_PageWithTitle_Title_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
