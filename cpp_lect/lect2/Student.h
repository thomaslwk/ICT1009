#pragma once

#include <string>

using namespace std;

class Student {
private:
    int idNum;
    string name;
    double gpa;
public:
    void displayStudent();
    void setIdNum(int);
    void setName(string);
    void setGradeAverage(double);
};
