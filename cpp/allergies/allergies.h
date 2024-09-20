#if !defined(ALLERGIES_H)
#define ALLERGIES_H

#include <string>
#include <unordered_set>

namespace allergies {
    class allergy_test {
    private:
        int score;
    public:
        allergy_test(int);
        
        bool is_allergic_to(const std::string& allergen) const;
        std::unordered_set<std::string> get_allergies() const;
    };
}  // namespace allergies

#endif // ALLERGIES_H