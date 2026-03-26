//to generate all the prime numbers between 1 to n.
#include <stdio.h>

int main() {
    int number,count,i,j;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Prime numbers between 1 and %d are:\n", number);
    for (j = 2; j<= number; j++)
    {
        count = 0; 
        for (i = 2; i<= j/2; i++) {
            if (j % i == 0) {
                count++;   
                break; 
            }
        }
        if (count == 0)
            printf("%d ", j);
    }

    return 0;
}