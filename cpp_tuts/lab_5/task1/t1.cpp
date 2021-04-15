#include <iostream> 
#include "Vehicle.h"
#include "Array.h"

int main(){
    Vehicle cars[2];
    cars[0].setVehicle("McQueen", 6666);
    cars[1].setVehicle("Mater", 8888);
    int arrayElements = sizeof(cars)/sizeof(cars[0]);
    Array<Vehicle> arrayOfVehicle(cars, arrayElements);

    arrayOfVehicle.showList();
    arrayOfVehicle.showFirst();
}