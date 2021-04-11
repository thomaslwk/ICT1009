#include <iostream>

using namespace std;

// typical class
class Customer {
    friend void displayAsAFriend(Customer); // declear a friend func, not really part of the customer class
private:
    int custNum;
    double balanceDue;
public:
    Customer(int = 0, double = 0.0);
    void displayCustomer();
};

Customer::Customer(int num, double balance) {
    custNum = num;
    balanceDue = balance;
}

// implmentation, which is still within the scope of class customer
void Customer::displayCustomer() {
    cout << "Member function (Customer::displayCustomer):" << endl;
    cout << "Customer #" << custNum << " has a balance of $" << balanceDue << endl;
}

// Q1. Can we access custNum and balanceDue?
void displayAsAFriend(Customer cust) {
    cout << endl << "Friend function (friend void displayAsAFriend):" << endl;
    cout << "Customer #" << cust.custNum << " has a balance of $" << cust.balanceDue << endl;
}

int main() {
    Customer aMan(24, 81);

    aMan.displayCustomer();

    // friend func quite powerful, can access even private fields of a class, as long as it has been decleared as a friend
    displayAsAFriend(aMan); //obverse if we can get the results here

    return 0;
}
