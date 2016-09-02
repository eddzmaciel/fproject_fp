// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.FileSystem.FileSystemModule.h>
#include <Fuse.FileSystem.FileSystemOperations.Closure-2.h>
#include <Fuse.FileSystem.FileSystemOperations.Closure-3.h>
#include <Fuse.FileSystem.FileSystemOperations.h>
#include <Fuse.FileSystem.Nothing.h>
#include <Fuse.FileSystem.PathTools.h>
#include <Fuse.FileSystem.UnifiedPaths.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.NativeProperty-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Scripting.ValueConverter-2.h>
#include <jni.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Path.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.Resource.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[27];
static uType* TYPES[47];

namespace g{
namespace Fuse{
namespace FileSystem{

// C:\ProgramData\Uno\Packages\Fuse.FileSystem\0.33.5\$.uno
// --------------------------------------------------------

// private sealed class FileSystemOperations.Closure<T1, TResult> :730
// {
static void FileSystemOperations__Closure_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Fuse::FileSystem::FileSystemOperations__Closure, _del), 0);
}

uType* FileSystemOperations__Closure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(FileSystemOperations__Closure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.FileSystemOperations.Closure`2", options);
    type->fp_build_ = FileSystemOperations__Closure_build;
    return type;
}

// public Closure(Uno.Func<T1, TResult> del, T1 arg1) :735
void FileSystemOperations__Closure__ctor__fn(FileSystemOperations__Closure* __this, uDelegate* del, void* arg1)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.FileSystem.FileSystemOperations.Closure`2", ".ctor(Uno.Func<T1, TResult>,T1)");
    __this->_del = del;
    __this->_arg1() = arg1;
}

// public TResult Invoke() :741
void FileSystemOperations__Closure__Invoke_fn(FileSystemOperations__Closure* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(1),
    };
    uStackFrame __("Fuse.FileSystem.FileSystemOperations.Closure`2", "Invoke()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((uPtr(__this->_del)->Invoke(&ret2, 1, (void*)__this->_arg1()), ret2)), void();
}

// public Closure New(Uno.Func<T1, TResult> del, T1 arg1) :735
void FileSystemOperations__Closure__New1_fn(uType* __type, uDelegate* del, void* arg1, FileSystemOperations__Closure** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    FileSystemOperations__Closure* obj1 = (FileSystemOperations__Closure*)uNew(__type);
    FileSystemOperations__Closure__ctor__fn(obj1, del, arg1);
    return *__retval = obj1, void();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.FileSystem\0.33.5\$.uno
// --------------------------------------------------------

// private sealed class FileSystemOperations.Closure<T1, T2, TResult> :748
// {
static void FileSystemOperations__Closure1_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Func2_typeof()->MakeType(type->T(0), type->T(1), type->T(2)), offsetof(::g::Fuse::FileSystem::FileSystemOperations__Closure1, _del), 0);
}

uType* FileSystemOperations__Closure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 3;
    options.ObjectSize = sizeof(FileSystemOperations__Closure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.FileSystemOperations.Closure`3", options);
    type->fp_build_ = FileSystemOperations__Closure1_build;
    return type;
}

// public Closure(Uno.Func<T1, T2, TResult> del, T1 arg1, T2 arg2) :754
void FileSystemOperations__Closure1__ctor__fn(FileSystemOperations__Closure1* __this, uDelegate* del, void* arg1, void* arg2)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
    };
    uStackFrame __("Fuse.FileSystem.FileSystemOperations.Closure`3", ".ctor(Uno.Func<T1, T2, TResult>,T1,T2)");
    __this->_del = del;
    __this->_arg1() = arg1;
    __this->_arg2() = arg2;
}

// public TResult Invoke() :761
void FileSystemOperations__Closure1__Invoke_fn(FileSystemOperations__Closure1* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(2),
    };
    uStackFrame __("Fuse.FileSystem.FileSystemOperations.Closure`3", "Invoke()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((uPtr(__this->_del)->Invoke(&ret2, 2, (void*)__this->_arg1(), (void*)__this->_arg2()), ret2)), void();
}

// public Closure New(Uno.Func<T1, T2, TResult> del, T1 arg1, T2 arg2) :754
void FileSystemOperations__Closure1__New1_fn(uType* __type, uDelegate* del, void* arg1, void* arg2, FileSystemOperations__Closure1** __retval)
{
    uType* __types[] = {
        __type->T(0),
        __type->T(1),
    };
    FileSystemOperations__Closure1* obj1 = (FileSystemOperations__Closure1*)uNew(__type);
    FileSystemOperations__Closure1__ctor__fn(obj1, del, arg1, arg2);
    return *__retval = obj1, void();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.FileSystem\0.33.5\$.uno
// --------------------------------------------------------

// public sealed class FileSystemModule :44
// {
static void FileSystemModule_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FuseJS/FileSystem");
    ::STRINGS[1] = uString::Const("cacheDirectory");
    ::STRINGS[2] = uString::Const("dataDirectory");
    ::STRINGS[3] = uString::Const("createDirectory");
    ::STRINGS[4] = uString::Const("createDirectorySync");
    ::STRINGS[5] = uString::Const("delete");
    ::STRINGS[6] = uString::Const("deleteSync");
    ::STRINGS[7] = uString::Const("exists");
    ::STRINGS[8] = uString::Const("existsSync");
    ::STRINGS[9] = uString::Const("listDirectories");
    ::STRINGS[10] = uString::Const("listDirectoriesSync");
    ::STRINGS[11] = uString::Const("listEntries");
    ::STRINGS[12] = uString::Const("listEntriesSync");
    ::STRINGS[13] = uString::Const("listFiles");
    ::STRINGS[14] = uString::Const("listFilesSync");
    ::STRINGS[15] = uString::Const("readBufferFromFile");
    ::STRINGS[16] = uString::Const("readBufferFromFileSync");
    ::STRINGS[17] = uString::Const("readTextFromFile");
    ::STRINGS[18] = uString::Const("readTextFromFileSync");
    ::STRINGS[19] = uString::Const("writeBufferToFile");
    ::STRINGS[20] = uString::Const("writeBufferToFileSync");
    ::STRINGS[21] = uString::Const("writeTextToFile");
    ::STRINGS[22] = uString::Const("writeTextToFileSync");
    ::STRINGS[23] = uString::Const("args");
    ::STRINGS[24] = uString::Const("first argument path is required to be a string");
    ::STRINGS[25] = uString::Const("Second argument \"data\" is required to be an ArrayBuffer");
    ::STRINGS[26] = uString::Const("Second argument \"text\" is required to be a string");
    ::TYPES[0] = uObject_typeof();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[4] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[5] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof());
    ::TYPES[6] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[7] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[8] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[9] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof()->Array(), ::g::Fuse::Scripting::Array_typeof());
    ::TYPES[10] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof()->Array());
    ::TYPES[11] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Uno::String_typeof()->Array(), ::g::Fuse::Scripting::Array_typeof());
    ::TYPES[12] = FileSystemModule_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[13] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[14] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Byte_typeof()->Array());
    ::TYPES[15] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[16] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[18] = ::g::Uno::String_typeof();
    ::TYPES[19] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, uObject_typeof());
    ::TYPES[20] = ::g::Uno::Collections::EnumerableExtensions_typeof();
    ::TYPES[21] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[22] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof();
    ::TYPES[23] = FileSystemModule_typeof()->MakeMethod(1, ::g::Uno::Byte_typeof()->Array());
    ::TYPES[24] = FileSystemModule_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(5,
        ::g::Fuse::FileSystem::FileSystemOperations_typeof(), offsetof(::g::Fuse::FileSystem::FileSystemModule, _operations), 0,
        FileSystemModule_typeof(), (uintptr_t)&::g::Fuse::FileSystem::FileSystemModule::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("CreateDirectory", NULL, (void*)FileSystemModule__CreateDirectory_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof()), 1, uObject_typeof()->Array()),
        new uFunction("CreateDirectorySync", NULL, (void*)FileSystemModule__CreateDirectorySync_fn, 0, false, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)FileSystemModule__New2_fn, 0, true, FileSystemModule_typeof(), 0));
}

::g::Fuse::Scripting::NativeModule_type* FileSystemModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(FileSystemModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.FileSystem.FileSystemModule", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_build_ = FileSystemModule_build;
    type->fp_ctor_ = (void*)FileSystemModule__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public FileSystemModule() :49
void FileSystemModule__ctor_2_fn(FileSystemModule* __this)
{
    __this->ctor_2();
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> CreateDirectory(object[] args) :111
void FileSystemModule__CreateDirectory_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->CreateDirectory(args);
}

// public object CreateDirectorySync(Fuse.Scripting.Context context, object[] args) :128
void FileSystemModule__CreateDirectorySync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->CreateDirectorySync(context, args);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Delete(object[] args) :152
void FileSystemModule__Delete_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Delete(args);
}

// private object DeleteSync(Fuse.Scripting.Context context, object[] args) :171
void FileSystemModule__DeleteSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DeleteSync(context, args);
}

// private Uno.Threading.Future<bool> Exists(object[] args) :195
void FileSystemModule__Exists_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Exists(args);
}

// private object ExistsSync(Fuse.Scripting.Context context, object[] args) :212
void FileSystemModule__ExistsSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ExistsSync(context, args);
}

// private static T GetArg<T>(object[] args, int index, string error) :517
void FileSystemModule__GetArg_fn(uType* __type, uArray* args, int* index, uString* error, uObject** __retval)
{
    *__retval = FileSystemModule::GetArg(__type, args, *index, error);
}

// private static string GetPathFromArgs(object[] args) :532
void FileSystemModule__GetPathFromArgs_fn(uArray* args, uString** __retval)
{
    *__retval = FileSystemModule::GetPathFromArgs(args);
}

// private Uno.Threading.Future<string[]> ListDirectories(object[] args) :234
void FileSystemModule__ListDirectories_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListDirectories(args);
}

// private object ListDirectoriesSync(Fuse.Scripting.Context context, object[] args) :252
void FileSystemModule__ListDirectoriesSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ListDirectoriesSync(context, args);
}

// private Uno.Threading.Future<string[]> ListEntries(object[] args) :274
void FileSystemModule__ListEntries_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListEntries(args);
}

// private object ListEntriesSync(Fuse.Scripting.Context context, object[] args) :292
void FileSystemModule__ListEntriesSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ListEntriesSync(context, args);
}

// private Uno.Threading.Future<string[]> ListFiles(object[] args) :314
void FileSystemModule__ListFiles_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListFiles(args);
}

// private object ListFilesSync(Fuse.Scripting.Context context, object[] args) :332
void FileSystemModule__ListFilesSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ListFilesSync(context, args);
}

// public FileSystemModule New() :49
void FileSystemModule__New2_fn(FileSystemModule** __retval)
{
    *__retval = FileSystemModule::New2();
}

// private Uno.Threading.Future<byte[]> ReadBufferFromFile(object[] args) :354
void FileSystemModule__ReadBufferFromFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ReadBufferFromFile(args);
}

// private object ReadBufferFromFileSync(Fuse.Scripting.Context context, object[] args) :371
void FileSystemModule__ReadBufferFromFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ReadBufferFromFileSync(context, args);
}

// private Uno.Threading.Future<string> ReadTextFromFile(object[] args) :393
void FileSystemModule__ReadTextFromFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ReadTextFromFile(args);
}

// private object ReadTextFromFileSync(Fuse.Scripting.Context context, object[] args) :411
void FileSystemModule__ReadTextFromFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ReadTextFromFileSync(context, args);
}

// private static Fuse.Scripting.Array ToScriptingArray<T>(Fuse.Scripting.Context context, T[] sourceArray) :546
void FileSystemModule__ToScriptingArray_fn(uType* __type, ::g::Fuse::Scripting::Context* context, uArray* sourceArray, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = FileSystemModule::ToScriptingArray(__type, context, sourceArray);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteBufferToFile(object[] args) :438
void FileSystemModule__WriteBufferToFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->WriteBufferToFile(args);
}

// private object WriteBufferToFileSync(Fuse.Scripting.Context context, object[] args) :462
void FileSystemModule__WriteBufferToFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->WriteBufferToFileSync(context, args);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteTextToFile(object[] args) :488
void FileSystemModule__WriteTextToFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->WriteTextToFile(args);
}

// private object WriteTextToFileSync(Fuse.Scripting.Context context, object[] args) :508
void FileSystemModule__WriteTextToFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->WriteTextToFileSync(context, args);
}

uSStrong<FileSystemModule*> FileSystemModule::_instance_;

// public FileSystemModule() [instance] :49
void FileSystemModule::ctor_2()
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", ".ctor()");
    _operations = ::g::Fuse::FileSystem::FileSystemOperations::New1();
    ctor_1();

    if (FileSystemModule::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(FileSystemModule::_instance_ = this, ::STRINGS[0/*"FuseJS/File...*/]);
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[2/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[1/*"cacheDirect...*/], uDelegate::New(::TYPES[3/*Uno.Func<string>*/], (void*)::g::Fuse::FileSystem::UnifiedPaths__GetCacheDirectory_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[2/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[2/*"dataDirectory"*/], uDelegate::New(::TYPES[3/*Uno.Func<string>*/], (void*)::g::Fuse::FileSystem::UnifiedPaths__GetDataDirectory_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[4/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[3/*"createDirec...*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__CreateDirectory_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[4/*"createDirec...*/], uDelegate::New(::TYPES[6/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__CreateDirectorySync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[4/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[5/*"delete"*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__Delete_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[6/*"deleteSync"*/], uDelegate::New(::TYPES[6/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__DeleteSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<bool, bool>*/], ::STRINGS[7/*"exists"*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<bool>*/], (void*)FileSystemModule__Exists_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[8/*"existsSync"*/], uDelegate::New(::TYPES[6/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ExistsSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[9/*Fuse.Scripting.NativePromise<string[], Fuse.Scripting.Array>*/], ::STRINGS[9/*"listDirecto...*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.FutureFactory<string[]>*/], (void*)FileSystemModule__ListDirectories_fn, this), uDelegate::New(::TYPES[11/*Fuse.Scripting.ResultConverter<string[], Fuse.Scripting.Array>*/], (void*)FileSystemModule__ToScriptingArray_fn, NULL, ::TYPES[12/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/])));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[10/*"listDirecto...*/], uDelegate::New(::TYPES[6/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ListDirectoriesSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[9/*Fuse.Scripting.NativePromise<string[], Fuse.Scripting.Array>*/], ::STRINGS[11/*"listEntries"*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.FutureFactory<string[]>*/], (void*)FileSystemModule__ListEntries_fn, this), uDelegate::New(::TYPES[11/*Fuse.Scripting.ResultConverter<string[], Fuse.Scripting.Array>*/], (void*)FileSystemModule__ToScriptingArray_fn, NULL, ::TYPES[12/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/])));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[12/*"listEntries...*/], uDelegate::New(::TYPES[6/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ListEntriesSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[9/*Fuse.Scripting.NativePromise<string[], Fuse.Scripting.Array>*/], ::STRINGS[13/*"listFiles"*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.FutureFactory<string[]>*/], (void*)FileSystemModule__ListFiles_fn, this), uDelegate::New(::TYPES[11/*Fuse.Scripting.ResultConverter<string[], Fuse.Scripting.Array>*/], (void*)FileSystemModule__ToScriptingArray_fn, NULL, ::TYPES[12/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/])));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[14/*"listFilesSync"*/], uDelegate::New(::TYPES[6/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ListFilesSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[13/*Fuse.Scripting.NativePromise<byte[], Fuse.Scripting.Object>*/], ::STRINGS[15/*"readBufferF...*/], uDelegate::New(::TYPES[14/*Fuse.Scripting.FutureFactory<byte[]>*/], (void*)FileSystemModule__ReadBufferFromFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[16/*"readBufferF...*/], uDelegate::New(::TYPES[6/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ReadBufferFromFileSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[15/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[17/*"readTextFro...*/], uDelegate::New(::TYPES[16/*Fuse.Scripting.FutureFactory<string>*/], (void*)FileSystemModule__ReadTextFromFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[18/*"readTextFro...*/], uDelegate::New(::TYPES[6/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ReadTextFromFileSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[4/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[19/*"writeBuffer...*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__WriteBufferToFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[20/*"writeBuffer...*/], uDelegate::New(::TYPES[6/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__WriteBufferToFileSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[4/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[21/*"writeTextTo...*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__WriteTextToFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[22/*"writeTextTo...*/], uDelegate::New(::TYPES[6/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__WriteTextToFileSync_fn, this)));
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> CreateDirectory(object[] args) [instance] :111
::g::Uno::Threading::Future1* FileSystemModule::CreateDirectory(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "CreateDirectory(object[])");
    return uPtr(_operations)->CreateDirectory(FileSystemModule::GetPathFromArgs(args));
}

// public object CreateDirectorySync(Fuse.Scripting.Context context, object[] args) [instance] :128
uObject* FileSystemModule::CreateDirectorySync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "CreateDirectorySync(Fuse.Scripting.Context,object[])");
    uPtr(_operations)->CreateDirectorySync(FileSystemModule::GetPathFromArgs(args));
    return NULL;
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Delete(object[] args) [instance] :152
::g::Uno::Threading::Future1* FileSystemModule::Delete(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "Delete(object[])");
    bool recursive = ((uPtr(args)->Length() > 1) && uIs((uObject*)uPtr(args)->Strong<uObject*>(1), ::TYPES[17/*bool*/])) ? uUnbox<bool>(::TYPES[17/*bool*/], uPtr(args)->Strong<uObject*>(1)) : false;
    return uPtr(_operations)->Delete(FileSystemModule::GetPathFromArgs(args), recursive);
}

// private object DeleteSync(Fuse.Scripting.Context context, object[] args) [instance] :171
uObject* FileSystemModule::DeleteSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "DeleteSync(Fuse.Scripting.Context,object[])");
    bool recursive = ((uPtr(args)->Length() > 1) && uIs((uObject*)uPtr(args)->Strong<uObject*>(1), ::TYPES[17/*bool*/])) ? uUnbox<bool>(::TYPES[17/*bool*/], uPtr(args)->Strong<uObject*>(1)) : false;
    uPtr(_operations)->DeleteSync(FileSystemModule::GetPathFromArgs(args), recursive);
    return NULL;
}

// private Uno.Threading.Future<bool> Exists(object[] args) [instance] :195
::g::Uno::Threading::Future1* FileSystemModule::Exists(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "Exists(object[])");
    return uPtr(_operations)->Exists(FileSystemModule::GetPathFromArgs(args));
}

// private object ExistsSync(Fuse.Scripting.Context context, object[] args) [instance] :212
uObject* FileSystemModule::ExistsSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ExistsSync(Fuse.Scripting.Context,object[])");
    return uBox(::TYPES[17/*bool*/], uPtr(_operations)->ExistsSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<string[]> ListDirectories(object[] args) [instance] :234
::g::Uno::Threading::Future1* FileSystemModule::ListDirectories(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ListDirectories(object[])");
    return uPtr(_operations)->ListDirectories(FileSystemModule::GetPathFromArgs(args));
}

// private object ListDirectoriesSync(Fuse.Scripting.Context context, object[] args) [instance] :252
uObject* FileSystemModule::ListDirectoriesSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ListDirectoriesSync(Fuse.Scripting.Context,object[])");
    return FileSystemModule::ToScriptingArray(::TYPES[12/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/], context, uPtr(_operations)->ListDirectoriesSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<string[]> ListEntries(object[] args) [instance] :274
::g::Uno::Threading::Future1* FileSystemModule::ListEntries(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ListEntries(object[])");
    return uPtr(_operations)->ListEntries(FileSystemModule::GetPathFromArgs(args));
}

// private object ListEntriesSync(Fuse.Scripting.Context context, object[] args) [instance] :292
uObject* FileSystemModule::ListEntriesSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ListEntriesSync(Fuse.Scripting.Context,object[])");
    return FileSystemModule::ToScriptingArray(::TYPES[12/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/], context, uPtr(_operations)->ListEntriesSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<string[]> ListFiles(object[] args) [instance] :314
::g::Uno::Threading::Future1* FileSystemModule::ListFiles(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ListFiles(object[])");
    return uPtr(_operations)->ListFiles(FileSystemModule::GetPathFromArgs(args));
}

// private object ListFilesSync(Fuse.Scripting.Context context, object[] args) [instance] :332
uObject* FileSystemModule::ListFilesSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ListFilesSync(Fuse.Scripting.Context,object[])");
    return FileSystemModule::ToScriptingArray(::TYPES[12/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/], context, uPtr(_operations)->ListFilesSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<byte[]> ReadBufferFromFile(object[] args) [instance] :354
::g::Uno::Threading::Future1* FileSystemModule::ReadBufferFromFile(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ReadBufferFromFile(object[])");
    return uPtr(_operations)->ReadBufferFromFile(FileSystemModule::GetPathFromArgs(args));
}

// private object ReadBufferFromFileSync(Fuse.Scripting.Context context, object[] args) [instance] :371
uObject* FileSystemModule::ReadBufferFromFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ReadBufferFromFileSync(Fuse.Scripting.Context,object[])");
    return uPtr(_operations)->ReadBufferFromFileSync(FileSystemModule::GetPathFromArgs(args));
}

// private Uno.Threading.Future<string> ReadTextFromFile(object[] args) [instance] :393
::g::Uno::Threading::Future1* FileSystemModule::ReadTextFromFile(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ReadTextFromFile(object[])");
    return uPtr(_operations)->ReadTextFromFile(FileSystemModule::GetPathFromArgs(args));
}

// private object ReadTextFromFileSync(Fuse.Scripting.Context context, object[] args) [instance] :411
uObject* FileSystemModule::ReadTextFromFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ReadTextFromFileSync(Fuse.Scripting.Context,object[])");
    return uPtr(_operations)->ReadTextFromFileSync(FileSystemModule::GetPathFromArgs(args));
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteBufferToFile(object[] args) [instance] :438
::g::Uno::Threading::Future1* FileSystemModule::WriteBufferToFile(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "WriteBufferToFile(object[])");
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uArray* data = (uArray*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<byte[]>*/], args, 1, ::STRINGS[25/*"Second argu...*/]);
    return uPtr(_operations)->WriteBufferToFile(path, data);
}

// private object WriteBufferToFileSync(Fuse.Scripting.Context context, object[] args) [instance] :462
uObject* FileSystemModule::WriteBufferToFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "WriteBufferToFileSync(Fuse.Scripting.Context,object[])");
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uArray* data = (uArray*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<byte[]>*/], args, 1, ::STRINGS[25/*"Second argu...*/]);
    uPtr(_operations)->WriteBufferToFileSync(path, data);
    return NULL;
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteTextToFile(object[] args) [instance] :488
::g::Uno::Threading::Future1* FileSystemModule::WriteTextToFile(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "WriteTextToFile(object[])");
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uString* text = (uString*)FileSystemModule::GetArg(::TYPES[24/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[26/*"Second argu...*/]);
    return uPtr(_operations)->WriteTextToFile(path, text);
}

// private object WriteTextToFileSync(Fuse.Scripting.Context context, object[] args) [instance] :508
uObject* FileSystemModule::WriteTextToFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "WriteTextToFileSync(Fuse.Scripting.Context,object[])");
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uString* text = (uString*)FileSystemModule::GetArg(::TYPES[24/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[26/*"Second argu...*/]);
    uPtr(_operations)->WriteTextToFileSync(path, text);
    return NULL;
}

// private static T GetArg<T>(object[] args, int index, string error) [static] :517
uObject* FileSystemModule::GetArg(uType* __type, uArray* args, int index, uString* error)
{
    uType* __types[] = {
        __type->U(0),
    };
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "GetArg`1(object[],int,string)");

    if (args == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[23/*"args"*/]));

    uObject* val = (uPtr(args)->Length() > index) ? uAs<uObject*>(uPtr(args)->Strong<uObject*>(index), __types[0]) : NULL;

    if (val == NULL)
        U_THROW(::g::Fuse::Scripting::Error::New4(error));

    return val;
}

// private static string GetPathFromArgs(object[] args) [static] :532
uString* FileSystemModule::GetPathFromArgs(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "GetPathFromArgs(object[])");

    if (args == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[23/*"args"*/]));

    uString* filename = (uPtr(args)->Length() > 0) ? uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[18/*string*/]) : NULL;

    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[24/*"first argum...*/]));

    return filename;
}

// public FileSystemModule New() [static] :49
FileSystemModule* FileSystemModule::New2()
{
    FileSystemModule* obj1 = (FileSystemModule*)uNew(FileSystemModule_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static Fuse.Scripting.Array ToScriptingArray<T>(Fuse.Scripting.Context context, T[] sourceArray) [static] :546
::g::Fuse::Scripting::Array* FileSystemModule::ToScriptingArray(uType* __type, ::g::Fuse::Scripting::Context* context, uArray* sourceArray)
{
    uType* __types[] = {
        ::TYPES[20/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(2, __type->U(0), ::TYPES[0/*object*/]),
        __type->U(0),
        ::TYPES[21/*Uno.Collections.IEnumerable`1*/]->MakeType(__type->U(0)),
        ::TYPES[22/*Uno.Runtime.Implementation.Internal.ArrayEnumerable`1*/]->MakeType(__type->U(0)),
    };
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ToScriptingArray`1(Fuse.Scripting.Context,T[])");
    uArray* convertedArray = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[19/*Uno.Collections.EnumerableExtensions.ToArray<object>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::OfType(__types[0], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(__types[3], sourceArray))));
    return uPtr(context)->NewArray(convertedArray);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.FileSystem\0.33.5\$.uno
// --------------------------------------------------------

// public sealed class FileSystemOperations :564
// {
static void FileSystemOperations_build(uType* type)
{
    ::TYPES[25] = FileSystemOperations_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Fuse::FileSystem::Nothing_typeof());
    ::TYPES[26] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::FileSystem::Nothing_typeof());
    ::TYPES[27] = FileSystemOperations_typeof()->MakeMethod(3, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), ::g::Fuse::FileSystem::Nothing_typeof());
    ::TYPES[28] = ::g::Uno::Func2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), ::g::Fuse::FileSystem::Nothing_typeof());
    ::TYPES[29] = FileSystemOperations_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[30] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[31] = FileSystemOperations_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()->Array());
    ::TYPES[32] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof()->Array());
    ::TYPES[33] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[34] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[35] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[36] = FileSystemOperations_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array());
    ::TYPES[37] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array());
    ::TYPES[38] = FileSystemOperations_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[39] = ::g::Uno::Threading::Promise_typeof();
    ::TYPES[40] = ::g::Uno::Func_typeof();
    ::TYPES[41] = FileSystemOperations__Closure_typeof();
    ::TYPES[42] = FileSystemOperations__Closure1_typeof();
    ::TYPES[43] = FileSystemOperations_typeof()->MakeMethod(3, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array(), ::g::Fuse::FileSystem::Nothing_typeof());
    ::TYPES[44] = ::g::Uno::Func2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array(), ::g::Fuse::FileSystem::Nothing_typeof());
    ::TYPES[45] = FileSystemOperations_typeof()->MakeMethod(3, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Fuse::FileSystem::Nothing_typeof());
    ::TYPES[46] = ::g::Uno::Func2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Fuse::FileSystem::Nothing_typeof());
    type->SetFields(0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(::g::Fuse::FileSystem::FileSystemOperations, _dispatcher), 0);
    type->Reflection.SetFunctions(22,
        new uFunction("CreateDirectory", NULL, (void*)FileSystemOperations__CreateDirectory_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof()), 1, ::g::Uno::String_typeof()),
        new uFunction("CreateDirectorySync", NULL, (void*)FileSystemOperations__CreateDirectorySync_fn, 0, false, ::g::Fuse::FileSystem::Nothing_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Delete", NULL, (void*)FileSystemOperations__Delete_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof()), 2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("DeleteSync", NULL, (void*)FileSystemOperations__DeleteSync_fn, 0, false, ::g::Fuse::FileSystem::Nothing_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Exists", NULL, (void*)FileSystemOperations__Exists_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::Bool_typeof()), 1, ::g::Uno::String_typeof()),
        new uFunction("ExistsSync", NULL, (void*)FileSystemOperations__ExistsSync_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("ListDirectories", NULL, (void*)FileSystemOperations__ListDirectories_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::String_typeof()->Array()), 1, ::g::Uno::String_typeof()),
        new uFunction("ListDirectoriesSync", NULL, (void*)FileSystemOperations__ListDirectoriesSync_fn, 0, false, ::g::Uno::String_typeof()->Array(), 1, ::g::Uno::String_typeof()),
        new uFunction("ListEntries", NULL, (void*)FileSystemOperations__ListEntries_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::String_typeof()->Array()), 1, ::g::Uno::String_typeof()),
        new uFunction("ListEntriesSync", NULL, (void*)FileSystemOperations__ListEntriesSync_fn, 0, false, ::g::Uno::String_typeof()->Array(), 1, ::g::Uno::String_typeof()),
        new uFunction("ListFiles", NULL, (void*)FileSystemOperations__ListFiles_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::String_typeof()->Array()), 1, ::g::Uno::String_typeof()),
        new uFunction("ListFilesSync", NULL, (void*)FileSystemOperations__ListFilesSync_fn, 0, false, ::g::Uno::String_typeof()->Array(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)FileSystemOperations__New1_fn, 0, true, FileSystemOperations_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)FileSystemOperations__New2_fn, 0, true, FileSystemOperations_typeof(), 1, ::g::Uno::Threading::IDispatcher_typeof()),
        new uFunction("ReadBufferFromFile", NULL, (void*)FileSystemOperations__ReadBufferFromFile_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::Byte_typeof()->Array()), 1, ::g::Uno::String_typeof()),
        new uFunction("ReadBufferFromFileSync", NULL, (void*)FileSystemOperations__ReadBufferFromFileSync_fn, 0, false, ::g::Uno::Byte_typeof()->Array(), 1, ::g::Uno::String_typeof()),
        new uFunction("ReadTextFromFile", NULL, (void*)FileSystemOperations__ReadTextFromFile_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::String_typeof()), 1, ::g::Uno::String_typeof()),
        new uFunction("ReadTextFromFileSync", NULL, (void*)FileSystemOperations__ReadTextFromFileSync_fn, 0, false, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("WriteBufferToFile", NULL, (void*)FileSystemOperations__WriteBufferToFile_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof()), 2, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array()),
        new uFunction("WriteBufferToFileSync", NULL, (void*)FileSystemOperations__WriteBufferToFileSync_fn, 0, false, ::g::Fuse::FileSystem::Nothing_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array()),
        new uFunction("WriteTextToFile", NULL, (void*)FileSystemOperations__WriteTextToFile_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof()), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("WriteTextToFileSync", NULL, (void*)FileSystemOperations__WriteTextToFileSync_fn, 0, false, ::g::Fuse::FileSystem::Nothing_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

uType* FileSystemOperations_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.MethodTypeCount = 3;
    options.ObjectSize = sizeof(FileSystemOperations);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.FileSystemOperations", options);
    type->fp_build_ = FileSystemOperations_build;
    type->fp_ctor_ = (void*)FileSystemOperations__New1_fn;
    return type;
}

// public FileSystemOperations() :569
void FileSystemOperations__ctor__fn(FileSystemOperations* __this)
{
    __this->ctor_();
}

// public FileSystemOperations(Uno.Threading.IDispatcher dispatcher) :572
void FileSystemOperations__ctor_1_fn(FileSystemOperations* __this, uObject* dispatcher)
{
    __this->ctor_1(dispatcher);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> CreateDirectory(string path) :578
void FileSystemOperations__CreateDirectory_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->CreateDirectory(path);
}

// public Fuse.FileSystem.Nothing CreateDirectorySync(string path) :584
void FileSystemOperations__CreateDirectorySync_fn(FileSystemOperations* __this, uString* path, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->CreateDirectorySync(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Delete(string path, bool recursive) :591
void FileSystemOperations__Delete_fn(FileSystemOperations* __this, uString* path, bool* recursive, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Delete(path, *recursive);
}

// public Fuse.FileSystem.Nothing DeleteSync(string path, bool recursive) :597
void FileSystemOperations__DeleteSync_fn(FileSystemOperations* __this, uString* path, bool* recursive, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->DeleteSync(path, *recursive);
}

// public Uno.Threading.Future<bool> Exists(string path) :608
void FileSystemOperations__Exists_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Exists(path);
}

// public bool ExistsSync(string path) :614
void FileSystemOperations__ExistsSync_fn(FileSystemOperations* __this, uString* path, bool* __retval)
{
    *__retval = __this->ExistsSync(path);
}

// public Uno.Threading.Future<string[]> ListDirectories(string path) :622
void FileSystemOperations__ListDirectories_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListDirectories(path);
}

// public string[] ListDirectoriesSync(string path) :628
void FileSystemOperations__ListDirectoriesSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval)
{
    *__retval = __this->ListDirectoriesSync(path);
}

// public Uno.Threading.Future<string[]> ListEntries(string path) :634
void FileSystemOperations__ListEntries_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListEntries(path);
}

// public string[] ListEntriesSync(string path) :640
void FileSystemOperations__ListEntriesSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval)
{
    *__retval = __this->ListEntriesSync(path);
}

// public Uno.Threading.Future<string[]> ListFiles(string path) :646
void FileSystemOperations__ListFiles_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListFiles(path);
}

// public string[] ListFilesSync(string path) :652
void FileSystemOperations__ListFilesSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval)
{
    *__retval = __this->ListFilesSync(path);
}

// public FileSystemOperations New() :569
void FileSystemOperations__New1_fn(FileSystemOperations** __retval)
{
    *__retval = FileSystemOperations::New1();
}

// public FileSystemOperations New(Uno.Threading.IDispatcher dispatcher) :572
void FileSystemOperations__New2_fn(uObject* dispatcher, FileSystemOperations** __retval)
{
    *__retval = FileSystemOperations::New2(dispatcher);
}

// public Uno.Threading.Future<byte[]> ReadBufferFromFile(string path) :658
void FileSystemOperations__ReadBufferFromFile_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ReadBufferFromFile(path);
}

// public byte[] ReadBufferFromFileSync(string path) :664
void FileSystemOperations__ReadBufferFromFileSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval)
{
    *__retval = __this->ReadBufferFromFileSync(path);
}

// public Uno.Threading.Future<string> ReadTextFromFile(string path) :671
void FileSystemOperations__ReadTextFromFile_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ReadTextFromFile(path);
}

// public string ReadTextFromFileSync(string path) :677
void FileSystemOperations__ReadTextFromFileSync_fn(FileSystemOperations* __this, uString* path, uString** __retval)
{
    *__retval = __this->ReadTextFromFileSync(path);
}

// private Uno.Threading.Future<T> RunTask<T>(Uno.Func<T> del) :710
void FileSystemOperations__RunTask_fn(FileSystemOperations* __this, uType* __type, uDelegate* del, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->RunTask(__type, del);
}

// private Uno.Threading.Future<TResult> RunTask<T1, TResult>(Uno.Func<T1, TResult> del, T1 arg1) :718
void FileSystemOperations__RunTask1_fn(FileSystemOperations* __this, uType* __type, uDelegate* del, void* arg1, ::g::Uno::Threading::Future1** __retval)
{
    uType* __types[] = {
        __type->U(0),
        FileSystemOperations_typeof()->MakeMethod(1, __type->U(1)),
        __type->U(1),
        ::TYPES[40/*Uno.Func`1*/]->MakeType(__type->U(1)),
        ::TYPES[41/*Fuse.FileSystem.FileSystemOperations.Closure`2*/]->MakeType(__type->U(0), __type->U(1)),
    };
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "RunTask`2(Uno.Func<T1, TResult>,T1)");
    FileSystemOperations__Closure* ret11;
    return *__retval = (::g::Uno::Threading::Future1*)__this->RunTask(__types[1], uDelegate::New(__types[3], (void*)FileSystemOperations__Closure__Invoke_fn, (FileSystemOperations__Closure__New1_fn(__types[4], del, arg1, &ret11), ret11))), void();
}

// private Uno.Threading.Future<TResult> RunTask<T1, T2, TResult>(Uno.Func<T1, T2, TResult> del, T1 arg1, T2 arg2) :724
void FileSystemOperations__RunTask2_fn(FileSystemOperations* __this, uType* __type, uDelegate* del, void* arg1, void* arg2, ::g::Uno::Threading::Future1** __retval)
{
    uType* __types[] = {
        __type->U(0),
        __type->U(1),
        FileSystemOperations_typeof()->MakeMethod(1, __type->U(2)),
        __type->U(2),
        ::TYPES[40/*Uno.Func`1*/]->MakeType(__type->U(2)),
        ::TYPES[42/*Fuse.FileSystem.FileSystemOperations.Closure`3*/]->MakeType(__type->U(0), __type->U(1), __type->U(2)),
    };
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "RunTask`3(Uno.Func<T1, T2, TResult>,T1,T2)");
    FileSystemOperations__Closure1* ret12;
    return *__retval = (::g::Uno::Threading::Future1*)__this->RunTask(__types[2], uDelegate::New(__types[4], (void*)FileSystemOperations__Closure1__Invoke_fn, (FileSystemOperations__Closure1__New1_fn(__types[5], del, arg1, arg2, &ret12), ret12))), void();
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteBufferToFile(string path, byte[] data) :684
void FileSystemOperations__WriteBufferToFile_fn(FileSystemOperations* __this, uString* path, uArray* data, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->WriteBufferToFile(path, data);
}

// public Fuse.FileSystem.Nothing WriteBufferToFileSync(string path, byte[] data) :690
void FileSystemOperations__WriteBufferToFileSync_fn(FileSystemOperations* __this, uString* path, uArray* data, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->WriteBufferToFileSync(path, data);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteTextToFile(string path, string text) :697
void FileSystemOperations__WriteTextToFile_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->WriteTextToFile(path, text);
}

// public Fuse.FileSystem.Nothing WriteTextToFileSync(string path, string text) :703
void FileSystemOperations__WriteTextToFileSync_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->WriteTextToFileSync(path, text);
}

// public FileSystemOperations() [instance] :569
void FileSystemOperations::ctor_()
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", ".ctor()");
    ctor_1(NULL);
}

// public FileSystemOperations(Uno.Threading.IDispatcher dispatcher) [instance] :572
void FileSystemOperations::ctor_1(uObject* dispatcher)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", ".ctor(Uno.Threading.IDispatcher)");
    _dispatcher = dispatcher;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> CreateDirectory(string path) [instance] :578
::g::Uno::Threading::Future1* FileSystemOperations::CreateDirectory(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "CreateDirectory(string)");
    ::g::Uno::Threading::Future1* ret3;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[25/*Fuse.FileSystem.FileSystemOperations.RunTask<string, Fuse.FileSystem.Nothing>*/], uDelegate::New(::TYPES[26/*Uno.Func<string, Fuse.FileSystem.Nothing>*/], (void*)FileSystemOperations__CreateDirectorySync_fn, this), path, &ret3), ret3);
}

// public Fuse.FileSystem.Nothing CreateDirectorySync(string path) [instance] :584
::g::Fuse::FileSystem::Nothing* FileSystemOperations::CreateDirectorySync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "CreateDirectorySync(string)");
    ::g::Uno::IO::Directory::CreateDirectory(path);
    return NULL;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Delete(string path, bool recursive) [instance] :591
::g::Uno::Threading::Future1* FileSystemOperations::Delete(uString* path, bool recursive)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "Delete(string,bool)");
    ::g::Uno::Threading::Future1* ret4;
    return (FileSystemOperations__RunTask2_fn(this, ::TYPES[27/*Fuse.FileSystem.FileSystemOperations.RunTask<string, bool, Fuse.FileSystem.Nothing>*/], uDelegate::New(::TYPES[28/*Uno.Func<string, bool, Fuse.FileSystem.Nothing>*/], (void*)FileSystemOperations__DeleteSync_fn, this), path, uCRef(recursive), &ret4), ret4);
}

// public Fuse.FileSystem.Nothing DeleteSync(string path, bool recursive) [instance] :597
::g::Fuse::FileSystem::Nothing* FileSystemOperations::DeleteSync(uString* path, bool recursive)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "DeleteSync(string,bool)");

    if (::g::Uno::IO::Directory::Exists(path))
        ::g::Uno::IO::Directory::Delete(path, recursive);
    else
        ::g::Uno::IO::File::Delete(path);

    return NULL;
}

// public Uno.Threading.Future<bool> Exists(string path) [instance] :608
::g::Uno::Threading::Future1* FileSystemOperations::Exists(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "Exists(string)");
    ::g::Uno::Threading::Future1* ret5;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[29/*Fuse.FileSystem.FileSystemOperations.RunTask<string, bool>*/], uDelegate::New(::TYPES[30/*Uno.Func<string, bool>*/], (void*)FileSystemOperations__ExistsSync_fn, this), path, &ret5), ret5);
}

// public bool ExistsSync(string path) [instance] :614
bool FileSystemOperations::ExistsSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ExistsSync(string)");
    return ::g::Uno::IO::File::Exists(path) || ::g::Uno::IO::Directory::Exists(path);
}

// public Uno.Threading.Future<string[]> ListDirectories(string path) [instance] :622
::g::Uno::Threading::Future1* FileSystemOperations::ListDirectories(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ListDirectories(string)");
    ::g::Uno::Threading::Future1* ret6;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[31/*Fuse.FileSystem.FileSystemOperations.RunTask<string, string[]>*/], uDelegate::New(::TYPES[32/*Uno.Func<string, string[]>*/], (void*)FileSystemOperations__ListDirectoriesSync_fn, this), path, &ret6), ret6);
}

// public string[] ListDirectoriesSync(string path) [instance] :628
uArray* FileSystemOperations::ListDirectoriesSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ListDirectoriesSync(string)");
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[33/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[34/*Uno.Collections.EnumerableExtensions.Select<string, string>*/], ::g::Uno::IO::Directory::EnumerateDirectories(path), uDelegate::New(::TYPES[35/*Uno.Func<string, string>*/], (void*)::g::Fuse::FileSystem::PathTools__NormalizePath_fn)));
}

// public Uno.Threading.Future<string[]> ListEntries(string path) [instance] :634
::g::Uno::Threading::Future1* FileSystemOperations::ListEntries(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ListEntries(string)");
    ::g::Uno::Threading::Future1* ret7;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[31/*Fuse.FileSystem.FileSystemOperations.RunTask<string, string[]>*/], uDelegate::New(::TYPES[32/*Uno.Func<string, string[]>*/], (void*)FileSystemOperations__ListEntriesSync_fn, this), path, &ret7), ret7);
}

// public string[] ListEntriesSync(string path) [instance] :640
uArray* FileSystemOperations::ListEntriesSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ListEntriesSync(string)");
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[33/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[34/*Uno.Collections.EnumerableExtensions.Select<string, string>*/], ::g::Uno::IO::Directory::EnumerateFileSystemEntries(path), uDelegate::New(::TYPES[35/*Uno.Func<string, string>*/], (void*)::g::Fuse::FileSystem::PathTools__NormalizePath_fn)));
}

// public Uno.Threading.Future<string[]> ListFiles(string path) [instance] :646
::g::Uno::Threading::Future1* FileSystemOperations::ListFiles(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ListFiles(string)");
    ::g::Uno::Threading::Future1* ret8;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[31/*Fuse.FileSystem.FileSystemOperations.RunTask<string, string[]>*/], uDelegate::New(::TYPES[32/*Uno.Func<string, string[]>*/], (void*)FileSystemOperations__ListFilesSync_fn, this), path, &ret8), ret8);
}

// public string[] ListFilesSync(string path) [instance] :652
uArray* FileSystemOperations::ListFilesSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ListFilesSync(string)");
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[33/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[34/*Uno.Collections.EnumerableExtensions.Select<string, string>*/], ::g::Uno::IO::Directory::EnumerateFiles(path), uDelegate::New(::TYPES[35/*Uno.Func<string, string>*/], (void*)::g::Fuse::FileSystem::PathTools__NormalizePath_fn)));
}

// public Uno.Threading.Future<byte[]> ReadBufferFromFile(string path) [instance] :658
::g::Uno::Threading::Future1* FileSystemOperations::ReadBufferFromFile(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ReadBufferFromFile(string)");
    ::g::Uno::Threading::Future1* ret9;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[36/*Fuse.FileSystem.FileSystemOperations.RunTask<string, byte[]>*/], uDelegate::New(::TYPES[37/*Uno.Func<string, byte[]>*/], (void*)FileSystemOperations__ReadBufferFromFileSync_fn, this), path, &ret9), ret9);
}

// public byte[] ReadBufferFromFileSync(string path) [instance] :664
uArray* FileSystemOperations::ReadBufferFromFileSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ReadBufferFromFileSync(string)");
    return ::g::Uno::IO::File::ReadAllBytes(path);
}

// public Uno.Threading.Future<string> ReadTextFromFile(string path) [instance] :671
::g::Uno::Threading::Future1* FileSystemOperations::ReadTextFromFile(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ReadTextFromFile(string)");
    ::g::Uno::Threading::Future1* ret10;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[38/*Fuse.FileSystem.FileSystemOperations.RunTask<string, string>*/], uDelegate::New(::TYPES[35/*Uno.Func<string, string>*/], (void*)FileSystemOperations__ReadTextFromFileSync_fn, this), path, &ret10), ret10);
}

// public string ReadTextFromFileSync(string path) [instance] :677
uString* FileSystemOperations::ReadTextFromFileSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ReadTextFromFileSync(string)");
    return ::g::Uno::IO::File::ReadAllText(path);
}

// private Uno.Threading.Future<T> RunTask<T>(Uno.Func<T> del) [instance] :710
::g::Uno::Threading::Future1* FileSystemOperations::RunTask(uType* __type, uDelegate* del)
{
    uType* __types[] = {
        ::TYPES[39/*Uno.Threading.Promise`1*/]->MakeType(__type->U(0)),
        __type->U(0),
    };
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "RunTask`1(Uno.Func<T>)");

    if (_dispatcher == NULL)
        return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(__types[0], del);

    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run1(__types[0], _dispatcher, del);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteBufferToFile(string path, byte[] data) [instance] :684
::g::Uno::Threading::Future1* FileSystemOperations::WriteBufferToFile(uString* path, uArray* data)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "WriteBufferToFile(string,byte[])");
    ::g::Uno::Threading::Future1* ret13;
    return (FileSystemOperations__RunTask2_fn(this, ::TYPES[43/*Fuse.FileSystem.FileSystemOperations.RunTask<string, byte[], Fuse.FileSystem.Nothing>*/], uDelegate::New(::TYPES[44/*Uno.Func<string, byte[], Fuse.FileSystem.Nothing>*/], (void*)FileSystemOperations__WriteBufferToFileSync_fn, this), path, data, &ret13), ret13);
}

// public Fuse.FileSystem.Nothing WriteBufferToFileSync(string path, byte[] data) [instance] :690
::g::Fuse::FileSystem::Nothing* FileSystemOperations::WriteBufferToFileSync(uString* path, uArray* data)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "WriteBufferToFileSync(string,byte[])");
    ::g::Uno::IO::File::WriteAllBytes(path, data);
    return NULL;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteTextToFile(string path, string text) [instance] :697
::g::Uno::Threading::Future1* FileSystemOperations::WriteTextToFile(uString* path, uString* text)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "WriteTextToFile(string,string)");
    ::g::Uno::Threading::Future1* ret14;
    return (FileSystemOperations__RunTask2_fn(this, ::TYPES[45/*Fuse.FileSystem.FileSystemOperations.RunTask<string, string, Fuse.FileSystem.Nothing>*/], uDelegate::New(::TYPES[46/*Uno.Func<string, string, Fuse.FileSystem.Nothing>*/], (void*)FileSystemOperations__WriteTextToFileSync_fn, this), path, text, &ret14), ret14);
}

// public Fuse.FileSystem.Nothing WriteTextToFileSync(string path, string text) [instance] :703
::g::Fuse::FileSystem::Nothing* FileSystemOperations::WriteTextToFileSync(uString* path, uString* text)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "WriteTextToFileSync(string,string)");
    ::g::Uno::IO::File::WriteAllText(path, text);
    return NULL;
}

// public FileSystemOperations New() [static] :569
FileSystemOperations* FileSystemOperations::New1()
{
    FileSystemOperations* obj1 = (FileSystemOperations*)uNew(FileSystemOperations_typeof());
    obj1->ctor_();
    return obj1;
}

// public FileSystemOperations New(Uno.Threading.IDispatcher dispatcher) [static] :572
FileSystemOperations* FileSystemOperations::New2(uObject* dispatcher)
{
    FileSystemOperations* obj2 = (FileSystemOperations*)uNew(FileSystemOperations_typeof());
    obj2->ctor_1(dispatcher);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.FileSystem\0.33.5\$.uno
// --------------------------------------------------------

// public sealed class Nothing :775
// {
static void Nothing_build(uType* type)
{
}

uType* Nothing_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Nothing);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.Nothing", options);
    type->fp_build_ = Nothing_build;
    type->fp_ctor_ = (void*)Nothing__New1_fn;
    return type;
}

// private Nothing() :778
void Nothing__ctor__fn(Nothing* __this)
{
    __this->ctor_();
}

// private Nothing New() :778
void Nothing__New1_fn(Nothing** __retval)
{
    *__retval = Nothing::New1();
}

// private Nothing() [instance] :778
void Nothing::ctor_()
{
}

// private Nothing New() [static] :778
Nothing* Nothing::New1()
{
    Nothing* obj1 = (Nothing*)uNew(Nothing_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.FileSystem\0.33.5\$.uno
// --------------------------------------------------------

// internal static class PathTools :790
// {
static void PathTools_build(uType* type)
{
}

uClassType* PathTools_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.FileSystem.PathTools", options);
    type->fp_build_ = PathTools_build;
    return type;
}

// public static string NormalizePath(string path) :792
void PathTools__NormalizePath_fn(uString* path, uString** __retval)
{
    *__retval = PathTools::NormalizePath(path);
}

// public static string NormalizePath(string path) [static] :792
uString* PathTools::NormalizePath(uString* path)
{
    uStackFrame __("Fuse.FileSystem.PathTools", "NormalizePath(string)");

    if (::g::Uno::IO::Path::DirectorySeparatorChar() == '\\')
        return ::g::Uno::String::Replace(uPtr(path), '\\', '/');

    return path;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.FileSystem\0.33.5\$.uno
// --------------------------------------------------------

// internal static extern class UnifiedPaths :810
// {
static void UnifiedPaths_build(uType* type)
{
}

uClassType* UnifiedPaths_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.FileSystem.UnifiedPaths", options);
    type->fp_build_ = UnifiedPaths_build;
    return type;
}

// public static string GetCacheDirectory() :813
void UnifiedPaths__GetCacheDirectory_fn(uString** __retval)
{
    *__retval = UnifiedPaths::GetCacheDirectory();
}

// public static string GetDataDirectory() :820
void UnifiedPaths__GetDataDirectory_fn(uString** __retval)
{
    *__retval = UnifiedPaths::GetDataDirectory();
}

// public static string GetCacheDirectory() [static] :813
uString* UnifiedPaths::GetCacheDirectory()
{
    uStackFrame __("Fuse.FileSystem.UnifiedPaths", "GetCacheDirectory()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetCacheDirectory240", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static string GetDataDirectory() [static] :820
uString* UnifiedPaths::GetDataDirectory()
{
    uStackFrame __("Fuse.FileSystem.UnifiedPaths", "GetDataDirectory()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDataDirectory241", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}
// }

}}} // ::g::Fuse::FileSystem
