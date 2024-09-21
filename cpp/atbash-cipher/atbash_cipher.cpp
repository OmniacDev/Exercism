#include "atbash_cipher.h"

namespace atbash_cipher {
    const std::string encode_str = "abcdefghijklmnopqrstuvwxyz";
    const std::string decode_str = "zyxwvutsrqponmlkjihgfedcba";
    
    std::string decode(std::string str) {
        std::string unpadded;
        for (size_t i = 0; i < str.length(); ++i) {
            if (unpadded[i] != ' ') {
                unpadded += str[i];
            }
        }
        
        std::string result;
        for (size_t i = 0; i < unpadded.length(); i++) {
            const char& item = unpadded[i];
            const size_t idx = decode_str.find((char)tolower(item));

            if (idx != std::string::npos) {
                result += encode_str[idx];
            }
            else if (isdigit(item)) {
                result += item;
            }
        }
        
        return result;
    }

    std::string encode(const std::string& str) {
        std::string result;
        for (size_t i = 0; i < str.length(); i++) {
            const char& item = str[i];
            const size_t idx = encode_str.find((char)tolower(item));

            if (idx != std::string::npos) {
                result += decode_str[idx];
            }
            else if (isdigit(item)) {
                result += item;
            }
        }

        std::string padded;
        for (size_t i = 0; i < result.length(); ++i) {
            padded += result[i];
            if (((i+1) % 5 == 0) && (i+1) != result.length()) {
                padded += " ";
            }
        }
        
        return padded;
    }
}
