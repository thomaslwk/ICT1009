#ifndef MEAL_H
#define MEAL_H
#include <iostream> 

class Meal {
    private: 
        std::string dish;
        int calorie;
    public: 
        // Meal();
        Meal();
        Meal(std::string, int calorie=0);
        std::string getdish() const; 
        int getcal() const;
        void setdish(std::string);
        void setcal(int);
        void print() const;
        friend std::ostream & operator<<(std::ostream & out, const Meal & nw_meal);
        friend std::istream & operator>>(std::istream & in, Meal & nw_meal);
        const Meal operator+(const Meal & nw_meal) const; 
};
#endif