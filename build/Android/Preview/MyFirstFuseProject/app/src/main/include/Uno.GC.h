// This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.33.1\Source\Uno\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct GC;}}

namespace g{
namespace Uno{

// public static class GC :3046
// {
uClassType* GC_typeof();
void GC__SuppressFinalize_fn(uObject* obj);

struct GC : uObject
{
    static void SuppressFinalize(uObject* obj);
};
// }

}} // ::g::Uno
