#include <iostream>

using namespace std;

//* option 2
template <typename T>
T reverse(T x) {
    return -x;
} //*/

int main() {
    double pi = 3.14;
    int ten = 10;
    double y = reverse(pi);
    cout << y << endl;
    cout << reverse(ten) << endl;
    return 0;
}

