#include <iostream>

using namespace std;

class Person {
protected:
    int idNum;
    string lastName;
    string firstName;
public:
    void setFields(int, string, string);
    void outputData();
    int getId();
};

void Person::setFields(int num, string last, string first) {
    idNum = num;
    lastName = last;
    firstName = first;
}

void Person::outputData() {
    cout << "ID #" << idNum << endl << "Name: " << firstName << " " << lastName << endl;
}

int Person::getId() {
    return idNum;
}

class Employee : protected Person {
private:
    int dept;
    double hourlyRate;
public:
    void setFields(int, string, string, int, double);
};

void Employee::setFields(int num, string last, string first, int dep, double sal) {
    //Q1. can be shorter? 
    Person::setFields(num, last, first);
    dept = dep;
    hourlyRate = sal;
}

int main(){
   Person popstar;
   popstar.setFields(13, "Swift", "Taylor");
   cout << "Person:" << endl; popstar.outputData(); cout << endl;
   
   Employee engineer;
   engineer.setFields(11, "Wolowitz", "Howard", 6, 123.4);
   cout << "Engineer: " << endl; engineer.outputData(); cout << endl;
   // Q2. can override outputData() to include dept and hourlyRate?
   // Q3. change protected fields in Person to private, still executable?
   
   return 0;
}

