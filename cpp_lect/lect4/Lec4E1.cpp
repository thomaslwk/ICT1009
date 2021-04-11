#include <iostream>
#include <string>

using namespace std;

class CarCarrier {
private:
    string* vehicle; // point
    int numVehicles;
    int shipmentNr;
public:
    CarCarrier();
    ~CarCarrier();
    friend ostream& operator<<(ostream&, const CarCarrier&);
};

// constructor
CarCarrier::CarCarrier() {
    int i;
    cout << endl << "Enter shipment ID: ";
    cin >> shipmentNr;
    cout << "Enter number of vehicles: ";
    cin >> numVehicles;
    vehicle = new string[numVehicles]; // create memory space based on our input vars for vehicles
    for (i = 0; i < numVehicles; ++i) {
        cout << "Enter name of car " << i + 1 << " : ";
        cin >> vehicle[i];
    }
}

// destructor
CarCarrier::~CarCarrier() {
    cout << "ewok" << endl;
    delete[] vehicle; // pay attention when we have assignment
}

ostream& operator <<(ostream& out, const CarCarrier& cc) {
    int i;
    out << "Shipment #" << cc.shipmentNr << " car list:" << endl;
    for (i = 0; i < cc.numVehicles; ++i)
        out << cc.vehicle[i] << endl;
    return out;
}

int main() {
    CarCarrier vesselA; // start of scope vesselA
    // this is the scope of vesselB 
    {
        CarCarrier vesselB; // start scope of vb

        cout << endl << "The first vessel:" << endl << vesselA;
        cout << endl << "The second vessel: " << vesselB; // construction suc

        // built-in = operator
        // copy each field of vesselA to vesselB including the vehicle pointer
        vesselA = vesselB;
        cout << endl << "The first vessel after transshipping:" << endl << vesselA;
    }
    // vesselB goes out of scope; the destructor releases the memory for vehicle names 
    // the pointer in vesselA points to deallocated memory 
    
    // consequently, no output here
    cout << endl << "Second vessel gone out of scope:" << endl << vesselA;
    // solution: overloading the = operator

    return 0;
}
