
#include <stdio.h>
#include <math.h>


double computeMean(int arr[], int n);
double computeVariance(int arr[], int n, double mean);
double computeStandardDeviation(double variance);
void sortArray(int arr[], int n);

int main() {
    int n,arr[10],i;
    double mean,variance,stddev;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);


    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    mean = computeMean(arr, n);
    variance = computeVariance(arr, n, mean);
    stddev = computeStandardDeviation(variance);


    sortArray(arr, n);


    printf("Mean: %.2f\n", mean);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", stddev);
    printf("Sorted Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


double computeMean(int arr[], int n) {
    double sum = 0;int i;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}


double computeVariance(int arr[], int n, double mean) {
    double sum = 0; int i;
    for (i = 0; i < n; i++) {
        sum += (arr[i] - mean) * (arr[i] - mean);
    }
    return sum / n;
}


double computeStandardDeviation(double variance) {
    return sqrt(variance);
}


void sortArray(int arr[], int n) {
    int i,j,temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
