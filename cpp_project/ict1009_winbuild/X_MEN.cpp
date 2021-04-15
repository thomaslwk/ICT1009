#ifndef X_MEN_CPP
#define X_MEN_CPP

//Declaration
#include "X_MEN.h"
#include "Face.h"

X_MEN::X_MEN() {
    //Mutate
    std::string endpath = ".JPG";
    std::string mutatepath = "://Images/mutation/Mutation_";
    mutatepath += std::to_string(randFunction(1,5));
    mutatepath += endpath;
    Mutation_file = mutatepath;
}

std::string X_MEN::getX_Gene(){
    return Mutation_file;
};

#endif
