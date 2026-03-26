#include <stdio.h>

// Function declarations
void inputNumbers(int arr[], int n);
void displayMenu();
int findSmallest(int arr[], int n);
int findLargest(int arr[], int n);
int findSum(int arr[], int n);
float findAverage(int arr[], int n);

int main() {
    int n, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    inputNumbers(arr, n);

    displayMenu();
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Smallest = %d\n", findSmallest(arr, n));
            break;
        case 2:
            printf("Largest = %d\n", findLargest(arr, n));
            break;
        case 3:
            printf("Sum = %d\n", findSum(arr, n));
            break;
        case 4:
            printf("Average = %.2f\n", findAverage(arr, n));
            break;
        default:
            printf("Error: Invalid choice!\n");
    }

    return 0;
}

// Function to input numbers
void inputNumbers(int arr[], int n) {
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to display menu
void displayMenu() {
    printf("\nMenu:\n");
    printf("1. Find Smallest\n");
    printf("2. Find Largest\n");
    printf("3. Find Sum\n");
    printf("4. Find Average\n");
}

// Function to find smallest number
int findSmallest(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Function to find largest number
int findLargest(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to find sum
int findSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to find average
float findAverage(int arr[], int n) {
    int sum = findSum(arr, n);
    return (float)sum / n;
}