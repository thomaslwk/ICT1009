#ifndef X_MEN_H
#define X_MEN_H

//Declaration
#include <iostream>
#include "Face.h"

class X_MEN: virtual public Face{
    public:
        X_MEN();
        std::string Mutation_file;
        std::string getX_Gene();
};

#endif // X_MEN_H
