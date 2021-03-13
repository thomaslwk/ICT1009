#include <iostream> 

int main(){
    int usr_input; 
    std::cout << "Enter a number: ";
    std::cin >> usr_input; 
    if(usr_input < 100) {
        std::cout << "Too small.\n";
    }
    else if(usr_input >= 100){
        std::cout << "This number is big enough.\n";
    }
    return 0;
}