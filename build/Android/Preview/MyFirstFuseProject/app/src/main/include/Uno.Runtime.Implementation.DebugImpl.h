// This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.33.1\Source\Uno\Runtime\Implementation\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{struct DebugImpl;}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// internal static class DebugImpl :582
// {
uClassType* DebugImpl_typeof();
void DebugImpl__Log_fn(uString* message, int* type);

struct DebugImpl : uObject
{
    static void Log(uString* message, int type);
};
// }

}}}} // ::g::Uno::Runtime::Implementation
