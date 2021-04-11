#include <iostream>

using namespace std;

// no user-defined constructor
class InventoryItem {
    int stockNum;
    double price;
public:
    void setStockNum(int num) { stockNum = num; }
    void setPrice(double pr) { price = pr; }
    void display() { 
        cout << "Item #" << stockNum << ": $"<< price<< endl; 
    }
};

// no user-defined constructor
class Salesperson {
    int idNum;
    string name;
public:
    void setIdNum(int id) { idNum = id; }
    void setName(string lastName) { name = lastName; }
    void display() {
        cout << "Seller #" << idNum << ": " << name << endl;
    }
};

class Transaction {
    int transNum;
    InventoryItem itemSold;
    Salesperson seller;
public:
    // non-default constructor for the composition class
    Transaction(int, int, double, int, string);
    void display();
};

// must provide all the necessary constructor arguments
Transaction::Transaction(int transNum, int item, double pr, int id, string name) {
    this->transNum = transNum;
    itemSold.setStockNum(item);
    itemSold.setPrice(pr);
    seller.setIdNum(id);
    seller.setName(name);
} // any better way? See E2.

void Transaction::display() {
    cout << "Transaction #" << transNum << endl;
    itemSold.display();
    seller.display();
}

int main() {
    Transaction aSale(1, 24, 81, 8, "LA");
    aSale.display();
    return 0;
}



