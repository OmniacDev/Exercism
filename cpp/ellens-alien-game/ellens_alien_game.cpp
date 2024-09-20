namespace targets {
    class Alien {
    public:
        int x_coordinate, y_coordinate;
    private:
        int health{3};
    public:
        Alien(int x, int y) : x_coordinate(x), y_coordinate(y) {}
        
        int get_health() const { 
            return this->health; 
        }
        
        bool hit() {
            this->health = this->health > 0 ? this->health - 1 : 0;
            return true;
        }
        
        bool is_alive() const {
            return (this->health > 0);
        }
        
        bool teleport(int x, int y) {
            this->x_coordinate = x;
            this->y_coordinate = y;
            
            return true;
        }
        
        bool collision_detection(const Alien& alien) const {
            return (alien.x_coordinate == this->x_coordinate && alien.y_coordinate == this->y_coordinate);
        }
    };

}  // namespace targets