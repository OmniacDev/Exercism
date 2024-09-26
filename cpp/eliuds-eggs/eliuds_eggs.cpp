#include "eliuds_eggs.h"

namespace chicken_coop {
    int positions_to_quantity(int dec_pos) {
        int result{};
        
        int rem = dec_pos;
        while (rem != 0) {
            result += rem % 2;
            rem /= 2;
        }
        
        return result;
    }
}  // namespace chicken_coop
