#include <iostream> 

using namespace std;

class Employee {
    // note: cannot overload operators with only C++’s built-in data types, i.e., E.g., "1.0 + 2.0" cannot 
    // one built-int and one user-defined is okay
    // the invocation starts with double instead of Employee, so cannot be an Employee member and shall use friend
    friend double operator+(double, Employee);
private:
    int idNum;
    double salary;
public:
    Employee(int, double);
    double getSalary();
};

Employee::Employee(int id, double sal) {
    idNum = id;
    salary = sal;
}

double operator+(double raise, Employee emp) {
    double newSalary = raise + emp.salary;
    return newSalary;
}

double Employee::getSalary() {
    return salary;
}

int main() {
    Employee manager(1, 6000.00);
    Employee assistant(2, 4000.00);

    // double sal1 = operator+(50, manager);
    double sal2 = 200 + assistant;
    // cout << "New manager salary: $" << sal1 << endl;
    cout << "New assistant salary: $" << sal2 << endl;

    return 0;
}
