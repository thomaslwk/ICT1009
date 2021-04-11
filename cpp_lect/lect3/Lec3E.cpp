#include <iostream>

using namespace std;

// parent 1
class Vehicle {
protected:
    int idNumber;
    string make;
    double milesPerGallon;
public:
    Vehicle(int, string, double);
    void display();
};

Vehicle::Vehicle(int id, string make, double mpg) {
    idNumber = id;
    this->make = make;
    milesPerGallon = mpg;
}

void Vehicle::display() {
    cout << "Vehicle #" << idNumber << "\nCar make: " << make << "\nFuel consumption: " << milesPerGallon << " miles per gallon" << endl;
}

// parent 2
class Dwelling {
protected:
    int numberOfBedrooms;
    int squareFeet;
public:
    Dwelling(int, int);
    void display();
};

Dwelling::Dwelling(int bedrooms, int sqFeet) {
    numberOfBedrooms = bedrooms;
    squareFeet = sqFeet;
}

void Dwelling::display() {
    cout << "Dwelling: " << numberOfBedrooms << " bedrooms and " << squareFeet << " square feet" << endl;
}

// recreational vehicle: 1) "is a" Vehicle, you drive it and it runs on gas; 2) "is a" Dwelling, you sleep, cook, and live in it
class RV : public Vehicle, public Dwelling {
public:
    RV(int, string, double, int, int);
    RV(Vehicle, Dwelling);
    void display();
};

RV::RV(int id, string make, double mpg, int bedrooms, int sqFt) 
    : Vehicle(id, make, mpg), Dwelling(bedrooms, sqFt) { 
}

RV::RV(Vehicle v, Dwelling d) : Vehicle(v), Dwelling(d) {}

void RV::display() {
    cout << "Recreational vehicle: " << endl;
    Vehicle::display();
    Dwelling::display();
    // Q1: what if we have a unique function name? still need (::)?
}

int main() {
    //RV anRV(24, "Rolling Palace", 17, 4, 195);
    //anRV.display();

    // Q1: can we input Vehicle and Dwelling directly as below? advanced version
    Vehicle aCar(24, "Rolling Palace", 17);
    Dwelling aHouse(4, 195);
    RV anOtherRV(aCar, aHouse);
    anOtherRV.display();

    return 0;
}
