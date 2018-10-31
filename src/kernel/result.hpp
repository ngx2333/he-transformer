//*****************************************************************************
// Copyright 2018 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//*****************************************************************************

#pragma once
#include <memory>
#include <vector>

namespace ngraph
{
    namespace element
    {
        class Type;
    }
    namespace runtime
    {
        namespace he
        {
            class HEBackend;
            class HECipherText;
            class HEPlaintext;

            namespace kernel
            {
                void result(const std::vector<std::shared_ptr<runtime::he::HECiphertext>>& arg,
                            std::vector<std::shared_ptr<runtime::he::HECiphertext>>& out,
                            size_t count);

                void result(const std::vector<std::shared_ptr<runtime::he::HEPlaintext>>& arg,
                            std::vector<std::shared_ptr<runtime::he::HEPlaintext>>& out,
                            size_t count);

                void result(const std::vector<std::shared_ptr<runtime::he::HEPlaintext>>& arg,
                            std::vector<std::shared_ptr<runtime::he::HEPlaintext>>& out,
                            size_t count);

                void result(const std::vector<std::shared_ptr<runtime::he::HECiphertext>>& arg,
                            std::vector<std::shared_ptr<runtime::he::HEPlaintext>>& out,
                            size_t count,
                            const element::Type& element_type,
                            const runtime::he::HEBackend* he_backend);

                void result(const std::vector<std::shared_ptr<runtime::he::HEPlaintext>>& arg,
                            std::vector<std::shared_ptr<runtime::he::HECiphertext>>& out,
                            size_t count,
                            const runtime::he::HEBackend* he_backend);
            }
        }
    }
}
