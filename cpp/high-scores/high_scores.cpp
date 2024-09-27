#include "high_scores.h"

#include <algorithm>

namespace arcade {

    std::vector<int> HighScores::list_scores() {
        return this->scores;
    }

    int HighScores::latest_score() {
        return this->scores.back();
    }

    int HighScores::personal_best() {
        return *std::max_element(this->scores.begin(), this->scores.end());
    }

    std::vector<int> HighScores::top_three() {
        std::vector<int> sorted = this->scores;
        std::sort(sorted.begin(), sorted.end(), std::greater<>());
        return std::vector<int>{sorted.begin(), sorted.begin() + (long long)(sorted.size() < 3 ? sorted.size() : 3) };
    }

}  // namespace arcade
