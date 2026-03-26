
#include <stdio.h>

int main() {
    int n, sum = 0, arr[10];


    printf("Enter the number of elements: ");
    scanf("%d", &n);


    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    int *ptr = arr;
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }


    printf("The sum of the elements is: %d\n", sum);

    return 0;
}
