
#include <stdio.h>

int main() {
    int n, sum = 0, arr[10];


    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *ptr = arr;

     printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {

        scanf("%d", ptr + i);
    }


    printf("The elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
