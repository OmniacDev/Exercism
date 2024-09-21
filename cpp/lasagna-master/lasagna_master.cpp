#include "lasagna_master.h"

namespace lasagna_master {
    int preparationTime(const std::vector<std::string>& layers, int avg_time) {
        return (int)layers.size() * avg_time;
    }

    amount quantities(const std::vector<std::string> &layers) {
        amount amount{0, 0};
        for (const auto &item: layers) {
            if (item == "sauce") amount.sauce += 0.2;
            if (item == "noodles") amount.noodles += 50;
        }
        
        return amount;
    }

    void addSecretIngredient(std::vector<std::string> &mine, const std::vector<std::string> &friends) {
        mine[mine.size()-1] = friends[friends.size()-1];
    }
    
    void addSecretIngredient(std::vector<std::string> &mine, const std::string &aunties) {
        mine[mine.size()-1] = aunties;
    }

    std::vector<double> scaleRecipe(const std::vector<double> &quantities, int scale) {
        std::vector<double> result;
        result.reserve(quantities.size());

        for (const auto &item: quantities) {
            result.push_back((item / 2) * scale);
        }
        return result;
    }
}  // namespace lasagna_master
