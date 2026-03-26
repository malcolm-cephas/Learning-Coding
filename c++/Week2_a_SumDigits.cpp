#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, rem;
    cout << "Enter a positive integer: ";
    cin >> n;
    while (n > 0) {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
    return 0;
}
