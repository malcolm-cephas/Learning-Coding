#include <iostream>
using namespace std;

int main() {
    try {
        throw 10.5;
    } catch (...) {
        cout << "Caught All Exceptions!" << endl;
    }
    return 0;
}
