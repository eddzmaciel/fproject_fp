// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Reactive\0.33.5\Subscription\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct BindAttempt;}}}
namespace g{namespace Fuse{namespace Reactive{struct ContextBinding;}}}
namespace g{namespace Fuse{namespace Reactive{struct PathObserver;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class PathObserver :72
// {
struct PathObserver_type : uType
{
    ::g::Uno::IDisposable interface0;
};

PathObserver_type* PathObserver_typeof();
void PathObserver__ctor__fn(PathObserver* __this, ::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path);
void PathObserver__Dispose_fn(PathObserver* __this);
void PathObserver__New1_fn(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path, PathObserver** __retval);
void PathObserver__RestartBinding_fn(PathObserver* __this);

struct PathObserver : uObject
{
    uStrong< ::g::Fuse::Reactive::BindAttempt*> _bindAttempt;
    uStrong< ::g::Fuse::Reactive::ContextBinding*> Binding;
    uStrong< ::g::Fuse::Node*> Node;
    uStrong<uString*> Path;

    void ctor_(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path);
    void Dispose();
    void RestartBinding();
    static PathObserver* New1(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path);
};
// }

}}} // ::g::Fuse::Reactive
