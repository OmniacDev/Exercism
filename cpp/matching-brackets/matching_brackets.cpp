#include "matching_brackets.h"

namespace matching_brackets {

    bool check(const string& in) {
        const string open_brackets = "{[(";
        const string closed_brackets = "}])";
        
        std::stack<char> brackets{};
        for (const auto& c : in) {
            const size_t open_bracket = open_brackets.find(c);
            const size_t closed_bracket = closed_brackets.find(c);
            if (open_bracket != string::npos) {
                brackets.push(open_brackets[open_bracket]);
            }
            else if (closed_bracket != string::npos) {
                if (brackets.empty() || brackets.top() != open_brackets[closed_bracket]) return false;
                brackets.pop();
            }
        }
        return brackets.empty();
    }
}  // namespace matching_brackets
