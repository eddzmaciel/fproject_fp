// This file was generated based on C:\ProgramData\Uno\Packages\FuseCore\0.33.5\.uno\package.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLProgram;}}}}}}
namespace g{struct FuseCore_bundle;}

namespace g{

// public static generated class FuseCore_bundle :0
// {
uClassType* FuseCore_bundle_typeof();

struct FuseCore_bundle : uObject
{
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> DrawHelpers53a11bf4_;
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>& DrawHelpers53a11bf4() { return FuseCore_bundle_typeof()->Init(), DrawHelpers53a11bf4_; }
    static uSStrong< ::g::Uno::IO::BundleFile*> RobotoRegular36f9075e_;
    static uSStrong< ::g::Uno::IO::BundleFile*>& RobotoRegular36f9075e() { return FuseCore_bundle_typeof()->Init(), RobotoRegular36f9075e_; }
};
// }

} // ::g
