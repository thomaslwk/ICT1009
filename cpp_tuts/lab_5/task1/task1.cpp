#include <iostream>     /*  For cout */ 
#include <array>        /*  For Array  */ 

/* ********************** */
/* *** Template Array *** */
/* ********************** */  
template<class T> 
class Array{
	T* data; 
	int size; 
public: 
	Array(T* d, int s);
	void showList();
	void showFirst(); 
	void showLast();
};
template<class T> 
Array<T>::Array(T* d, int s){
	size = s;
	data = new T[size];    
	for (int i = 0; i < size; i++) {
		data[i] = d[i];
	}
}
template<class T> 
void Array<T>::showList(){
	std::cout << "\n======================"
	<< "\n* Print Full Array"
	<< "\n======================";
	for (int i = 0; i < size; i++) {
		std::cout << data[i]; 
	}
}
template<class T> 
void Array<T>::showFirst(){
	std::cout << "\n======================"
	<< "\n* Show First in Array"
	<< "\n======================";
	std::cout << data[0]; 
}
template<class T> 
void Array<T>::showLast(){
	std::cout << "\n======================"
	<< "\n* Show Last in Array"
	<< "\n======================";
	std::cout << data[size -1];
}
/* ********************* */ 
/* *** Vehicle Class *** */
/* ********************* */ 
class Vehicle{
	friend std::ostream& operator<<(std::ostream&, const Vehicle&);
	friend std::istream& operator>>(std::istream&, Vehicle&);
	// Default access for class = private 
	private:
		std::string name; 
		double price;
	public: 
		void setVehicle(std::string, double);
		std::string getName();
		double getPrice();
};
/* ******************************* */
/* *** SETTER Method (Vehicle) *** */ 
/* ******************************* */
void Vehicle::setVehicle(std::string nw_name, double nw_price){
	this->name = nw_name;
	this->price = nw_price;
}
std::string Vehicle::getName(){
	return this->name;
}
double Vehicle::getPrice(){
	return this->price;
}
/* ************************* */ 
/* *** Operator Overload *** */
/* ************************* */ 
std::ostream& operator<<(std::ostream& out, const Vehicle& veh){
	out << "\nVehicle name: " << veh.name 
	<< "\nVehicle price: " << veh.price;
	return out; 
}
std::istream& operator>>(std::istream& in, Vehicle& veh){
	in >> veh.name >> veh.price; 
	return in;
}
/* ******************** */ 
/* *** Main Program *** */ 
/* ******************** */ 
int main(){
	// Set to max 3 for test
	Vehicle cars[4];
	// cars[0].setVehicle("McQueen", 8889);
	// cars[1].setVehicle("Mater", 69);
	// cars[2].setVehicle("Sally", 145);
	// cars[3].setVehicle("Doc Hudson", 1000);
	std::cout << "\nEnter 4 car names and price.";
	for(int i = 0; i < 4; i++){
		std::cout << "\n[" << i+1 << "] " 
		<< "Name and price: ";
		std::cin >> cars[i];
		cars[i].setVehicle(cars[i].getName(), cars[i].getPrice());
	}
	// std::cin >> cars[1];
	// std::cout << cars[1].getName();
	// cars[1].setVehicle(cars[1].getName(), cars[1].getPrice());

	int arrayElements = sizeof(cars) / sizeof(cars[0]);
	Array<Vehicle> arrayOfVehicles(cars, arrayElements);
	std::cout << "\n======================"
	<< "\n* Task 1: CPP Lab 5"
	<< "\n======================";
	arrayOfVehicles.showList(); 
	arrayOfVehicles.showFirst(); 
	arrayOfVehicles.showLast();
}
