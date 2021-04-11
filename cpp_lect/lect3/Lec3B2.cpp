#include <iostream>
#include <string>

using namespace std;

// base class declaration
class InsurancePolicy {
private:
    int policyNumber;
protected:
    string policyHolder;
public: // become protected if child class sepecifer protected
    double annualRate;
    void setPolicy(int, string, double);
    void showPolicy();
};

// base class implementation
void InsurancePolicy::setPolicy(int num, string name, double rate) {
    // policyNumber = num;
    policyHolder = name;
    annualRate = rate;
}

void InsurancePolicy::showPolicy() {
    cout << policyHolder << "\nAnnual rate: " << annualRate << endl;
}

// derived class from base class InsurancePolicy
class CarInsurancePolicy : public InsurancePolicy {
// public: using InsurancePolicy::setPolicy; using InsurancePolicy::showPolicy;
public:
    using InsurancePolicy::setPolicy;
    using InsurancePolicy::showPolicy;
// Q2. can we override the private fields or funcs?
    void showPolicy() {implement here, it is considered class scope, still allowed for protected funcs}
};

int main() {
    CarInsurancePolicy aCarPolicy; // object of the derived class, a policy specifically for cars 

    // Q1. can access protected base fields and funcs?
    aCarPolicy.setPolicy(1009, "Faceless Men", 0.06); // public member of base class, public -> protected
    aCarPolicy.showPolicy(); // public -protected-> protected, but can be accessed by child class

    return 0;
}



