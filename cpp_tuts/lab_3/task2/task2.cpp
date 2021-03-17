#include <iostream> 
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main() {
    Package pk1("Bruce Lee", "1 Fighting Rd", "Hong Kong", "China", 12345, 
    "Alice Wong", "Jurong Ave 1", "Jurong", "Singapore", 23456, 8.5, 0.5);

    TwoDayPackage pk2("Donald Trump", "1600 Pennsylvania Ave", "Washington", "USA", 34567,
    "Barack Obama", "21 Democracy St", "Washington", "USA", 45678, 10.5, 0.65, 2.0);

    OvernightPackage pk3("Lee Hsien Loong", "1 Parliament P1", "CBD", "Singapore", 56789, 
    "Bob Tan", "Yishun Ave 1", "Yishun", "Singapore", 67891, 12.25, 0.7, 0.25);

    std::cout << "Package 1: " << std::endl;
    std::cout << "Sender: " << pk1.getSenderName() << std::endl;
    std::cout << pk1.getSenderAddr() << std::endl;
    std::cout << "Recipient: " << pk1.getReceiverName() << std::endl;
    std::cout << pk1.getReceiverAddr() << std::endl;
    std::cout << "Cost: " << pk1.getCost() << std::endl;
    std::cout << std::endl;

    std::cout << "Package 2: " << std::endl;
    std::cout << "Sender: " << pk2.Package::getSenderName() << std::endl;
    std::cout << pk2.Package::getSenderAddr() << std::endl;
    std::cout << "Recipient: " << pk2.getReceiverName() << std::endl;
    std::cout << pk2.getReceiverAddr() << std::endl;
    std::cout << "Cost: " << pk2.getCost() << std::endl;
    std::cout << std::endl;

    std::cout << "Package 3: " << std::endl;
    std::cout << "Sender: " << pk3.Package::getSenderName() << std::endl;
    std::cout << pk3.Package::getSenderAddr() << std::endl;
    std::cout << "Recipient: " << pk3.getReceiverName() << std::endl;
    std::cout << pk3.getReceiverAddr() << std::endl;
    std::cout << "Cost: " << pk3.getCost() << std::endl;
    std::cout << std::endl;
    
    return 0;
}
