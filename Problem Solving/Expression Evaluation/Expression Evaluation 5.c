//Use the formula s = ut+(1/2)at^2 where u and a are the initial velocity in m/sec (= 0) and acceleration in m/sec^2 (= 9.8 m/s^2).
#include <stdio.h>
#include <math.h>

int main() {
    int n,i;      // Number of floors
    float h;   // Height of each floor in meters
    float a = 9.8; // Acceleration due to gravity in m/s^2
    float s;    // Distance fallen (height of each floor)
    float time; // Time taken to reach each floor

    // Prompt the user for the number of floors and height of each floor
    printf("floors: ");
    scanf("%d", &n);
    printf("height of each floor: ");
    scanf("%f", &h);

    // Calculate time taken to reach each floor
    for (i = 1; i <= n; i++) {
        s = h * i; // Total height fallen to reach the i-th floor
        time = sqrt((2 * s) / a); // Using the formula s = (1/2)at^2, solve t
        printf("floor %d: %.2f seconds\n", i, time);
    }

    return 0; // Successful execution
}