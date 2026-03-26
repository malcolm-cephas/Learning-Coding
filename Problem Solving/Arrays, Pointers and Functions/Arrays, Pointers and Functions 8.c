//use both recursive and non-recursive functions to find the factorial of a given integer.
#include <stdio.h>

int main() {
    int n;
    long result,rec_result;
    long factorial_non_recursive(int );
    long factorial_recursive(int );

    // Input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the number is negative
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call non-recursive function
        result = factorial_non_recursive(n);
        printf("Factorial(non_recursive) of %d is %ld\n", n, result);
        
        // Call recursive function
        rec_result = factorial_recursive(n);
        printf("Factorial(recursive) of %d is %ld\n", n, rec_result);
    }

    return 0;
}

long factorial_non_recursive(int n) {
    long result = 1; int i;
    for (i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

long factorial_recursive(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    }
    // Recursive case: factorial of n is n * factorial(n-1)
    return n * factorial_recursive(n - 1);
}