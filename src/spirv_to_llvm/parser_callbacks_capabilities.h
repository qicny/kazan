/*
 * Copyright 2017 Jacob Lifshay
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */
#ifndef SPIRV_TO_LLVM_PARSER_CALLBACKS_CAPABILITIES_H_
#define SPIRV_TO_LLVM_PARSER_CALLBACKS_CAPABILITIES_H_

#include "spirv/spirv.h"
#include "translator.h"

namespace kazan
{
namespace spirv_to_llvm
{
namespace parser_callbacks
{
class Capabilities_callbacks : public virtual Parser_callbacks_base
{
private:
    util::Enum_set<spirv::Capability> enabled_capabilities;

public:
    virtual void handle_instruction_op_capability(
        spirv::Op_capability instruction, std::size_t instruction_start_index) override final;
};
}
}
}

#endif // SPIRV_TO_LLVM_PARSER_CALLBACKS_CAPABILITIES_H_