#include <iostream> 
#include "Box.h"
#include "Product.h"

using namespace std; 

//product fit 
bool checkSize(Box usrbox, Product usrproduct){
    double new_vol; 
    new_vol = usrproduct.length * usrproduct.width * usrproduct.depth;
    if(new_vol > usrbox.volume){
        cout << "0" << endl;
        return false;
    }
    else{
        cout << "1" << endl;
        return true;
    }
    return 0;
}

int main(){
    Box usrbox;
    Product usrproduct; 
    double usr_vol, usr_length, usr_width, usr_depth;

    //check box 
    cout << "Enter box volume: ";
    cin >> usr_vol;
    usrbox.setVolume(usr_vol);
    
    //check product 
    cout << "Enter product length, width and depth: ";
    cin >> usr_length >> usr_width >> usr_depth;
    usrproduct.setDimensions(usr_length, usr_width, usr_depth);

    //check bool 
    cout << "Does the prodouct fit in the box? (1 - yes, 0 - no): "; 
    checkSize(usrbox, usrproduct);
    return 0;
}
