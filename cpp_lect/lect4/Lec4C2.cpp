#include <iostream> 

using namespace std;

class Employee {
private:
    int idNum;
    double salary;
public:
    Employee(int, double);
    //overload operator +
    double operator+(Employee); // data type here, but as input shall be object
};

Employee::Employee(int id, double sal) {
    idNum = id;
    salary = sal;
}

double Employee::operator+(Employee emp) { // emp 3rd party object
    return salary + emp.salary; // "-" u can, but u should not
}

int main() {
    Employee manager(1, 6000.00);
    Employee assistant(2, 4000.00);
    double sum;

    // option 1
    sum = manager.operator+(assistant);
    cout << "L31 Add assistant to manager: Salary = $" << sum << endl;
    
    // option 2
    sum = manager + assistant; // 90% vote
    cout << "L35 Add manager and assistant: Salary = $" << sum << endl;

    return 0;
}
