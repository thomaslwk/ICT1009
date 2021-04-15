#ifndef PACKAGE_CPP
#define PACKAGE_CPP

#include "Package.h"

Package::Package(){};
Package::Package(string s_name, string s_street, string s_city, string s_country, 
int s_postal, string r_name, string r_street, string r_city, string r_country, 
int r_postal, double weight, double costPerKg) {
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
}

string Package::getSenderName(){
    return this->s_name;
}
string Package::getSenderAddr(){
    string addr;
    addr = s_street + ", " + s_city + ", " + s_country + ", ";
    addr += std::to_string(s_postal);
    return addr;
}
string Package::getReceiverName(){
    return this->r_name;
}
string Package::getReceiverAddr(){
    string addr;
    addr = r_street + ", " + r_city + ", " + r_country + ", ";
    addr += std::to_string(r_postal);
    return addr; 
}

double Package::calculateCost(double weight, double costPerKg){
    double price = weight*costPerKg; 
    return price;
}
double Package::getCost() {
    double cost = calculateCost(weight, costPerKg);
    return cost;
}

#endif