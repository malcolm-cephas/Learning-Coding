//compute the sum of this geometric progression: 1+x+x^2+x^3+..............+x^n
#include <stdio.h>
#include <math.h>

int main() {
    int x, n,sum = 0;

    // Read the values of x and n
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Compute the sum of the geometric series
    for (int i = 0; i <= n; i++) {
        sum += pow(x, i);
    }
    printf("The sum of the geometric progression is: %d\n", sum);

    return 0;
}