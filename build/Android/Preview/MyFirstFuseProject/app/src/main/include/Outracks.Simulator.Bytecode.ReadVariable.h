// This file was generated based on C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.0.0\Bytecode\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Expression.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct ReadVariable;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Variable;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class ReadVariable :309
// {
uType* ReadVariable_typeof();
void ReadVariable__ctor_2_fn(ReadVariable* __this, ::g::Outracks::Simulator::Bytecode::Variable* variable);
void ReadVariable__New1_fn(::g::Outracks::Simulator::Bytecode::Variable* variable, ReadVariable** __retval);
void ReadVariable__Read2_fn(::g::Uno::IO::BinaryReader* reader, ReadVariable** __retval);
void ReadVariable__ToString_fn(ReadVariable* __this, uString** __retval);
void ReadVariable__Write2_fn(ReadVariable* o, ::g::Uno::IO::BinaryWriter* writer);
void ReadVariable__Write3_fn(ReadVariable* __this, ::g::Uno::IO::BinaryWriter* writer);

struct ReadVariable : ::g::Outracks::Simulator::Bytecode::Expression
{
    uStrong< ::g::Outracks::Simulator::Bytecode::Variable*> Variable;

    void ctor_2(::g::Outracks::Simulator::Bytecode::Variable* variable);
    void Write3(::g::Uno::IO::BinaryWriter* writer);
    static ReadVariable* New1(::g::Outracks::Simulator::Bytecode::Variable* variable);
    static ReadVariable* Read2(::g::Uno::IO::BinaryReader* reader);
    static void Write2(ReadVariable* o, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
