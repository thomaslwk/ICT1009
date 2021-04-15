#ifndef BODYPART_H
#define BODYPART_H

// Declaration
#include <iostream>

class Bodypart{
    public:
        Bodypart();
        virtual std::string getPart() = 0;
        virtual void setPart(std::string) = 0;
};

#endif // BODYPART_H
