#include "reverse_string.h"

namespace reverse_string {
    std::string reverse_string(std::string string) {
        std::string result;
        for (int i = (int)string.length(); i > 0; i--) {
            result += string[i-1];
        }
        return result;
    }
}  // namespace reverse_string
