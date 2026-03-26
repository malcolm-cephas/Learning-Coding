
#include <stdio.h>

int main() {
    char roman[10];
    int decimal = 0;
    int romanToDecimal(char );

    printf("Enter a Roman numeral (I to L): ");
    scanf("%s", roman);


    for (int i = 0; roman[i] != '\0'; i++) {

        if (roman[i] == 'I' && (roman[i+1] == 'V' || roman[i+1] == 'X')) {
            decimal -= romanToDecimal(roman[i]);
        }
        else if (roman[i] == 'X' && (roman[i+1] == 'L')) {
            decimal -= romanToDecimal(roman[i]);
        }
        else {
            decimal += romanToDecimal(roman[i]);
        }
    }

    printf("The decimal equivalent is: %d\n", decimal);

    return 0;
}

int romanToDecimal(char roman) {
    if (roman == 'I') return 1;
    else if (roman == 'V') return 5;
    else if (roman == 'X') return 10;
    else if (roman == 'L') return 50;
    return 0;
}
