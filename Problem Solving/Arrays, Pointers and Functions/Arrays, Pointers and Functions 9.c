//use both recursive and non-recursive functions to find the GCD (greatest common divisor) of two given integers.
#include <stdio.h>

int main() {
    int a, b,result,rec_result;
    int gcd_non_recursive(int , int );
    int gcd_recursive(int , int );

    // Input from the user
    printf("Enter the first integer (a): ");
    scanf("%d", &a);
    printf("Enter the second integer (b): ");
    scanf("%d", &b);

    // Call non-recursive function
    result = gcd_non_recursive(a, b);
    printf("GCD of %d and %d is %d\n", a, b, result);
    
    // Call recursive function
    rec_result = gcd_recursive(a, b);
    printf("GCD of %d and %d is %d\n", a, b, rec_result);

    return 0;
}

int gcd_non_recursive(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}   

int gcd_recursive(int a, int b) {
    // Base case: If b is 0, return a
    if (b == 0) {
        return a;
    }
    // Recursive case: GCD of a and b is GCD of b and a % b
    return gcd_recursive(b, a % b);
}