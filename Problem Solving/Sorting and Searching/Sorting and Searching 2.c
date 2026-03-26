
#include <stdio.h>

int main() {
    int n, i, key, arr[20];
    int binarySearch(int [], int , int );

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, n, key);

    if (result == -1)
        printf("Key %d not found in the list.\n", key);
    else
        printf("Key %d found at position %d (index %d).\n", key, result + 1, result);

    return 0;
}


int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}
