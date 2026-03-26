#include <stdio.h>
#include <math.h>

int main() {
    int n; float arr[100], sum = 0, mean, sd = 0;
    float *ptr = arr;
    printf("Enter N: "); scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%f", (ptr + i));
        sum += *(ptr + i);
    }
    mean = sum / n;
    for(int i=0; i<n; i++) sd += pow(*(ptr + i) - mean, 2);
    sd = sqrt(sd / n);
    printf("Sum: %.2f, Mean: %.2f, SD: %.2f\n", sum, mean, sd);
    return 0;
}
