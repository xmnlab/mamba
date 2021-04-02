// Copyright (c) 2019, QuantStack and Mamba Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#ifndef MAMBA_API_REMOVE_HPP
#define MAMBA_API_REMOVE_HPP

#include <string>
#include <vector>


namespace mamba
{
    void remove(bool remove_all = false);

    namespace detail
    {
        void remove_specs(const std::vector<std::string>& specs);
    }
}

#endif
