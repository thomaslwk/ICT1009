#include <iostream>

#define CLS_CODE 1009
#ifndef CLS_CODE
	#define CLS_CODE "ICT1009"
#else
	#define YEAR_CODE 2021
#endif

using namespace std;

int main() {
	cout << "Course Code: " << CLS_CODE <<endl;
	#ifdef YEAR_CODE
		cout << "Year: " << YEAR_CODE << endl;
	#endif 

	return 0;
}