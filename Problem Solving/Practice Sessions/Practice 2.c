
#include <stdio.h>

int main() {
    float floatNum;
    int intNum;
    printf("Enter a floating-point number: ");
    scanf("%f", &floatNum);

    printf("Enter an integer: ");
    scanf("%d", &intNum);



    int convertedInt = floatNum;

    printf("Auto-converted float %.2f to int: %d\n", floatNum, convertedInt);



    float castedFloat = (float)intNum;

    printf("Manually casted int %d to float: %.2f\n", intNum, castedFloat);

    return 0;
}
