#ifndef VEHICLE_H 
#define VEHICLE_H   
#include <iostream>

class Vehicle {
    friend std::ostream& operator<<(std::ostream&, const Vehicle&);
    private: 
        std::string name; 
        double price; 
    public: 
        void setVehicle(std::string, double);
};

#endif 