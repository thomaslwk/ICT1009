#include <iostream> 

using namespace std;

// 
class Employee {
private:
    int idNum;
    double salary;
public:
    Employee(int, double);
    // no overloading; use a member function to add two salaries
    double addTwo(Employee);
};

Employee::Employee(int id, double sal) {
    idNum = id;
    salary = sal;
}

double Employee::addTwo(Employee emp) { // here the emp is an object, different object
    return salary + emp.salary;
}

// Q1. can this main function be executed properly?
int main() { //C+99
    Employee manager(1, 6000.00); // obj 1 of class employee
    Employee assistant(2, 4000.00); // obj 2 of class employee
    double sum;
    sum = manager.addTwo(assistant); // return manger.salary + assistnat.salary, addtwo belongs to manager
    cout << "Add assistant to manager: Salary = $" << sum << endl;
    sum = assistant.addTwo(manager); // return assistnat.salary + manger.salary, addtwo belongs to assistant
    cout << "Add manager to assistant: Salary = $" << sum << endl;
    return 0; //0 - sus; 1 error code 
}
