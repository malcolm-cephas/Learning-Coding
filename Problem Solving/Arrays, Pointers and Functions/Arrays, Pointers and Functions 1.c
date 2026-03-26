
#include <stdio.h>
#include <math.h>

int main() {
    int n,arr[10],min,max,sum;
    float average;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);


    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    min = arr[0];
    max = arr[0];
    sum = arr[0];


    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
        sum += arr[i];
    }


    average = (float)sum / n;


    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Average: %.2f\n", average);

    return 0;
}
