#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    bool isPrime;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Prime numbers between 1 and " << n << ": ";
    for (i = 2; i <= n; i++) {
        isPrime = true;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) { isPrime = false; break; }
        }
        if (isPrime) cout << i << " ";
    }
    return 0;
}
