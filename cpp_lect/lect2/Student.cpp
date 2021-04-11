#include <iostream>
#include "Student.h"

// implementation
void Student::displayStudent() {
    cout << "Student # " << idNum << endl;
    cout << "Name: " << name << endl;
    cout << "GPA: " << gpa << endl;
}

void Student::setIdNum(int num) {
    if (num >= 1 && num <= 9999)
        this->idNum = num;
    else
        idNum = -1;
}

void Student::setName(string name) {
    this->name = name;
}

void Student::setGradeAverage(double gpa) {
    if (gpa >= 1.0 && gpa <= 5.0)
        Student::gpa = gpa;
    else
        this->gpa = 0;
}
