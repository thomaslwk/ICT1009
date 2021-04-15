#ifndef SAILINGBOAT_H
#define SAILINGBOAT_H
#include <iostream> 
using namespace std; 

class SailingBoat {
    friend ostream& operator<<(ostream&, const SailingBoat&);
    private: 
        string boatName; 
        double distance;
    public: 
        SailingBoat(string, double);
        string getName();
        double operator/(SailingBoat);
};
#endif 