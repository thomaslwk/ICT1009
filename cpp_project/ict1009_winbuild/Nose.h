#ifndef NOSE_H
#define NOSE_H

// Declaration
#include <iostream>
#include "Bodypart.h"

class Nose: public Bodypart{
    protected:
        std::string Nose_file;   // To store nose file
    public:
        // Getter methods
        std::string getPart();
        void setPart(std::string);
};

#endif // NOSE_H
