
#include <stdio.h>

int main() {
    int num;
    void decimalToRoman(int );


    printf("Enter a number between 1 and 50: ");
    scanf("%d", &num);


    if (num < 1 || num > 50) {
        printf("Invalid input! Please enter a number between 1 and 50.\n");
    } else {

        decimalToRoman(num);
    }

    return 0;
}

void decimalToRoman(int num) {

    char *ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    char *tens[] = {"", "X", "XX", "XXX", "XL"};
    int tensPlace,onesPlace;


    tensPlace = num / 10;
    onesPlace = num % 10;


    printf("%s%s\n", tens[tensPlace], ones[onesPlace]);
}
