// This file was generated based on C:\Users\Eddz-\Documents\Fuse\MyFirstFuseProject\build\Android\Preview\cache\MyFirstFuseProject.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MyFirstFuseProject_FuseControlsRectangle_Height_Property.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class MyFirstFuseProject_FuseControlsRectangle_Height_Property :46
// {
static void MyFirstFuseProject_FuseControlsRectangle_Height_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MyFirstFuseProject_FuseControlsRectangle_Height_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* MyFirstFuseProject_FuseControlsRectangle_Height_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(MyFirstFuseProject_FuseControlsRectangle_Height_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("MyFirstFuseProject_FuseControlsRectangle_Height_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof()));
    type->fp_build_ = MyFirstFuseProject_FuseControlsRectangle_Height_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))MyFirstFuseProject_FuseControlsRectangle_Height_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))MyFirstFuseProject_FuseControlsRectangle_Height_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))MyFirstFuseProject_FuseControlsRectangle_Height_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))MyFirstFuseProject_FuseControlsRectangle_Height_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public MyFirstFuseProject_FuseControlsRectangle_Height_Property(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) :49
void MyFirstFuseProject_FuseControlsRectangle_Height_Property__ctor_2_fn(MyFirstFuseProject_FuseControlsRectangle_Height_Property* __this, ::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Uno.UX.Size Get() :51
void MyFirstFuseProject_FuseControlsRectangle_Height_Property__Get_fn(MyFirstFuseProject_FuseControlsRectangle_Height_Property* __this, ::g::Uno::UX::Size* __retval)
{
    uStackFrame __("MyFirstFuseProject_FuseControlsRectangle_Height_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Height(), void();
}

// public MyFirstFuseProject_FuseControlsRectangle_Height_Property New(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) :49
void MyFirstFuseProject_FuseControlsRectangle_Height_Property__New1_fn(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name, MyFirstFuseProject_FuseControlsRectangle_Height_Property** __retval)
{
    *__retval = MyFirstFuseProject_FuseControlsRectangle_Height_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :50
void MyFirstFuseProject_FuseControlsRectangle_Height_Property__get_Object_fn(MyFirstFuseProject_FuseControlsRectangle_Height_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("MyFirstFuseProject_FuseControlsRectangle_Height_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.Size v, Uno.UX.IPropertyListener origin) :52
void MyFirstFuseProject_FuseControlsRectangle_Height_Property__Set_fn(MyFirstFuseProject_FuseControlsRectangle_Height_Property* __this, ::g::Uno::UX::Size* v, uObject* origin)
{
    uStackFrame __("MyFirstFuseProject_FuseControlsRectangle_Height_Property", "Set(Uno.UX.Size,Uno.UX.IPropertyListener)");
    ::g::Uno::UX::Size v_ = *v;
    uPtr(__this->_obj)->Height(v_);
}

// public override sealed bool get_SupportsOriginSetter() :53
void MyFirstFuseProject_FuseControlsRectangle_Height_Property__get_SupportsOriginSetter_fn(MyFirstFuseProject_FuseControlsRectangle_Height_Property* __this, bool* __retval)
{
    uStackFrame __("MyFirstFuseProject_FuseControlsRectangle_Height_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public MyFirstFuseProject_FuseControlsRectangle_Height_Property(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) [instance] :49
void MyFirstFuseProject_FuseControlsRectangle_Height_Property::ctor_2(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("MyFirstFuseProject_FuseControlsRectangle_Height_Property", ".ctor(Fuse.Controls.Rectangle,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public MyFirstFuseProject_FuseControlsRectangle_Height_Property New(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) [static] :49
MyFirstFuseProject_FuseControlsRectangle_Height_Property* MyFirstFuseProject_FuseControlsRectangle_Height_Property::New1(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name)
{
    MyFirstFuseProject_FuseControlsRectangle_Height_Property* obj1 = (MyFirstFuseProject_FuseControlsRectangle_Height_Property*)uNew(MyFirstFuseProject_FuseControlsRectangle_Height_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
