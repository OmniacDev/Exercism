#include "bob.h"

namespace bob {

    string hey(const string &prompt) {
        const string w = " \n\r\t";
        const string a = "abcefghijklmnopqrstuvwxyz";
        const string A = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        
        const bool q = prompt[prompt.find_last_not_of(w)] == '?';
        const bool y = prompt.find_first_of(A) != string::npos && prompt.find_first_of(a) == string::npos;
        const bool s = prompt.find_first_not_of(w) == string::npos;

        if (q && y) return "Calm down, I know what I'm doing!";
        else if (q) return "Sure.";
        else if (y) return "Whoa, chill out!";
        else if (s) return "Fine. Be that way!";
        else return "Whatever.";
    }
}  // namespace bob
