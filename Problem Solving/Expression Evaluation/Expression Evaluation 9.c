
#include <stdio.h>
#include <math.h>

int main() {
    int x, n,sum = 0;


    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);


    for (int i = 0; i <= n; i++) {
        sum += pow(x, i);
    }
    printf("The sum of the geometric progression is: %d\n", sum);

    return 0;
}
