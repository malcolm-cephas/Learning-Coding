#include <iostream>
using namespace std;

class Vehicle { public: void vehicle() { cout << "I am a vehicle" << endl; } };
class FourWheeler : public Vehicle { public: void fourWheeler() { cout << "I have four wheels" << endl; } };
class Car : public FourWheeler { public: void car() { cout << "I am a car" << endl; } };

int main() {
    Car myCar;
    myCar.car();
    myCar.fourWheeler();
    myCar.vehicle();
    return 0;
}
