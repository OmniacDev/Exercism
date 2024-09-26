#include "hexadecimal.h"

namespace hexadecimal {
    const string valid = "0123456789abcdef";
    
    int convert(const string& str) {
        int result{};
        for (int i = (int)str.length()-1; i >= 0; --i) {
            const size_t v = valid.find(str[i]);
            if (v == string::npos) return 0;
            result += (int)v * (int)pow(16, str.length() - (i+1));
        }
        return result;
    }
}  // namespace hexadecimal
