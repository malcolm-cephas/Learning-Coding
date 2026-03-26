#include <iostream>
#include <string>
using namespace std;

class STUDENT {
public:
    string name; int id;
};

int main() {
    STUDENT s = {"Alice", 101};
    STUDENT *ptr = &s;
    cout << "Accessing using Pointer ->: " << ptr->name << endl;
    return 0;
}
