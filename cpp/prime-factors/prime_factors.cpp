#include "prime_factors.h"

namespace prime_factors {

    vector<long long> of(long long number) {
        vector<long long> prime_factors{};
        
        long long remainder = number;
        long long divisor = 2;
        while (remainder > 1) {
            if (remainder % divisor == 0) {
                prime_factors.push_back(divisor);
                remainder = remainder / divisor;
            }
            else {
                divisor++;
            }
        }
        
        return prime_factors;
    }
}  // namespace prime_factors
