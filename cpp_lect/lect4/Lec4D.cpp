#include<iostream>
#include <iomanip> // used for setprecision()

using namespace std;

class CarSale {
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
    CarSale cstemp(0, 0); // temporary obj for CarSale
    cstemp.carPrice = carPrice + s.carPrice;
    return cstemp; // updated object
}

void CarSale::showSale() {
    // http://www.cplusplus.com/reference/iomanip/setprecision/
    // fixed: sets the floatfield format flag for the str stream to fixed with no exponent part
    cout << fixed << setprecision(2) << setfill('0');
    cout << "Car #" << carId << ": $" << carPrice << endl;
    //printf("Car #%d for $%.2f\n", carId, carPrice);
}

int main() {
    CarSale toyotaAltis(1, 90000);
    CarSale mazda6(3, 120000);
    CarSale audiA4(8, 180000);
    CarSale total(0, 0);

    // "total" is a CarSale object, so the operator+() must return a CarSale instead of double
    total = toyotaAltis + mazda6 + audiA4; // int sum = a + b + c
    toyotaAltis.showSale();
    mazda6.showSale();
    audiA4.showSale();

    cout << endl << "Total:" << endl;
    total.showSale();

    return 0;
}
