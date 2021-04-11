#include <iostream>

using namespace std;

class House {
	int squareFeet = 100;
public:
	House();
	~House();
};

House::House() {
	cout << "House created." << endl;
}

// called automatically when an object goes out of scope
House::~House() {
	cout << "~ House destroyed." << endl;
}

/*int main() {
	// what is the scope for aHouse?
	House aHouse[3];
	cout << ">>> End of program" << endl; // alive at this stage
	return 0; // inactive
}*/


int main() {
	// what is the scope for aHouse?
	for (int i = 0; i < 3; i++) {
		cout << "i: " << i << " ";
		House aHouse;
	}
	cout << "End of program" << endl;
	return 0;
}


