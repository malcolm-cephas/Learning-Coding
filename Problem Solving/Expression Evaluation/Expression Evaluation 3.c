
#include <stdio.h>

int main() {
    int num,sum = 0,reversed,temp,digit;

    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        digit=temp%10;
        sum += digit;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
    printf("Sum of individual digits: %d\n", sum);

    if (num == reversed) {
         printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
