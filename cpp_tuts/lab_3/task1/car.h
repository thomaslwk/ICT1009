#pragma once 
#include <iostream> 

class Car {
    //-- Update for race car access
    // private: 
    //     bool isIgnition;
    //     int speed;
    protected: 
        bool isIgnition;
        int speed;
    public: 
        Car();
        void turnIgnitionOn();
        void turnIgnitionOff();
        void setSpeed(int);
        void showCar();
};