#pragma once

#include <vector>
#include <string>

namespace lasagna_master {
    struct amount {
        int noodles;
        double sauce;
    };

    int preparationTime(const std::vector<std::string>& layers, int avg_time = 2);
    amount quantities(const std::vector<std::string>& layers);
    void addSecretIngredient(std::vector<std::string>& mine, const std::vector<std::string>& friends);
    void addSecretIngredient(std::vector<std::string>& mine, const std::string& aunties);
    std::vector<double> scaleRecipe(const std::vector<double>& quantities, int scale);
}  // namespace lasagna_master
