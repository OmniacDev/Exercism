#include "rotational_cipher.h"

namespace rotational_cipher {
    const std::string valid_char = "abcdefghijklmnopqrstuvwxyz";
    
    std::string rotate(const std::string& str, int key) {
        std::string result;
        for (size_t i = 0; i < str.length(); i++) {
            const char& c = str[i];
            
            const bool is_upper = isupper(c);

            size_t idx = valid_char.find((char)tolower(c));
            if (idx != std::string::npos) {
                idx = (idx + key) % 26;
                
                const char& new_c = valid_char[idx];
                
                result += is_upper ? (char)toupper(new_c) : new_c;
            }
            else {
                result += c;
            }
        }
            
        return result;
    }
}
