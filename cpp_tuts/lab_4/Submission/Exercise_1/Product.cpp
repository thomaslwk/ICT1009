#ifndef PRODUCT_CPP
#define PRODUCT_CPP
#include "Product.h"

Product::Product(){};
void Product::setDimensions(double l, double w, double d){
    this->length = l;
    this->width = w;
    this->depth = d;
}
#endif