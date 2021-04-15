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
void Female::setEye(std::string Eyepath){
    Eyes::setPart(Eyepath);
}
void Female::setMouth(std::string Mouthpath){
    Mouth::setPart(Mouthpath);
}
void Female::setNose(std::string Nosepath){
    Nose::setPart(Nosepath);
}
//Return speech
std::string Female::talk(){
    return "\nMother says: I am female.";
}
#endif
