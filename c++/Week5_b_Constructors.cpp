#include <iostream>
using namespace std;

class MyClass {
public:
    int value;
    MyClass() { value = 0; cout << "Default Constructor" << endl; }
    MyClass(int v) { value = v; cout << "Parameterized Constructor: " << value << endl; }
    MyClass(const MyClass &obj) { value = obj.value; cout << "Copy Constructor: " << value << endl; }
};

int main() {
    MyClass m1; MyClass m2(42); MyClass m3 = m2;
    return 0;
}
