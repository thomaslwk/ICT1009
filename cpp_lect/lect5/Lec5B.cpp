#include <iostream>

using namespace std;

// class
class Speed {
private:
    int s;
public:
    Speed(int s) { this->s = s; }; //non-defulat constructor
    bool operator>(Speed);
    int get() { return s; }
};

// must: overload operator>() for class Speed; otherwise cannot compare x > y 
bool Speed::operator>(Speed speed) {
    bool ret = s > speed.s ? true : false;
    return ret;
}//*/

template<typename T>
T getMax(T x, T y) {
    // x, y and max can be of any type for which the operators > and = have been defined
    // but they must be all of the same type, since they are all defined as type T
    T max = x > y ? x : y; // 3 > 2 -> true -> x; v1 > v2 -> overload -> v1.speed > v2.speed -> false -> y:v2.speed
    return max;
}

int main() {
    // built-in types
    // int a = getMax(1, 100);
    // double b = getMax(3.14, 2.78);
    // cout << "a: " << a << "; b: " << b << endl;
    
    // own types
    Speed v1(25), v2(190); // v1 speed is 25 and v2 speed is 190
    Speed c = getMax(v1, v2); // v2 with higher speed
    cout << "getMax(v1, v2) " << c.get() << endl;

    return 0;
}

