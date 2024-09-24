#pragma once

#include <array>
#include <string>

using namespace std;

namespace kindergarten_garden {
    enum class Plants {
        clover,
        grass, 
        violets, 
        radishes
    };
    
    array<Plants, 4> plants(const string& str, const string& name); 
}  // namespace kindergarten_garden
