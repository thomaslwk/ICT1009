#include <vector> // STL
#include <algorithm>
#include <iostream>

using namespace std;

// classes
class Vehicle {
    // friend functions to say what is the meaning of cout and cin
    friend ostream& operator<<(ostream&, const Vehicle&);
    friend istream& operator>>(istream&, Vehicle&);
private:
    int idNumber;
public:
    // 2 constructors
    Vehicle();
    Vehicle(int);
    // public func to get the id
    int getId();
    bool operator<(const Vehicle&);
};

bool sortById(Vehicle& A, Vehicle& B) { // using a function instead of overloading <
    return (A.getId() < B.getId());
}

// implementation of constructors
Vehicle::Vehicle() {
    idNumber = 0;
}
// implementation of constructors
Vehicle::Vehicle(int id) {
    idNumber = id;
}

int Vehicle::getId() {
    return idNumber;
}

bool Vehicle::operator<(const Vehicle& v) {
    return this->idNumber < v.idNumber;
}

//operator overloading for cin and cout
istream& operator>>(istream& in, Vehicle& car) {
    cout << "Enter car id: ";
    in >> car.idNumber;
    cout << "Thank you!" << endl;
    return in;
}

ostream& operator<<(ostream& out, const Vehicle& car) {
    out << "Car #" << car.idNumber << endl;
    return out;
}

int main() {
    // vector: similar to array, but with many useful methods, e.g., at(), push_back(), pop_back(), size()
    vector<Vehicle> vehicles;
    Vehicle newCar;

    char quitChar = 'y';
    while (quitChar != 'n') {
        cin >> newCar; // input info of newcar
        vehicles.push_back(newCar); // push new car into the vector
        cout << "Do you want to enter a new car (whatever but not n or n)? "; 
        cin >> quitChar;
    }

    // sort(): arranges vector sequences in ascending order
    // Q: how to compare two objects?
    // option 1: overload operator <
    // sort(vehicles.begin(), vehicles.end());
    
    // option 2: define a new comparison function sortById
    // sort(vehicles.begin(), vehicles.end(), sortById);
    
    cout << endl << "id-sorted car list: " << endl;
    // vehicles.size(): tells us how many car we have in the vector
    for (int cnt = 0; cnt < vehicles.size(); ++cnt)
        cout << vehicles[cnt]; // overloading cout <<

    return 0;
}
