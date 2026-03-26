//To compute mean, variance, Standard Deviation, sorting of n elements in a single dimension array
#include <stdio.h>
#include <math.h>

// Function prototypes
double computeMean(int arr[], int n);
double computeVariance(int arr[], int n, double mean);
double computeStandardDeviation(double variance);
void sortArray(int arr[], int n);

int main() {
    int n,arr[10],i;
    double mean,variance,stddev;

    // Read the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Read the elements of the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Compute mean, variance, and standard deviation
    mean = computeMean(arr, n);
    variance = computeVariance(arr, n, mean);
    stddev = computeStandardDeviation(variance);

    // Sort the array
    sortArray(arr, n);

    // Print the results
    printf("Mean: %.2f\n", mean);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", stddev);
    printf("Sorted Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Function to compute mean
double computeMean(int arr[], int n) {
    double sum = 0;int i;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

// Function to compute variance
double computeVariance(int arr[], int n, double mean) {
    double sum = 0; int i;
    for (i = 0; i < n; i++) {
        sum += (arr[i] - mean) * (arr[i] - mean);
    }
    return sum / n;
}

// Function to compute standard deviation
double computeStandardDeviation(double variance) {
    return sqrt(variance);
}

// Function to sort the array using bubble sort
void sortArray(int arr[], int n) {
    int i,j,temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}