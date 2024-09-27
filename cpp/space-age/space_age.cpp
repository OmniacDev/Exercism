#include "space_age.h"

namespace space_age {
    float space_age::on_mercury() const {
        return (float)age_sec / (mercury_period * period_sec);
    }

    float space_age::on_venus() const {
        return (float)age_sec / (venus_period * period_sec);
    }

    float space_age::on_earth() const {
        return (float)age_sec / (earth_period * period_sec);
    }

    float space_age::on_mars() const {
        return (float)age_sec / (mars_period * period_sec);
    }

    float space_age::on_jupiter() const {
        return (float)age_sec / (jupiter_period * period_sec);
    }

    float space_age::on_saturn() const {
        return (float)age_sec / (saturn_period * period_sec);
    }

    float space_age::on_uranus() const {
        return (float)age_sec / (uranus_period * period_sec);
    }

    float space_age::on_neptune() const {
        return (float)age_sec / (neptune_period * period_sec);
    }

    long long space_age::seconds() const {
        return age_sec;
    }
}  // namespace space_age
