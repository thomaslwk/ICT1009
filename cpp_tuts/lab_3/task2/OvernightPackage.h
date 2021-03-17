#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#pragma once 
#include <iostream>

class OvernightPackage: public virtual Package {
    private: 
        double feePerKg; 
    public: 
        OvernightPackage(string, string, string, string, int, 
        string, string, string, string, int, double, double, double);
        double calculateCost(double, double, double);
        double getCost();
};
#endif