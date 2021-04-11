#include <iostream>

using namespace std;

// parent class
class Item {
protected:
    int stockNum;
    double price;
public:
    // non-default constructor of parent class
    Item(int, double);
};

// constructor implementation of Item
Item::Item(int st=2, double pr=9.9) { //no information provided by child class, so we use defualt values -> pass
    stockNum = st;
    price = pr;
    cout << "See me see me base class" << endl;
}

// derived class car derived from class item
class Car : public Item {
protected:
    int mileage;
public:
    // constructors
    Car(int mil);
    Car(int, int, double);
};

Car::Car(int mil) { // before this, we call parent constructor
    mileage = mil; 
    cout << "hi, i am car class" << endl;
}

Car::Car(int a, int b, double c) : Item(b, c), mileage(a) {}

// Q1. can we bypass setting the ShowroomItem fields?
// option 1: give default values, i.e., ShowroomItem(2, 9999.0) { 
// option 2: new prototype including stockNum and price
// ShowroomCar::ShowroomCar(int st, double pr, int mil) : ShowroomItem(st, pr) { mileage = mil; }
// option 3: concise version of option 2
// ShowroomCar::ShowroomCar(int st, double pr, int mil) : ShowroomItem(st, pr), mileage(mil) {};
// option 4: give ShowroomItem a default constructor with initialized values

int main() {
    // Car newCar(100);
    Car car2(100, 66, 88);

    return 0;
}