
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


    printf("The elements in reverse order are:\n");
    for (int i = n-1; i >= 0; i--) {
       printf("%2d", *(ptr+i));
    }

    return 0;
}
