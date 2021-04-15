#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#pragma once 
#include <iostream>
using namespace std;

class TwoDayPackage: public virtual Package{
    protected: 
        double flatFee; 
    public:
        TwoDayPackage(string, string, string, string, int, 
        string, string, string, string, int, double, double, double);
        double calculateCost(double, double, double);
        double getCost();
};
#endif