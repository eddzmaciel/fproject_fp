// This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.33.1\Source\Uno\IO\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
class CppXliFileSystemEnumerator;
namespace g{namespace Uno{namespace IO{struct FileSystemEnumeratorImpl;}}}

namespace g{
namespace Uno{
namespace IO{

// internal static class FileSystemEnumeratorImpl :1500
// {
uClassType* FileSystemEnumeratorImpl_typeof();
void FileSystemEnumeratorImpl__Dispose_fn(::CppXliFileSystemEnumerator** handle);
void FileSystemEnumeratorImpl__GetName_fn(::CppXliFileSystemEnumerator** handle, uString** __retval);
void FileSystemEnumeratorImpl__IsDirectory_fn(::CppXliFileSystemEnumerator** handle, bool* __retval);
void FileSystemEnumeratorImpl__MoveNext_fn(::CppXliFileSystemEnumerator** handle, bool* __retval);

struct FileSystemEnumeratorImpl : uObject
{
    static void Dispose(::CppXliFileSystemEnumerator* handle);
    static uString* GetName(::CppXliFileSystemEnumerator* handle);
    static bool IsDirectory(::CppXliFileSystemEnumerator* handle);
    static bool MoveNext(::CppXliFileSystemEnumerator* handle);
};
// }

}}} // ::g::Uno::IO
