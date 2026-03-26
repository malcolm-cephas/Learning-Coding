#include <iostream>
#include <exception>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    int index = 10;
    try {
        if(index >= 5 || index < 0) throw "Error: Array Index Out of Bounds!";
        cout << arr[index] << endl;
    } catch(const char* msg) {
        cout << "Caught: " << msg << endl;
    }
    return 0;
}
