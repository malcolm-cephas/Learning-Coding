#include <iostream>
#include <string>
using namespace std;

class Demo {
    private: int x;
    public: void setX(int val) { x = val; }
            void getX() { cout << "X: " << x << endl; }
};

int main() {
    Demo d;
    d.setX(100);
    d.getX();
    return 0;
}
