#include <iostream>
using namespace std;

class Base { public: virtual void show() { cout << "Base Show" << endl; } };
class Derived : public Base { public: void show() override { cout << "Derived Show" << endl; } };

int main() {
    Base *ptr; Derived d; ptr = &d;
    ptr->show(); 
    return 0;
}
