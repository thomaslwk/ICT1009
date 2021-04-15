#include <iostream>     /*  For cout */ 
#include <array>        /*  For Array  */ 

/* *********************** */
/* *** Inventory Class *** */
/* *********************** */  
class Inventory{
	int stock, quantity;
	double price; 
public: 
	Inventory(){};
	Inventory(int, int, double);
	void setAllToZero();
	friend std::ostream& operator<<(std::ostream&, const Inventory&);
	friend std::istream& operator>>(std::istream&, Inventory&);
};
Inventory::Inventory(int nw_stock, int nw_quantity, double nw_price){
	this->stock = nw_stock;
	this->quantity = nw_quantity;
	this->price = nw_price;
}
void Inventory::setAllToZero(){
	this->stock = 0;
	this->quantity = 0;
	this->price = 0;
	std::cout << "\n==========================="
	<< "\n**** RESET VALUES TO 0 **** "
	<< "\n===========================\n";
}
std::ostream& operator<<(std::ostream& out, const Inventory& inv){
	out << "\nStock: " << inv.stock
	<< " | Quantity: " << inv.quantity
	<< " | Price: " << inv.price
	<< "\n=================================\n";
	return out; 
}
std::istream& operator>>(std::istream& in, Inventory& inv){
	// Error checking bool, default false. if error occur, bool will be true.
	bool error_chk = false;
	/* ******************* */
	/* *** Stock check *** */
	/* ******************* */  
	try{
		std::cout << "Enter stock num: ";
		in >> inv.stock;
		if(inv.stock < 1 || inv.stock > 999){
			std::string msg = "\n* ERROR: Stock number out of range!";
			throw(msg);
		}
	}
	catch(const std::string msg){
		error_chk = true; 
		std::cout << "\n==========================="
		<< msg
		<< "\n===========================\n";
	}
	/* ********************** */ 
	/* *** Quantity check *** */ 
	/* ********************** */  
	try{
		std::cout << "Enter quantity: ";
		in >> inv.quantity;
		if(inv.quantity < 0){
			throw(inv.quantity);
		}
	}
	catch(const int quantity){
		error_chk = true; 
		std::cout << "\n==========================="
		<< "\n* ERROR: Quantity must be more than 0."
		<< "\n===========================\n";
	}
	/* ******************* */ 
	/* *** Price check *** */ 
	/* ******************* */ 
	try{
		std::cout << "Enter price: "; 
		in >> inv.price; 
		if(inv.price > 1000){
			throw(inv.price);
		}
	}
	catch(const double price){
		error_chk = true; 
		std::cout << "\n==========================="
		<< "\n* ERROR: Price must be less than 1000."
		<< "\n===========================\n";
	}
	// Check if bool error is true 
	if(error_chk == true){ 
		inv.setAllToZero();
	}
	return in;
}
/* ******************** */ 
/* *** Main Program *** */ 
/* ******************** */ 
int main(){
	Inventory inv1;
	std::cout << "\n======================"
	<< "\n* Task 2: CPP Lab 5"
	<< "\n======================\n";
	for(int i = 0; i < 3; i++){
		std::cout << "\nInventory Item: ["
		<< i+1 << "]\n";
		std::cin >> inv1; 
		std::cout << inv1;
	}
	return 0; 
}
