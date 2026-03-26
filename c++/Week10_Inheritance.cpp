#include <iostream>
using namespace std;

class Base { public: void base() { cout << "Base" << endl; } };
class SingleDerived : public Base { public: void der() { cout << "Single D" << endl; } };
class MultiLevelDerived : public SingleDerived { public: void ml() { cout << "Multi D" << endl; } };

class B1 { public: void b1() { cout << "B1" << endl; } };
class B2 { public: void b2() { cout << "B2" << endl; } };
class MultipleDerived : public B1, public B2 { public: void m() { cout << "Multi D" << endl; } };

int main() {
    SingleDerived sd; sd.base(); sd.der();
    MultiLevelDerived mld; mld.base(); mld.ml();
    MultipleDerived md; md.b1(); md.b2(); md.m();
    return 0;
}
