#include <string>

namespace star_map {
    enum class System {
        BetaHydri,
        EpsilonEridani,
        Sol,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
}

namespace heaven {
    class Vessel {
    public:
        star_map::System current_system;
        std::string name;
        int generation, busters{0};
        
        Vessel(const std::string&, int, star_map::System = star_map::System::Sol);
        
        Vessel replicate(const std::string&) const;
        void make_buster();
        bool shoot_buster();
    };
    
    std::string get_older_bob(const Vessel& one, const Vessel& two);
    bool in_the_same_system(const Vessel& one, const Vessel& two);
}

