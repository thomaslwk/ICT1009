#include <iostream> 

using namespace std;

class Employee {
private:
    int idNum;
    double salary;
public:
    Employee(int, double);
    // Employee operator+(Employee); // manager + assistant;
    Employee operator+(double); // mangeer + 4000.0; same name, different args, overload
    double getSalary();
};

Employee::Employee(int id, double sal) {
    idNum = id;
    salary = sal;
}

Employee Employee::operator+(double raise) { // datatyper of this function is Employee class, return class as well not double
    Employee temp(idNum, salary); // local temp ojbj
    temp.salary = salary + raise;
    return temp; // return employee obj instead of double
}

double Employee::getSalary() {
    return salary;
}

int main() {
    Employee manager(1, 6000.00);
    Employee assistant(2, 4000.00);

    // manager = manager.operator+(50);
    // cout << "New manager salary: $" << manager.getSalary() << endl;

    // the object on the left side of + is the "this" object within the operator+() function 
    // the overloaded operator function gets invoked on the first operand which becomes the Employee object
    // try 200 + assistant? 
    assistant = assistant + 200; // adding double/int to an object
    cout << "New assistant salary: $" << assistant.getSalary() << endl;

    return 0;
}
