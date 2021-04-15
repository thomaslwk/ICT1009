#ifndef VEHICLE_CPP     
#define VEHICLE_CPP     
#include "Vehicle.h"

void Vehicle::setVehicle(std::string set_name, double set_price){
    this->name = set_name;
    this->price = set_price;
}

#endif 