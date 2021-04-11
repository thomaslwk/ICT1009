#include <iostream>
#include <string>

using namespace std;

// parent clas, declarations
class InsurancePolicy {
private:
    int policyNumber;
protected:
    string policyHolder;
public:
    double annualRate;
    void setPolicy(int, string, double);
    void showPolicy();
};

// implementation of the parent class member functions
// implementation is also part of the class
void InsurancePolicy::setPolicy(int num, string name, double rate) {
    //within this scope, we are inside the parent class InsurancePolicy
    policyNumber = num;
    policyHolder = name;
    annualRate = rate;
}

void InsurancePolicy::showPolicy() {
    cout << "Policy #" << policyNumber << "\nName: " << policyHolder << "\nAnnual rate: " << annualRate << endl;
}

int main() {
    InsurancePolicy aPolicy;
    aPolicy.setPolicy(1009, "Shawshank", 0.06);
    
    // Q1. can access public members of the class in main()?
    cout << "***" << aPolicy.annualRate << endl;
    // Q2. can access protected or private members of the class in main()?
    // cout << aPolicy.policyHolder << endl; sadly no
    // Q3. can use public functions to access protected or private members?
    aPolicy.showPolicy();

    return 0;
}


