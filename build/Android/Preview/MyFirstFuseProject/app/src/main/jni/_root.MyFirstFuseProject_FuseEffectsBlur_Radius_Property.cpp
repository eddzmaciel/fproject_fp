// This file was generated based on C:\Users\Eddz-\Documents\Fuse\MyFirstFuseProject\build\Android\Preview\cache\MyFirstFuseProject.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MyFirstFuseProject_FuseEffectsBlur_Radius_Property.h>
#include <Fuse.Effects.Blur.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class MyFirstFuseProject_FuseEffectsBlur_Radius_Property :109
// {
static void MyFirstFuseProject_FuseEffectsBlur_Radius_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Effects::Blur_typeof(), offsetof(::g::MyFirstFuseProject_FuseEffectsBlur_Radius_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* MyFirstFuseProject_FuseEffectsBlur_Radius_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(MyFirstFuseProject_FuseEffectsBlur_Radius_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("MyFirstFuseProject_FuseEffectsBlur_Radius_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_build_ = MyFirstFuseProject_FuseEffectsBlur_Radius_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))MyFirstFuseProject_FuseEffectsBlur_Radius_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))MyFirstFuseProject_FuseEffectsBlur_Radius_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))MyFirstFuseProject_FuseEffectsBlur_Radius_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))MyFirstFuseProject_FuseEffectsBlur_Radius_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public MyFirstFuseProject_FuseEffectsBlur_Radius_Property(Fuse.Effects.Blur obj, Uno.UX.Selector name) :112
void MyFirstFuseProject_FuseEffectsBlur_Radius_Property__ctor_2_fn(MyFirstFuseProject_FuseEffectsBlur_Radius_Property* __this, ::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :114
void MyFirstFuseProject_FuseEffectsBlur_Radius_Property__Get_fn(MyFirstFuseProject_FuseEffectsBlur_Radius_Property* __this, float* __retval)
{
    uStackFrame __("MyFirstFuseProject_FuseEffectsBlur_Radius_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Radius(), void();
}

// public MyFirstFuseProject_FuseEffectsBlur_Radius_Property New(Fuse.Effects.Blur obj, Uno.UX.Selector name) :112
void MyFirstFuseProject_FuseEffectsBlur_Radius_Property__New1_fn(::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector* name, MyFirstFuseProject_FuseEffectsBlur_Radius_Property** __retval)
{
    *__retval = MyFirstFuseProject_FuseEffectsBlur_Radius_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :113
void MyFirstFuseProject_FuseEffectsBlur_Radius_Property__get_Object_fn(MyFirstFuseProject_FuseEffectsBlur_Radius_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("MyFirstFuseProject_FuseEffectsBlur_Radius_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :115
void MyFirstFuseProject_FuseEffectsBlur_Radius_Property__Set_fn(MyFirstFuseProject_FuseEffectsBlur_Radius_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("MyFirstFuseProject_FuseEffectsBlur_Radius_Property", "Set(float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(__this->_obj)->Radius(v_);
}

// public override sealed bool get_SupportsOriginSetter() :116
void MyFirstFuseProject_FuseEffectsBlur_Radius_Property__get_SupportsOriginSetter_fn(MyFirstFuseProject_FuseEffectsBlur_Radius_Property* __this, bool* __retval)
{
    uStackFrame __("MyFirstFuseProject_FuseEffectsBlur_Radius_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public MyFirstFuseProject_FuseEffectsBlur_Radius_Property(Fuse.Effects.Blur obj, Uno.UX.Selector name) [instance] :112
void MyFirstFuseProject_FuseEffectsBlur_Radius_Property::ctor_2(::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("MyFirstFuseProject_FuseEffectsBlur_Radius_Property", ".ctor(Fuse.Effects.Blur,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public MyFirstFuseProject_FuseEffectsBlur_Radius_Property New(Fuse.Effects.Blur obj, Uno.UX.Selector name) [static] :112
MyFirstFuseProject_FuseEffectsBlur_Radius_Property* MyFirstFuseProject_FuseEffectsBlur_Radius_Property::New1(::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector name)
{
    MyFirstFuseProject_FuseEffectsBlur_Radius_Property* obj1 = (MyFirstFuseProject_FuseEffectsBlur_Radius_Property*)uNew(MyFirstFuseProject_FuseEffectsBlur_Radius_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
