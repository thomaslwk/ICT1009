#include <iostream>

using namespace std;

class InventoryItem {
    int stockNum;
    double price;
public:
    // non-default constructor in member class
    InventoryItem(int stkNum, double pr) {
        stockNum = stkNum;
        price = pr;
        cout << "we want to display again" << endl;
    }
    void display() {
        cout << "Item #" << stockNum << ": $" << price << endl;
    }
};

class Salesperson {
    int idNum;
    string name;
public:
    // non-default constructor in member class
    Salesperson(int id, string lastName) {
        idNum = id;
        name = lastName;
    }
    void display() {
        cout << "Seller #" << idNum << " " << name << endl;
    }
};

class Transaction {
    int transNum;
    InventoryItem itemSold;
    Salesperson seller;
public:
    Transaction(int, int, double, int, string);
    void display();
};

// Initialization list includes the member objects after a colon (:)
// non-defulat constructor for big class : non-default constructor of composition obj 1, non-def con of comp obj 2 {
// only specify the fileds of the big class}
Transaction::Transaction(int tnum, int item, double pr, int salesId, string name) : itemSold(item, pr), seller(salesId, name) {
    transNum = tnum;
}

void Transaction::display() {
    cout << "Transaction #" << transNum << endl;
    itemSold.display();
    seller.display();
}

int main() {
    Transaction aSale(2, 24, 81, 8, "LA");      
    aSale.display();
    return 0;
}
