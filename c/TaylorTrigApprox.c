#include <stdio.h>
#include <math.h>

double taylorSin(double x, int n) {
    double res = 0, term = x;
    for(int i=1; i<=n; i++) {
        res += term;
        term = -term * x * x / ((2*i) * (2*i+1));
    }
    return res;
}

int main() {
    double x = 0.523599;
    printf("Taylor Sin(30 deg): %f\n", taylorSin(x, 10));
    printf("Library Sin(30 deg): %f\n", sin(x));
    return 0;
}
