#include <iostream>
using namespace std;

class Fibonacci {
    int n, t1, t2;
public:
    Fibonacci(int num) : n(num), t1(0), t2(1) {}
    void generate() {
        cout << t1 << " " << t2 << " ";
        for(int i=3; i<=n; i++) {
            int next = t1 + t2; t1 = t2; t2 = next;
            cout << next << " ";
        }
    }
};

int main() {
    Fibonacci f(10); f.generate(); return 0;
}
