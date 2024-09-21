#include "doctor_data.h"

heaven::Vessel::Vessel(const std::string& name, int generation, star_map::System system): current_system(system), name(name), generation(generation) {}

heaven::Vessel heaven::Vessel::replicate(const std::string& new_name) const {
    return heaven::Vessel{new_name, this->generation+1};
}

void heaven::Vessel::make_buster() {
    this->busters++;
}

bool heaven::Vessel::shoot_buster() {
    if (this->busters > 0) {
        this->busters--;
        return true;
    }
    return false;
}

std::string heaven::get_older_bob(const heaven::Vessel& one, const heaven::Vessel& two) {
    return (one.generation < two.generation ? one.name : two.name);
}

bool heaven::in_the_same_system(const heaven::Vessel& one, const heaven::Vessel& two) {
    return (one.current_system == two.current_system);
}
