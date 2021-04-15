#ifndef NOSE_CPP
#define NOSE_CPP

// Declaration
#include "Nose.h"

//Getter method
std::string Nose::getPart(){
    return this->Nose_file;
}
//Setter method
void Nose::setPart(std::string new_nose){
    this->Nose_file = new_nose;
}

#endif
