#include "grains.h"

namespace grains {
    unsigned long long square(int square) {
        return (long long)std::pow(2, square - 1);
    }

    unsigned long long total() {
        unsigned long long result{};

        for (int i = 0; i < 64; ++i) {
            result += square(i + 1);
        }
        
        return result;
    }
}  // namespace grains
