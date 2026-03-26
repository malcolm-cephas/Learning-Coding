#include <iostream>
using namespace std;

class B1 { public: B1() { cout << "B1 C" << endl; } ~B1() { cout << "B1 D" << endl; } };
class B2 { public: B2() { cout << "B2 C" << endl; } ~B2() { cout << "B2 D" << endl; } };
class D : public B1, public B2 { public: D() { cout << "D C" << endl; } ~D() { cout << "D D" << endl; } };

int main() {
    D obj;
    return 0;
}
