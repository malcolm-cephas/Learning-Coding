#include <iostream>
using namespace std;

class Overload {
public:
    void add(int a, int b) { cout << "Int: " << a + b << endl; }
    void add(double a, double b) { cout << "Double: " << a + b << endl; }
};

class Box {
public:
    int l;
    Box(int v) : l(v) {}
    Box operator+(const Box& b) { return Box(l + b.l); }
};

int main() {
    Overload o; o.add(5, 10); o.add(5.5, 4.4);
    Box b1(10), b2(20); Box b3 = b1 + b2;
    cout << "Operator Overloading Box: " << b3.l << endl;
    return 0;
}
