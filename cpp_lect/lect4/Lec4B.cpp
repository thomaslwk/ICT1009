#include <iostream>

using namespace std;

// Q1. why do we declare Customer so early?
class Customer;

class Transaction {
    friend void applyTransaction(Customer, Transaction); // compiler does not know what is customer
private:
    int transactionNum;
    int custNum;
    double amount;
public: //  constructor w/ default values
    Transaction(int = 0, int = 0, double = 0.0);
};

Transaction::Transaction(int trans, int cust, double amt) {
    transactionNum = trans;
    custNum = cust;
    amount = amt;
}

class Customer {
    friend void applyTransaction(Customer, Transaction);
private:
    int custNum;
    double balanceDue;
public: // constructor w/ default values
    // void applyTransaction(Customer cust, Transaction trans);
    Customer(int = 0, double = 0.0);
};

Customer::Customer(int num, double balance) {
    custNum = num;
    balanceDue = balance;
}

void applyTransaction(Customer cust, Transaction trans) {
    cout << "Customer #" << cust.custNum << " has balance of $" << cust.balanceDue << endl;
    cust.balanceDue += trans.amount;
    cout << "After transaction #" << trans.transactionNum << " for $" << trans.amount << " Customer #" << trans.custNum << " has balance of $" << cust.balanceDue << endl;
} //*/

int main() {
    Transaction oneTrans(11, 8, -150.00);
    Customer oneCust(8, 200.00);
    applyTransaction(oneCust, oneTrans);

    return 0;
}

