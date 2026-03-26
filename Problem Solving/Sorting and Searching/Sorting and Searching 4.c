
#include <stdio.h>

int main() {
    int arr[50], n, i;
    void selectionSortDescending(int [], int );


    printf("Enter number of elements: ");
    scanf("%d", &n);


    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    selectionSortDescending(arr, n);


    printf("Array sorted in descending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


void selectionSortDescending(int arr[], int n) {
    int i, j, maxIndex, temp;

    for (i = 0; i < n - 1; i++) {
        maxIndex = i;


        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }


        if (maxIndex != i) {
            temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
}
