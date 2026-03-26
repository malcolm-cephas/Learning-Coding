#include <stdio.h>

// Function to perform Shell Sort
void shellSort(int arr[], int n) {
    // Start with a big gap, then reduce the gap
    for (int gap = n / 2; gap > 0; gap /= 2) {

        // Perform gapped insertion sort
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;

            // Shift earlier gap-sorted elements up
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }

            // Put temp in correct position
            arr[j] = temp;
        }
    }
}

// Function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    shellSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}