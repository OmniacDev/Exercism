#include "darts.h"

namespace darts {
    int score(double x, double y) {
        const double dist = std::sqrt(x*x + y*y);
        
        if (dist > 10.f) return 0;
        else if (dist > 5.f) return 1;
        else if (dist > 1.f) return 5;
        else return 10;
    }
} // namespace darts