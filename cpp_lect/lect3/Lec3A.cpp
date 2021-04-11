#include <iostream>

using namespace std;

// parent class
class Person {
private: // only accessble from Person itself
    int idNum;
    string lastName;
    string firstName;
public: // all ppl can access
    void setFields(int, string, string);
    void outputData();
};

// implementation of member function for parent class
void Person::setFields(int num, string last, string first) {
    idNum = num;
    lastName = last;
    firstName = first;
}

void Person::outputData() {
    cout << "ID #" << idNum << " Name: " << firstName << " " << lastName << endl;
}

// child class inherited from parent class Person
class Customer : private Person {
private: // only accessble from Customer itself
    double balanceDue;
public:
    void setAllValues(int, string, string, double);
    void setBalDue(double);
    void outputBalDue();
};

// implementation of child class member functions
void Customer::setAllValues(int x, string y, string z, double d) {
    if(x < 100 && x > 0){
        setFields(x, y, z);
    }
    else {
        cout << "ERROR!!!!!! out of range " << endl;
    }
    balanceDue = d;
}

void Customer::setBalDue(double bal) {
    balanceDue = bal;
}

void Customer::outputBalDue() {
    cout << "Balance due $" << balanceDue << endl;
}

int main() {
    Customer cust; // child class object
    cust.setFields(24, "Bryant", "Kobe"); // from parent class
    cust.outputData(); // from parent class
    cout << endl << "--------------" << endl;
    cust.setBalDue(81); // child's own function
    cust.outputBalDue(); // child's own function

    return 0;
}

