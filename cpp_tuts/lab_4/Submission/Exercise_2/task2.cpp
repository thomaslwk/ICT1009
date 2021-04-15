#include <iostream> 
#include "SailingBoat.h"

using namespace std; 

ostream& operator<<(ostream& out, const SailingBoat& b) {
    out << b.boatName << " sailed " << b.distance << " miles. " << endl;
    return out;
}

int main(){
    SailingBoat boat1("Mermaid", 790);
    SailingBoat boat2("Poseidon", 920);
    double ratio; 
    ratio = boat1 /boat2;
    cout << boat1.getName() << " covered ";
    cout << (ratio*100) << "% of the distance of "; 
    cout << boat2.getName() << endl; 
    cout << boat1; 
    cout << boat2; 
}