#include "kindergarten_garden.h"

namespace kindergarten_garden {
    const array<string, 12> names = {"Alice", "Bob", "Charlie", "David", "Eve", "Fred", "Ginny", "Harriet", "Ileana", "Joseph", "Kincaid", "Larry"};

    array<Plants, 4> plants(const string &str, const string &name) {
        const size_t nl = str.find('\n');
        
        const string top = str.substr(0, nl);
        const string bot = str.substr(nl+1);

        array<Plants, 4> ps_e = {};
        
        for (size_t i = 0; i < names.size(); i++) {
            if (name == names[i]) {
                const string ps = top.substr(i*2, 2) + bot.substr(i*2, 2);

                for (size_t j = 0; j < ps.size(); j++) {
                    if (ps[j] == 'C') ps_e[j] = Plants::clover;
                    if (ps[j] == 'G') ps_e[j] = Plants::grass;
                    if (ps[j] == 'R') ps_e[j] = Plants::radishes;
                    if (ps[j] == 'V') ps_e[j] = Plants::violets;
                }
            }
        }
        
        return ps_e;
    }
}  // namespace kindergarten_garden
