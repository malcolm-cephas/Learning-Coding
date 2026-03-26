
#include <stdio.h>

int main() {
    int n, i, key, arr[20];
    int linearSearch(int [], int , int );
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    int result = linearSearch(arr, n, key);

    if (result == -1)
        printf("Key %d not found in the list.\n", key);
    else
        printf("Key %d found at position %d (index %d).\n", key, result + 1, result);

    return 0;
}


int linearSearch(int arr[], int n, int key)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
