#ifndef CHILD_H
#define CHILD_H

// Declaration
#include <iostream>
#include "Male.h"
#include "Female.h"
#include "X_MEN.h"

class Child : public Male, public Female, public X_MEN{
    protected:
        std::string speak_file;    // Text to store full text
        std::string speak_eye;     // Text to store inherited eyes
        std::string speak_nose;    // Text to store inherited nose
        std::string speak_mouth;   // Text to store inherited mouth
    public:
        // Child constructor to inherit traits from parents
        Child(Male, Female);
        // Overloaded child constructor for mutant
        Child(Male, Female, X_MEN);
        // Getter functions
        std::string talk();
        std::string getEye();
        std::string getNose();
        std::string getMouth();
};

#endif // CHILD_H
