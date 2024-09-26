#include "difference_of_squares.h"

namespace difference_of_squares {
    int square_of_sum(int N) {
        int result{};
        for (int i = 1; i <= N; ++i) {
            result += i;
        }
        result = result * result;
        return result;
    }

    int sum_of_squares(int N) {
        int result{};
        for (int i = 1; i <= N; ++i) {
            result += i*i;
        }
        return result;
    }

    int difference(int N) {
        return square_of_sum(N) - sum_of_squares(N);
    }
}  // namespace difference_of_squares
