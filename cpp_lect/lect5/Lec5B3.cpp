#include <iostream>

using namespace std;

// class declearation
template<class T> // variable data type to a class field
class Number {
    T num;
public:
    Number(T);
};

// class implementation; constructor
template<class T>
Number<T>::Number(T in) { // not sure what is the data type of this in
    num = in;
    cout << "num: " << num << " type: " << typeid (in).name() << endl;
}

int main() {
    Number<int> anInt(1009); // class number with data type (for one filed) as int
    Number<double> anDb(20.21); // same class but different data type as double
    Number<string> anStr("ICT1009"); 

    return 0;
}          



