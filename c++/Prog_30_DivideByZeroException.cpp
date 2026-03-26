#include <iostream>
using namespace std;

void checkDivide(int a, int b) {
    if(b == 0) throw "Error: Division by Zero!";
    cout << "Result: " << a/b << endl;
}

int main() {
    try {
        checkDivide(10, 0);
    } catch(const char* msg) {
        cout << "Caught: " << msg << endl;
    }
    return 0;
}
