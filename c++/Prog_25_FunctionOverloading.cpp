#include <iostream>
using namespace std;

void add(int a, int b) { cout << "Int Add: " << a + b << endl; }
void add(double a, double b) { cout << "Double Add: " << a + b << endl; }

int main() {
    add(5, 10);
    add(5.5, 3.2);
    return 0;
}
