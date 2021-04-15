#ifndef FACE_H
#define FACE_H

// Declarations
#include <iostream>
#include "Eyes.h"
#include "Nose.h"
#include "Mouth.h"

class Face: public Eyes, public Nose, public Mouth{
    // Face inherits eye, nose, mouth members
    public:
        Face(){};
        // Random Function use to select file
        int randFunction(int, int);
        std::string tostring(int);
        // Talk
        std::string talk();
};

#endif // FACE_H
