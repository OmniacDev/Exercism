#include "trinary.h"

namespace trinary {
    int to_decimal(const string& trinary) {
        int result{};
        for (size_t i = 0; i < trinary.size() ; i++) {
            int num = trinary[i] - '0';
            if (num > 2 || num < 0) continue;
            result += num * (int)pow(3, trinary.size() - (i+1));
        }
        return result;
    }
}  // namespace trinary
