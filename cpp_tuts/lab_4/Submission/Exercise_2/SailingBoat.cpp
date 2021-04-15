#ifndef SAILINGBOAT_CPP
#define SAILINGBOAT_CPP
#include "SailingBoat.h"

SailingBoat::SailingBoat(string name, double distance){
    this->boatName = name;
    this->distance = distance;
}
string SailingBoat::getName() {
    return this->boatName;
}
double SailingBoat::operator/(SailingBoat boat) {
    double ratio; 
    ratio = distance / boat.distance; 
    return ratio;
}
#endif