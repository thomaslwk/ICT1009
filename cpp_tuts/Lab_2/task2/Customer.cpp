#include <iostream> 
#include "Name.h"
#include "CreditData.h"

using namespace std; 

class Customer {
    private: 
        Name name; 
        CreditData credit; 
        string phoneNumber; 
    public: 
        Customer(string, string, double, double, string);
        void ShowCustomer();
};

Customer::Customer(string firstName, string lastName, double bal, double max, string phone) 
: name(firstName, lastName), credit(bal, max) {
    phoneNumber = phone;
}

void Customer::ShowCustomer(){
    cout << "Customer data: " << endl;
    name.displayFullName();
    cout << phoneNumber << endl; 
    credit.displayCreditData();
}

int main() {
    const int TIMES = 2;
    string first, middle, last, phone; 
    double bal, lim; 
    for(int i = 0; i < TIMES; ++i){
        cout << endl << "Please enter first name for customer #" << (i+1) << " ";
        cin >> first;
        cout << "Please neter last name: ";
        cin >> last; 
        cout << "Enter current balance($): ";
        cin >> bal; 
        cout << "Enter credit limit($): ";
        cin >> lim; 
        cout << "Enter phone number: ";
        cin >> phone; 
        Customer cust(first, last, bal, lim, phone);
        cust.ShowCustomer();
    }
    return 0;
}