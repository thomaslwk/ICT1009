#ifndef MEAL_CPP
#define MEAL_CPP
#include <iostream> 
#include "Meal.h"

Meal::Meal(){}
Meal::Meal(std::string dish, int calorie){
    this->dish = dish;
    this->calorie = calorie;
}

//Getters
std::string Meal::getdish() const{
    return this->dish; 
}
int Meal::getcal() const{
    return this->calorie;
}
//Setters 
void Meal::setdish(std::string new_dish){
    this->dish = new_dish;
}
void Meal::setcal(int new_cal){
    this->calorie = new_cal;
}
void Meal::print() const {
    std::cout << "Dishname: " << dish << " calorie: " << calorie << std::endl;
}
std::ostream & operator<<(std::ostream & out, const Meal & meal) {
    out << meal.getdish() << " contains " << meal.getcal() << " calories.";
    return out;
}

std::istream & operator>>(std::istream & in, Meal & meal) {
    std::string new_dish;
    int new_calorie; 
    std::cout << "Enter the dish: ";  
    in >> new_dish;
    std::cout << "Enter calories in kcal: "; 
    in >> new_calorie;
    meal.setdish(new_dish);
    meal.setcal(new_calorie);
    return in;
}

//Function overload  
const Meal Meal::operator+(const Meal & nw_meal) const {
    return Meal(dish + nw_meal.dish, calorie + nw_meal.calorie);
}
#endif