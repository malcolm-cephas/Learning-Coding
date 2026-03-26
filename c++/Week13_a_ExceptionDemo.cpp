#include <iostream>
using namespace std;

int main() {
    try {
        int x = 10, y = 0;
        if(y == 0) throw "Division by Zero!";
        cout << (x / y) << endl;
    } catch (const char* msg) {
        cout << "Caught Exception: " << msg << endl;
    }
    return 0;
}
