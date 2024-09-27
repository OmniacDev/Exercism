#include "sieve.h"

namespace sieve {
    vector<int> primes(const int &range) {
        map<int, bool> numbers;
        
        for (int i = 2; i <= range; ++i) {
            numbers[i] = true;
        }
        
        for (const auto& [key, value] : numbers) {
            if (!value) continue;

            for (int i = 2; i <= range; ++i) {
                const int multiple = key * i;

                if (multiple > range) break;
                
                numbers[multiple] = false;
            }
        }

        vector<int> primes{};
        for (const auto& [key, value] : numbers) {
            if (value) primes.push_back(key);
        }
        
        return primes;
    }
}  // namespace sieve
