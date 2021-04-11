#include <iostream>

using namespace std;

class Vehicle {
    friend ostream& operator<<(ostream&, const Vehicle&);
private:
    string carType;
    int numParked;
public:
    Vehicle(string, int);
    // aim for prefix
    Vehicle& operator++();
    Vehicle& operator--();
    // aim for postfix 
    // int: a dummy argument; int unused but provides a different prototype
    Vehicle operator++(int);
    string operator==(Vehicle);
};

Vehicle::Vehicle(string stknum, int num) {
    carType = stknum;
    numParked = num;
}

ostream& operator<<(ostream& out, const Vehicle& car) {
    out << "Type: " << car.carType << "; Quantity: " << car.numParked << endl;
    return out;
}

Vehicle& Vehicle::operator++() {
    ++numParked; // inc based numParked
    // cout << this->numParked;
    return *this;
}

Vehicle& Vehicle::operator--() {
    --numParked;
    return *this;
}

// postfix increment: evaluated before the mathematical operation
// so store the non-incremented value in a temporary variable first
Vehicle Vehicle::operator++(int) {
    Vehicle tmp = *this;
    ++numParked;
    // cout << tmp->numParked;
    return tmp;
}

string Vehicle::operator==(Vehicle car) {
    if (car.numParked == numParked) // criteria: based numParked
        return carType + " and " + car.carType + " numbers are the same.";
    else
        return carType + " and " + car.carType + " numbers are different.";
}

int main() {
    Vehicle modelA("Sedan", 12);
    Vehicle modelB("SUV", 14);
    
    cout << (modelA == modelB) << endl; // false numbers are different.
    cout << modelA; // sedan 12
    cout << ++modelA; // 12? 13? left -> right
    cout << modelA++; // 13? 14?
    cout << modelA; // 14
    cout << (modelA == modelB) << endl; // " numbers are the same.";

    return 0;
}
