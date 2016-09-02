// This file was generated based on C:\Users\Eddz-\Documents\Fuse\MyFirstFuseProject\MyFirstFuseProject.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MyFirstFuseProject_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public static generated class MyFirstFuseProject_bundle :0
// {
// static MyFirstFuseProject_bundle() :0
static void MyFirstFuseProject_bundle__cctor__fn(uType* __type)
{
    MyFirstFuseProject_bundle::FuseLogo0df5df88_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"MyFirstFuse...*/]))->GetFile(::STRINGS[1/*"fuselogo-25...*/]);
}

static void MyFirstFuseProject_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("MyFirstFuseProject");
    ::STRINGS[1] = uString::Const("fuselogo-25a910d7.png");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::MyFirstFuseProject_bundle::FuseLogo0df5df88_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("FuseLogo0df5df88", 0));
}

uClassType* MyFirstFuseProject_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("MyFirstFuseProject_bundle", options);
    type->fp_build_ = MyFirstFuseProject_bundle_build;
    type->fp_cctor_ = MyFirstFuseProject_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> MyFirstFuseProject_bundle::FuseLogo0df5df88_;
// }

} // ::g
