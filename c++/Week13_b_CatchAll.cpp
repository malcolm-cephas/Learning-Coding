#include <iostream>
using namespace std;

int main() {
    try {
        throw 10.5; // Throwing double
    } catch (...) {
        cout << "Caught All Exceptions!" << endl;
    }
    return 0;
}
