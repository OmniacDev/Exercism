#if !defined(LUHN_H)
#define LUHN_H

#include <string>

using namespace std;

namespace luhn {
    bool valid(const string& num);
}  // namespace luhn

#endif // LUHN_H