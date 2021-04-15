#ifndef EYES_CPP
#define EYES_CPP

//declaration here;
#include "Eyes.h"

//Getter method
std::string Eyes::getPart(){
    return this->Eye_file;
}
//Setter method
void Eyes::setPart(std::string new_eyes){
    this->Eye_file = new_eyes;
}

#endif
