// This file was generated based on C:\ProgramData\Uno\Packages\FuseCore\0.33.5\Scripting\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct ClassInstance;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Fuse{namespace Scripting{struct ObservableProperty;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal sealed class ClassInstance :53
// {
uType* ClassInstance_typeof();
void ClassInstance__ctor__fn(ClassInstance* __this, ::g::Fuse::Scripting::Context* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable);
void ClassInstance__CallMethod_fn(ClassInstance* __this, ::g::Fuse::Scripting::Function* method, uArray* args);
void ClassInstance__DispatchUnroot_fn(ClassInstance* __this);
void ClassInstance__EnsureRooted_fn(ClassInstance* __this);
void ClassInstance__GetPropertyObservable_fn(ClassInstance* __this, ::g::Uno::UX::Property* p, ::g::Fuse::Scripting::Object** __retval);
void ClassInstance__New1_fn(::g::Fuse::Scripting::Context* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable, ClassInstance** __retval);
void ClassInstance__Unroot_fn(ClassInstance* __this);

struct ClassInstance : uObject
{
    uStrong< ::g::Fuse::Scripting::Context*> _context;
    uStrong<uObject*> _obj;
    uStrong< ::g::Uno::Collections::List*> _properties;
    uStrong< ::g::Uno::UX::NameTable*> _rootTable;
    uStrong< ::g::Fuse::Scripting::Object*> _self;

    void ctor_(::g::Fuse::Scripting::Context* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable);
    void CallMethod(::g::Fuse::Scripting::Function* method, uArray* args);
    void DispatchUnroot();
    void EnsureRooted();
    ::g::Fuse::Scripting::Object* GetPropertyObservable(::g::Uno::UX::Property* p);
    void Unroot();
    static ClassInstance* New1(::g::Fuse::Scripting::Context* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable);
};
// }

}}} // ::g::Fuse::Scripting
