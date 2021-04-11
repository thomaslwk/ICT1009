#include <iostream>
#include <iomanip> // used for setprecision()

using namespace std;

class CarSale {
    // cout is member of the ostream class
    // const reference avoids copying the object and prevents it from altering
    friend ostream& operator<<(ostream&, const CarSale&); 
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
    //printf("Car #%d for $%.2f\n", carId, carPrice);
}

ostream& operator<<(ostream& out, const CarSale& car) {
    out << fixed << setprecision(2) << setfill('0'); // format specification
    out << "Car #" << car.carId << ": $" << car.carPrice << endl;
    return out;
}

int main() {
    CarSale toyotaAltis(1, 1111);
    CarSale mazda6(3, 2222);
    CarSale audiA4(8, 3333);
    CarSale total(0, 0);

    // "total" is a CarSale object, so the operator+() must return a CarSale instead of double
    // total = toyotaAltis + mazda6 + audiA4;
    
    cout << toyotaAltis << mazda6 << audiA4; // out ostream
    // cout << endl << "Total:" << total << endl;
    // our class CarSale is treated like a built-in data type

    return 0;
}
