#ifndef PACKAGE_H
#define PACKAGE_H
#include <iostream> 
using namespace std;

class Package {
    protected: 
        string s_name, s_street, s_city, s_country;
        string r_name, r_street, r_city, r_country;
        int s_postal, r_postal;
        double weight, costPerKg;
    public:
        Package();
        Package(string, string, string, string, int, 
        string, string, string, string, int, double, double);
        double calculateCost(double, double); 
        string getSenderName();
        string getSenderAddr();
        string getReceiverName();
        string getReceiverAddr();
        double getCost();
};

#endif