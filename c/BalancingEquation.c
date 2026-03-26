#include <stdio.h>

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main() {


    printf("Chemical Balancing Demo: H2 + O2 -> H2O\n");
    printf("Balanced Equation: 2H2 + 1O2 -> 2H2O\n");
    printf("Constants: b1=2, b2=1, b3=2\n");
    return 0;
}
