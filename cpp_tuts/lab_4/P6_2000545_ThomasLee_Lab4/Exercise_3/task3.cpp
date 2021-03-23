#include <iostream> 
#include "Meal.h"

int main(){
    // Meal Meal1("a", 123), Meal2("b", 234);
    // Meal Meal3 = Meal1 + Meal2;
    // Meal1.print();
    // Meal2.print();
    // Meal3.print();
    // Meal Meal4 = Meal1.operator+(Meal2);
    // Meal4.print();
    // Meal Meal5 = Meal1 + Meal2 + Meal3 + Meal4;
    // Meal5.print();
    Meal Meal[3];
    int total; 
    for(int i=0; i<3; i++) {
        std::cout << "Meal #" << i+1 << std::endl;
        std::cin >> Meal[i]; 
        std::cout << std::endl;
        
        // operator>>(std::cin, Meal[i]);
    }
    std::cout << "Summary" << std::endl;
    for(int i=0; i<3; i++) {
        std::cout << Meal[i] << std::endl; 
        total += Meal[i].getcal();
    }
    std::cout << "Everything together contains " << total << " calories." << std::endl;
   return 0;
}