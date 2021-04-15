#ifndef MOUTH_H
#define MOUTH_H

// Declaration
#include <iostream>
#include "Bodypart.h"

class Mouth: public Bodypart{
    private:
        std::string Mouth_file;   // To store mouth file
    public:
        // Getter methods
        std::string getPart();
        void setPart(std::string);
};

#endif // MOUTH_H
