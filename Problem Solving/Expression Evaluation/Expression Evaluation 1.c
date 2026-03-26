
#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;


    printf("Enter two numbers: ");
    scanf("%d%d", &num1,&num2);
    printf("choose an operator (+,-,*,/,%): ");
    scanf(" %c", &operator);


    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed for modulus.\n");
            }
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}
