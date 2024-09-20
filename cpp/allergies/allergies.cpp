#include "allergies.h"

namespace allergies {
    allergy_test::allergy_test(int score): score(score) {}

    bool allergy_test::is_allergic_to(const std::string& allergen) const {
        if (allergen == "eggs") { return (score & 1) == 1; } 
        if (allergen == "peanuts") { return (score & 2) == 2; } 
        if (allergen == "shellfish") { return (score & 4) == 4; } 
        if (allergen == "strawberries") { return (score & 8) == 8; } 
        if (allergen == "tomatoes") { return (score & 16) == 16; } 
        if (allergen == "chocolate") { return (score & 32) == 32; }  
        if (allergen == "pollen") { return (score & 64) == 64; } 
        if (allergen == "cats") { return (score & 128) == 128;}
        
        return false;
    }

    std::unordered_set<std::string> allergy_test::get_allergies() const {
        std::unordered_set<std::string> result;

        if ((score & 1) == 1) { result.emplace("eggs"); }
        if ((score & 2) == 2) { result.emplace("peanuts"); }
        if ((score & 4) == 4) { result.emplace("shellfish"); }
        if ((score & 8) == 8) { result.emplace("strawberries"); }
        if ((score & 16) == 16) { result.emplace("tomatoes"); }
        if ((score & 32) == 32) { result.emplace("chocolate"); }
        if ((score & 64) == 64) { result.emplace("pollen"); }
        if ((score & 128) == 128) { result.emplace("cats"); }
        
        return result;
    }
}  // namespace allergies
