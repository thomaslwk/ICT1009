#include <iostream>

using namespace std;

class Speed {
    friend ostream& operator<<(ostream&, Speed);
private:
    int s;
public:
    Speed(int s) { this->s = s; };
    bool operator>(Speed);
    int operator*(int);
};

ostream& operator<<(ostream& out, Speed speed) {
    out << "Speed: " << speed.s << "km/h" << endl;
    return out;
}

// must: overload operator>() for class Speed; otherwise cannot compare x > y 
bool Speed::operator>(Speed speed) {
    bool ret = s > speed.s ? true : false;
    return ret;
}

// must: overload operator*() for our class; otherwise cannot perform max * N
int Speed::operator*(int mult) {
    return s * mult;
}

template<typename T>
T getMax(T x, T y) {
    T max = x > y ? x : y;
    return max;
}

template<typename T>
// multiple data types
T getMax(T x, T y, int N) {
    T max = x > y ? x : y; // 8 > 24 -> false -> y:24
    // do not forget to overload operator*() for our class
    return max * N; // return 24*10
}

int main() {
    Speed v1(8), v2(24);
    // cout << getMax(v1, v2); // 24
    cout << getMax(v1, v2, 10); // 8, 24, 80, 240

    return 0;
}          



