//sum of n elements from an array using pointer variable.
#include <stdio.h>

int main() {
    int n, sum = 0, arr[10];

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the array elements
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Use a pointer variable to traverse and sum the elements
    int *ptr = arr;  // Pointer points to the first element of the array
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);  // Dereference the pointer to get the value
    }

    // Output the result
    printf("The sum of the elements is: %d\n", sum);

    return 0;
}