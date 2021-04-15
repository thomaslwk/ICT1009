#ifndef FACE_CPP
#define FACE_CPP

//declaration here;
#include <iostream>
#include "Face.h"

//Random Function
int Face::randFunction(int start_node, int end_node){
    //srand((unsigned)time(0));
    int rand_i;
    rand_i = start_node + (rand() % end_node);
    return rand_i;
}
//Return speach
std::string Face::talk(){
    return "\nThis is base face.";
}

#endif
