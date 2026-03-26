//converts one given data type to another using auto conversion and casting
#include <stdio.h>

int main() {
    float floatNum;
    int intNum;
    printf("Enter a floating-point number: ");
    scanf("%f", &floatNum);

    printf("Enter an integer: ");
    scanf("%d", &intNum);

    // Auto conversion (implicit)
    // Convert float to int (auto conversion may happen implicitly)
    int convertedInt = floatNum;  // Implicit conversion, decimal part will be truncated
    
    printf("Auto-converted float %.2f to int: %d\n", floatNum, convertedInt);

    // Manual casting (explicit)
    // Cast int to float
    float castedFloat = (float)intNum;  // Explicit casting

    printf("Manually casted int %d to float: %.2f\n", intNum, castedFloat);

    return 0;
}