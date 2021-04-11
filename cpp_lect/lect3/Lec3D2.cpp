#include <iostream>

using namespace std;

class Item {
protected:
    int stockNum;
    double price;
public:
    Item(int, double);
    ~Item() { 
        cout << "parent destructor for #" << stockNum << endl;
    }
};

Item::Item(int st, double pr) {
    stockNum = st;
    price = pr;
}

// scheduling FILO : first in last out
class Car : public Item {
protected:
    int mileage;
public:
    Car(int);
    Car(int, double, int);	
    ~Car() { 
        cout << "child destructor for #" << stockNum<< endl;
    }
    void show() {
        cout << "Car #" << stockNum << ": $" << price/1000 << "k, " << mileage << "km" << endl;
    }
};

// Q1, we call line 36 or line 38? for line 41
Car::Car(int st, double pr, int mil) : Item(st, pr), mileage(mil) {}

Car::Car(int mil) : Item(0, 10000) { mileage = mil; }

int main() {
    Car mazda6(1, 20000, 0);
    Car audiA4(3000);
    mazda6.show();
    audiA4.show();
    return 0;
}

