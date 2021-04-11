#include <iostream>
#include <iomanip> // used for setprecision()

using namespace std;

class CarSale {
    // cout is member of the ostream class
    // const reference avoids copying the object and prevents it from altering
    friend ostream& operator<<(ostream&, const CarSale&);
    // cannot be const since it is altered
    friend istream& operator>>(istream&, CarSale&);
private:
    int carId;
    double carPrice;
public:
    CarSale(int, double); //constructor
    void showSale();
    CarSale operator+(CarSale);
};

CarSale::CarSale(int id, double sale) {
    carId = id;
    carPrice = sale;
}

CarSale CarSale::operator+(CarSale s) {
    CarSale temp(0, 0);
    temp.carPrice = carPrice + s.carPrice;
    return temp;
}

void CarSale::showSale() {
    // http://www.cplusplus.com/reference/iomanip/setprecision/
    // fixed: sets the floatfield format flag for the str stream to fixed with no exponent part
    cout << fixed << setprecision(2) << setfill('0');
    cout << "Car #" << carId << ": $" << carPrice << endl;
}

ostream& operator<<(ostream& out, const CarSale& car) {
    out << fixed << setprecision(2) << setfill('0');
    out << "Car #" << car.carId << ": $" << car.carPrice << endl;
    return out;
}

istream& operator>>(istream& in, CarSale& car) {// for primitive types, system knows but for in-house class, we have to specify
    cout << "Enter car id: ";
    in >> car.carId;
    cout << "Enter car price: ";
    in >> car.carPrice;
    cout << "Shoop" << endl << endl;
    return in;
}

int main() {
    CarSale audiA4(0, 0); 
    cin >> audiA4; // input for obj, so we have to define by oursleves
    cout << audiA4;
    //Q: how about if we pass the object by value and not by reference?  try remove &?

    return 0;
}
