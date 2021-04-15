#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream> 
#include "Box.h"
#include "Product.h"
class Box;

class Product {
    private: 
        double length, width, depth;
    public: 
        Product();
        void setDimensions(double, double, double);
        friend bool checkSize(Box, Product);
};
#endif