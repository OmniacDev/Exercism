#include "triangle.h"

namespace triangle {
    flavor kind(double a, double b, double c) {
        if (a + b >= c && b + c >= a && c + a >= b && a > 0 && b > 0 && c > 0) {
            if (a == b && b == c) return flavor::equilateral;
            if (a == b || b == c || c == a) return flavor::isosceles;
            return flavor::scalene;
        }
        else {
            throw std::domain_error("Invalid Triangle");
        }
    }
}  // namespace triangle
