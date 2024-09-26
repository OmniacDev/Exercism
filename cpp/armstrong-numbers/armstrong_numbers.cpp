#include "armstrong_numbers.h"

namespace armstrong_numbers {
    bool is_armstrong_number(int i) {
        vector<int> digits;
        
        int remainder = i;
        while (remainder != 0) {
            digits.push_back(remainder % 10);
            remainder /= 10;
        }
        
        int result{};
        for (const auto& digit : digits) {
            result += (int)pow(digit, digits.size());
        }
        
        return result == i;
    }
}  // namespace armstrong_numbers
