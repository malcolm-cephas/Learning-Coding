
#include <stdio.h>

int main() {
    int n,x,result,rec_result;
    int power_non_recursive(int , int );
    int power_recursive(int , int );


    printf("Enter the base (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (n): ");
    scanf("%d", &n);


    result = power_non_recursive(x, n);
    printf("non-recursive function: %d^%d = %d\n", x, n, result);


    rec_result = power_recursive(x, n);
    printf("recursive function: %d^%d = %d\n", x, n, rec_result);

    return 0;
}

int power_non_recursive(int x, int n) {
    int i,result = 1;
    for (i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

int power_recursive(int x, int n) {

    if (n == 0) {
        return 1;
    }

    else if (n > 0) {
        return x * power_recursive(x, n - 1);
    }
}
