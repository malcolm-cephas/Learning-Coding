
#include <stdio.h>

int main() {
    int arr[50], n, i;
    void insertionSort(int [], int );


    printf("Enter number of elements: ");
    scanf("%d", &n);


    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    insertionSort(arr, n);


    printf("Array sorted in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


void insertionSort(int arr[], int n) {
    int i, key, j;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;


        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }


        arr[j + 1] = key;
    }
}
