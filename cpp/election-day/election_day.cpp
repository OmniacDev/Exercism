#include <string>
#include <vector>

namespace election {
    struct ElectionResult {
        std::string name{};
        int votes{};
    };
    
    int vote_count(const ElectionResult& result) {
        return result.votes;
    }
    
    void increment_vote_count(ElectionResult& result, int amount) {
        result.votes += amount;
    }
    
    ElectionResult& determine_result(std::vector<ElectionResult>& results) {
        size_t idx{0};
        for (size_t i = 0; i < results.size(); i++) {
            if (results[i].votes > results[idx].votes) idx = i;
        }

        results[idx].name = "President " + results[idx].name;
        
        return results[idx];
    }
}