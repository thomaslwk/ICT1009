#include <iostream>

using namespace std;

// count Person objects by setting a counter in the constructor
static int cnt = 0;

// grandpa class Person
class Person {
private:
    string name;
public:
    Person() {
        cout << "Person constructor" << endl;
        name = "Jon Snow"; 
        cnt++; 
    }
    void display() { 
        cout << "Name: " << name << endl; 
    }
    int getCnt() { 
        return cnt; 
    }
};

// parent 1: declaration + implementation together
class Student : virtual public Person {
private:
    int matNum;
public:
    Student() {
        cout << "Student constructor" << endl;
        matNum = 24;
    }
    void display() { 
        cout << "MatNum: " << matNum << endl; 
    }
};

// parent 2
class Employee : virtual public Person {
private:
    double salary;
public:
    Employee() {
        cout << "Employee constructor" << endl;
        salary = 1000; 
    }
    void display() { 
        cout << "Salary: " << salary << endl; 
    }
};

// grandson class
class WorkingStudent : public Student, public Employee {
private:
    int hLimit;
public:
    WorkingStudent() {
        cout << "WorkingStudent constructor" << endl;
        hLimit = 50;
    }
    void display() {
        cout << "Hour limit: " << hLimit << endl;
        cout << "Persons created: " << Person::getCnt() << endl;
    }
};

int main() {
    WorkingStudent ws;

    // Q1. can compile? why? 
    ws.Person::display();
    ws.Student::display();
    ws.Employee::display();
    ws.display();

    return 0;
}
