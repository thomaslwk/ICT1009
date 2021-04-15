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
void Male::setEye(std::string Eyepath){
    Eyes::setPart(Eyepath);
}
void Male::setMouth(std::string Mouthpath){
    Mouth::setPart(Mouthpath);
}
void Male::setNose(std::string Nosepath){
    Nose::setPart(Nosepath);
}
//Return speach
std::string Male::talk(){
    return "\nFather says: I am male.";
}
#endif
