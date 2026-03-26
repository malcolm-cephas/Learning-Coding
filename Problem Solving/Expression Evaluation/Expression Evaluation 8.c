
#include <stdio.h>
#include <math.h>

int main() {
    double x, result = 1.0,term;
    int n,i;


    printf("Enter a fractional value for x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);


    for (i = 1; i <= n; i++) {

        term = (i % 2 == 0 ? 1 : -1) * (pow(x, i) / (i*2));
        result += term;
    }


    printf("The result of the expression is: %lf\n", result);

    return 0;
}
