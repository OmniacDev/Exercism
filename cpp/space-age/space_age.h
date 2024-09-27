#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {
    const float period_sec = 31557600.f;
    
    const float mercury_period = 0.2408467f;
    const float venus_period = 0.61519726f;
    const float earth_period = 1.0f;
    const float mars_period = 1.8808158f;
    const float jupiter_period = 11.862615f;
    const float saturn_period = 29.447498f;
    const float uranus_period = 84.016846f;
    const float neptune_period = 164.79132f;
    
    class space_age {
    private:
        const long long age_sec;
    public:
        explicit space_age(long long seconds) : age_sec(seconds) {}
        
        long long seconds() const;
        
        float on_mercury() const;
        float on_venus() const;
        float on_earth() const;
        float on_mars() const;
        float on_jupiter() const;
        float on_saturn() const;
        float on_uranus() const;
        float on_neptune() const;
    };
}  // namespace space_age

#endif // SPACE_AGE_H