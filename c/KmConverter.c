#include <stdio.h>

int main() {
    float km;
    printf("Enter distance in KM: ");
    scanf("%f", &km);
    printf("Meters: %.2f m\n", km * 1000);
    printf("Centimeters: %.2f cm\n", km * 100000);
    return 0;
}
