#include <iostream>
using namespace std;

class A {
    int secret = 100;
    friend void reveal(A& obj);
    friend class B;
};

void reveal(A& obj) { cout << "Friend Function reveal: " << obj.secret << endl; }

class B {
    public: void display(A& obj) { cout << "Friend Class B display: " << obj.secret << endl; }
};

int main() {
    A a; B b; reveal(a); b.display(a);
    return 0;
}
