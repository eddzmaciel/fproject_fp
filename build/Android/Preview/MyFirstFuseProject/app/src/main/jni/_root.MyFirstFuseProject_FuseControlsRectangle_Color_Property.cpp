// This file was generated based on C:\Users\Eddz-\Documents\Fuse\MyFirstFuseProject\build\Android\Preview\cache\MyFirstFuseProject.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MyFirstFuseProject_FuseControlsRectangle_Color_Property.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class MyFirstFuseProject_FuseControlsRectangle_Color_Property :37
// {
static void MyFirstFuseProject_FuseControlsRectangle_Color_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MyFirstFuseProject_FuseControlsRectangle_Color_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* MyFirstFuseProject_FuseControlsRectangle_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(MyFirstFuseProject_FuseControlsRectangle_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("MyFirstFuseProject_FuseControlsRectangle_Color_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = MyFirstFuseProject_FuseControlsRectangle_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))MyFirstFuseProject_FuseControlsRectangle_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))MyFirstFuseProject_FuseControlsRectangle_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))MyFirstFuseProject_FuseControlsRectangle_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))MyFirstFuseProject_FuseControlsRectangle_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public MyFirstFuseProject_FuseControlsRectangle_Color_Property(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) :40
void MyFirstFuseProject_FuseControlsRectangle_Color_Property__ctor_2_fn(MyFirstFuseProject_FuseControlsRectangle_Color_Property* __this, ::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :42
void MyFirstFuseProject_FuseControlsRectangle_Color_Property__Get_fn(MyFirstFuseProject_FuseControlsRectangle_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("MyFirstFuseProject_FuseControlsRectangle_Color_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public MyFirstFuseProject_FuseControlsRectangle_Color_Property New(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) :40
void MyFirstFuseProject_FuseControlsRectangle_Color_Property__New1_fn(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name, MyFirstFuseProject_FuseControlsRectangle_Color_Property** __retval)
{
    *__retval = MyFirstFuseProject_FuseControlsRectangle_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :41
void MyFirstFuseProject_FuseControlsRectangle_Color_Property__get_Object_fn(MyFirstFuseProject_FuseControlsRectangle_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("MyFirstFuseProject_FuseControlsRectangle_Color_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :43
void MyFirstFuseProject_FuseControlsRectangle_Color_Property__Set_fn(MyFirstFuseProject_FuseControlsRectangle_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("MyFirstFuseProject_FuseControlsRectangle_Color_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :44
void MyFirstFuseProject_FuseControlsRectangle_Color_Property__get_SupportsOriginSetter_fn(MyFirstFuseProject_FuseControlsRectangle_Color_Property* __this, bool* __retval)
{
    uStackFrame __("MyFirstFuseProject_FuseControlsRectangle_Color_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public MyFirstFuseProject_FuseControlsRectangle_Color_Property(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) [instance] :40
void MyFirstFuseProject_FuseControlsRectangle_Color_Property::ctor_2(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("MyFirstFuseProject_FuseControlsRectangle_Color_Property", ".ctor(Fuse.Controls.Rectangle,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public MyFirstFuseProject_FuseControlsRectangle_Color_Property New(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) [static] :40
MyFirstFuseProject_FuseControlsRectangle_Color_Property* MyFirstFuseProject_FuseControlsRectangle_Color_Property::New1(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name)
{
    MyFirstFuseProject_FuseControlsRectangle_Color_Property* obj1 = (MyFirstFuseProject_FuseControlsRectangle_Color_Property*)uNew(MyFirstFuseProject_FuseControlsRectangle_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
