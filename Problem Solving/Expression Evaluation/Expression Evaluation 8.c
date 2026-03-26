//1-x/2 +x^2/4-x^3/6......
#include <stdio.h>
#include <math.h>

int main() {
    double x, result = 1.0,term; // Initialize result to 1 for the first term
    int n,i;

    // Input: Get the fractional value of x and number of terms from the user
    printf("Enter a fractional value for x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Calculate the expression up to n terms
    for (i = 1; i <= n; i++) {
        // Calculate each term
        term = (i % 2 == 0 ? 1 : -1) * (pow(x, i) / (i*2));
        result += term; // Add the term to the result
    }

    // Output: Display the result
    printf("The result of the expression is: %lf\n", result);

    return 0;
}