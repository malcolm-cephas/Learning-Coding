#include <iostream>
using namespace std;

int main() {
    int *p = new int;
    *p = 25;
    cout << "Allocated memory using NEW, value: " << *p << endl;
    delete p;
    cout << "Deleted memory using DELETE." << endl;
    return 0;
}
