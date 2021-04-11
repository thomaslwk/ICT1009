#include <iostream>
#include <string>

using namespace std;

class CarCarrier {
private:
    string* vehicle;
    int numVehicles;
    int shipmentNr;
public:
    CarCarrier();
    ~CarCarrier();
    friend ostream& operator<<(ostream&, const CarCarrier&);
    CarCarrier& operator=(CarCarrier&);
};

// constructor
CarCarrier::CarCarrier() {
    int i;
    cout << endl << "Enter shipment ID: ";
    cin >> shipmentNr;
    cout << "Enter number of vehicles: ";
    cin >> numVehicles;
    vehicle = new string[numVehicles];
    for (i = 0; i < numVehicles; ++i) {
        cout << "Enter name of car " << i + 1 << " : ";
        cin >> vehicle[i];
    }
}

// destructor
CarCarrier::~CarCarrier() {
    delete[] vehicle;
}

CarCarrier& CarCarrier::operator=(CarCarrier& aCarCarrier) {
    int i;
    shipmentNr = aCarCarrier.shipmentNr;
    numVehicles = aCarCarrier.numVehicles;
    delete[] vehicle;
    // does not copy the vehicle pointer but creates a new pointer 
    vehicle = new string[numVehicles];
    // copies the corresponding contents one by one
    for (i = 0; i < aCarCarrier.numVehicles; ++i)
        vehicle[i] = aCarCarrier.vehicle[i];
    return *this;
}

ostream& operator <<(ostream& out, const CarCarrier& cc) {
    int i;
    out << "Shipment #" << cc.shipmentNr << " car list:" << endl;
    for (i = 0; i < cc.numVehicles; ++i)
        out << cc.vehicle[i] << endl;
    return out;
}

int main() {
    CarCarrier vesselA;
    // this is the scope of vesselB 
    {
        CarCarrier vesselB;

        cout << endl << "The first vessel:" << endl << vesselA;
        cout << endl << "The second vessel: " << vesselB;

        vesselA = vesselB;
        cout << endl << "The first vessel after transshipping:" << endl << vesselA;
    }
    // vesselB goes out of scope

    // now, without any change in the main function, the output is correct
    cout << endl << "Second vessel gone out of scope:" << endl << vesselA;

    return 0;
}
