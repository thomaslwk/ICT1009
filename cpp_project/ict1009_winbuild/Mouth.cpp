#ifndef MOUTH_CPP
#define MOUTH_CPP

// Declaration
#include "Mouth.h"

//Getter method
std::string Mouth::getPart(){
    return this->Mouth_file;
}
//Setter method
void Mouth::setPart(std::string new_mouth){
    this->Mouth_file = new_mouth;
}

#endif
