#ifndef BOX_H
#define BOX_H
#include <iostream> 
#include "Product.h"
#include "Box.h"

class Product;

class Box {
    private: 
        double volume;
    public: 
        Box();
        void setVolume(double);
        friend bool checkSize(Box, Product);
};

#endif