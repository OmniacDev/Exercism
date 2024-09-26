#include "luhn.h"

namespace luhn {

    bool valid(const string& num) {
        int sum{0};
        
        int idx{0};
        for (int i = (int)num.size() - 1; i >= 0; i--) {
            const int n = num[i] - '0';

            if (num[i] == ' ') continue;
            if (n > 9 || n < 0) return false;
            idx++;

            if (idx % 2 == 0) {
                sum += n * 2 > 9 ? n * 2 - 9 : n * 2;
            }
            else {
                sum += n;
            }
        }
        
        return (sum % 10 == 0) && (idx > 1);
    }
}  // namespace luhn
