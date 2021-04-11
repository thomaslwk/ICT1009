class Student {
    // private by default
    // avoid public here
    int idNum;
    string lastName;
    double gradeAverage;
public:
    void displayStudent();
};

class Student {
private:
    // fields declarations
    int idNum;
    string lastName;
    double gradeAverage;
public:
    // function declarations
    void DisplayStudent();
};

// function implementation
void Student::displayStudent() {
    cout << "Student # " << idNum << endl;
    cout << "Name: " << lastName << endl;
    cout << " GPA: " << gradeAverage << endl;
}

// object instantiation
int main() {
    Student aStudent;
    aStudent.displayStudent();
    return 0;
}

void Student::setIdNum(int idNum) {
    this->idNum = idNum;
}

Student& Student::operator++() {
    ++idNum;
    return *this;
}

