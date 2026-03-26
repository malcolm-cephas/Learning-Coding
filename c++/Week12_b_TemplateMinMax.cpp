#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) { return (a > b) ? a : b; }

int main() {
    cout << "Max(10, 20): " << findMax(10, 20) << endl;
    cout << "Max(5.5, 2.2): " << findMax(5.5, 2.2) << endl;
    return 0;
}
