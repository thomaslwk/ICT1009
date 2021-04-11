#include <iostream>

using namespace std;

// no class, only function
int getResistance() {
    int input;
    const int HIGH = 100; // upper limit
    const string ERROR_MSG = "Error: static resistance cannot be negative.";
    cout << "Enter a two-digit resistance: ";
    cin >> input; // 1009 input here and assign the value to variable input
    // function can throw any number of exceptions which can be caught by multiple catch blocks
    if (input < 0) // if negative
        throw(ERROR_MSG); // "Error: static resistance cannot be negative."
    if (input >= HIGH) // beyond the upper limit HIGH = 100 1009 > 100?
        throw(input); // throw the value we input into the prog. throwing an integer 1009
    return input; // int
}

int main() {
    int value = 0; // int
    // try block: contains code that the program attempts to execute, code you are going to inspect
    try {
        value = getResistance(); //return int
        cout << "You chose a valid resistance." << endl;
    }
    // function can throw any number of exceptions which can be caught by multiple catch blocks
    // catch block: much freedom of usage; do not have to display; can even be empty
    // at least one catch block must be put immediately after the try block, to handle a thrown object
    catch (string msg) {
        cout << "The following error was thrown: " << endl;
        cout << msg << endl;
    }// pass
    catch (int badValue) {
        value = 99;
        cout << "The following error was thrown: " << endl;
        cout << badValue << " Ohm is too high!" << endl;
        cout << "It will be reduced to " << value << " Ohm." << endl;
    }
    cout << "The final resistance: " << value << " Ohm." << endl;
    return 0;
}
