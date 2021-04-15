#ifndef MALE_CPP
#define MALE_CPP

// Declaration
#include "Male.h"

//Return eyes
std::string Male::getEye(){
    return Eyes::getPart();
}
//Return nose
std::string Male::getNose(){
    return Nose::getPart();
}
//Return mouth
std::string Male::getMouth(){
    return Mouth::getPart();
}
//Return speach
std::string Male::talk(){
    return "\nFather says: I am male.";
}
#endif
