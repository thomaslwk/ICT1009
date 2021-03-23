#ifndef OVERNIGHTPACKAGE_CPP
#define OVERNIGHTPACKAGE_CPP
#include "Package.h"
#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(string s_name, string s_street, string s_city, string s_country, 
int s_postal, string r_name, string r_street, string r_city, string r_country, 
int r_postal, double weight, double costPerKg, double feePerKg) {
    this->s_name = s_name; 
    this->s_street = s_street;
    this->s_city = s_city; 
    this->s_country = s_country; 
    this->s_postal = s_postal;
    this->r_name = r_name; 
    this->r_street = r_street;
    this->r_city = r_city; 
    this->r_country = r_country; 
    this->r_postal = r_postal;
    this->weight = weight;
    this->costPerKg = costPerKg;
    this->feePerKg = feePerKg;
}

double OvernightPackage::calculateCost(double weight, double costPerKg, double feePerKg){
    double price = weight*costPerKg + feePerKg*weight;
    return price;
}
double OvernightPackage::getCost(){
    double cost = calculateCost(weight, costPerKg, feePerKg);
    return cost;
}

#endif