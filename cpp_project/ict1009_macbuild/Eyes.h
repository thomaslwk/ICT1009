#ifndef EYES_H
#define EYES_H

// Declaration
#include <iostream>
#include "Bodypart.h"

class Eyes: public Bodypart {
  private:
    std::string Eye_file;   // To store eye
  public:
    //Getter methods
    std::string getPart();
    void setPart(std::string);
};

#endif // EYES_H
