//converts a number ranging from 1 to 50 to Roman equivalent.
#include <stdio.h>

int main() {
    int num;
    void decimalToRoman(int );

    // Prompt the user to enter a number between 1 and 50
    printf("Enter a number between 1 and 50: ");
    scanf("%d", &num);

    // Check if the input is within the valid range
    if (num < 1 || num > 50) {
        printf("Invalid input! Please enter a number between 1 and 50.\n");
    } else {
        // Convert the number to its Roman numeral equivalent
        decimalToRoman(num);
    }

    return 0;
}

void decimalToRoman(int num) {
    // Arrays to store Roman numeral equivalents of decimal numbers
    char *ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    char *tens[] = {"", "X", "XX", "XXX", "XL"};
    int tensPlace,onesPlace;
    
    // Get the tens and ones place of the number
    tensPlace = num / 10;   // Get the tens place
    onesPlace = num % 10;   // Get the ones place

    // Print the Roman numeral equivalent
    printf("%s%s\n", tens[tensPlace], ones[onesPlace]);
}