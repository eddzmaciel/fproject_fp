// This file was generated based on C:\ProgramData\Uno\Packages\FuseCore\0.33.5\Scripting\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Observable.Operation.h>
namespace g{namespace Fuse{namespace Scripting{struct ArrayMirror;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__NewAll;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class Observable.NewAll :1631
// {
::g::Fuse::Scripting::Observable__Operation_type* Observable__NewAll_typeof();
void Observable__NewAll__ctor_1_fn(Observable__NewAll* __this, ::g::Fuse::Scripting::Observable* obs, ::g::Fuse::Scripting::ArrayMirror* newValues);
void Observable__NewAll__New1_fn(::g::Fuse::Scripting::Observable* obs, ::g::Fuse::Scripting::ArrayMirror* newValues, Observable__NewAll** __retval);
void Observable__NewAll__OnPerform_fn(Observable__NewAll* __this);
void Observable__NewAll__SendMessage_fn(Observable__NewAll* __this, ::g::Fuse::Scripting::Observable__Subscription* sub);
void Observable__NewAll__Unsubscribe_fn(Observable__NewAll* __this);

struct Observable__NewAll : ::g::Fuse::Scripting::Observable__Operation
{
    uStrong< ::g::Fuse::Scripting::ArrayMirror*> _newValues;

    void ctor_1(::g::Fuse::Scripting::Observable* obs, ::g::Fuse::Scripting::ArrayMirror* newValues);
    static Observable__NewAll* New1(::g::Fuse::Scripting::Observable* obs, ::g::Fuse::Scripting::ArrayMirror* newValues);
};
// }

}}} // ::g::Fuse::Scripting
