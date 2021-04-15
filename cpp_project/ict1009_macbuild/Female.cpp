#ifndef FEMALE_CPP
#define FEMALE_CPP

// Declaration
#include "Female.h"

//Return eyes
std::string Female::getEye(){
    return Eyes::getPart();
}
//Return nose
std::string Female::getNose(){
    return Nose::getPart();
}
//Return mouth
std::string Female::getMouth(){
    return Mouth::getPart();
}
//Return speech
std::string Female::talk(){
    return "\nMother says: I am female.";
}
#endif
