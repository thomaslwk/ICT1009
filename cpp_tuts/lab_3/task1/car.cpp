#include "car.h" 

Car::Car(){}

void Car::turnIgnitionOn(){
    isIgnition = true;
}
void Car::turnIgnitionOff(){
    isIgnition = false;
}
void Car::setSpeed(int carspeed){
    //Check limit 70
    if(carspeed > 70) {
        speed = 65;
    }
    else {
        speed = carspeed;
    }
}
void Car::showCar(){
    if(isIgnition){
        std::cout << "Ignition is on.";
    }
    else {
        std::cout << "Ignition is off.";
        speed = 0;
    }
    std::cout << " Speed is " << this->speed << "mph." << std::endl;
}

//Convertible 
class Convertible: public virtual Car {
    private: 
        bool isTopUp;
    public: 
        void putTopUp();
        void putTopDown();
        void showCar();
};
void Convertible::putTopUp(){
    isTopUp = true;
}
void Convertible::putTopDown(){
    isTopUp = false;
}
void Convertible::showCar(){
    Car::showCar();
    if(isTopUp == true){
        std::cout << "Top is up." << std::endl;
    }
    else{
        std::cout << "Top is down." << std::endl;
    }
}

//Racecar
class RaceCar: public virtual Car {
    public: 
        void setSpeed(int);
};
void RaceCar::setSpeed(int carspeed){
    //--Overwrite car setspeed.
    this->speed = carspeed;
}

//Mutant car covertible + racecar 
class ConvertibleRaceCar: public Convertible, public RaceCar{};

int main() {
    //-- First Test case 
    // Car myCar; 
    // myCar.turnIgnitionOn(); 
    // myCar.setSpeed(35);
    // myCar.showCar();
    
    // myCar.setSpeed(80);
    // myCar.showCar();

    // myCar.turnIgnitionOff();
    // myCar.showCar();

    //-- Second Test case 
    // Convertible myCar; 
    // myCar.turnIgnitionOn(); 
    // myCar.setSpeed(35);
    // myCar.putTopDown();
    // myCar.showCar();
    
    // myCar.setSpeed(80);
    // myCar.showCar();

    // myCar.putTopUp();
    // myCar.turnIgnitionOff();
    // myCar.showCar();

    //-- Third Test case 
    // Car aCar;
    // RaceCar aRaceCar;
    // aCar.turnIgnitionOn(); 
    // aCar.setSpeed(100);
    // std::cout << "A car at 100mph: "; 
    // aCar.showCar();

    // aRaceCar.turnIgnitionOn();
    // aRaceCar.setSpeed(100);
    // std::cout << "A race car at 100mph: ";
    // aRaceCar.showCar();

    //-- Fourth Test case 
    ConvertibleRaceCar aCar;

    std::cout << "Car set to 30mph:" << std::endl;
    aCar.Convertible::setSpeed(30);
    aCar.Convertible::turnIgnitionOn();
    aCar.Convertible::putTopUp();
    aCar.Convertible::showCar();

    std::cout << std::endl << "Car set to 80mph with top down: " << std::endl;
    aCar.RaceCar::setSpeed(80);
    aCar.Convertible::turnIgnitionOn();
    aCar.Convertible::putTopDown();
    aCar.Convertible::showCar();

    std::cout << std::endl << "Car set to 250mph with top up: " << std::endl;
    aCar.RaceCar::setSpeed(250);
    aCar.Convertible::turnIgnitionOn();
    aCar.Convertible::putTopUp();
    aCar.Convertible::showCar();

    return 0;
}