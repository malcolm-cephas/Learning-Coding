
#include <stdio.h>
int main() {
    int number1,number2;
    printf("Enter two Integer: ");
    scanf("%d%d",&number1,&number2);


    printf("Original Number: %d\n",number1);
    printf("After Post-increment: %d\n",number1++);
    printf("After Pre-increment: %d\n",++number1);

	printf("number1 & number2 = %d\n", number1 & number2);
	printf("number1 | b number2 = %d\n", number1 | number2);
	printf("number1 ^ b number2 = %d\n", number1 ^ number2);
	printf("~number1 = %d\n",~number1);
	printf("number1 << 2 = %d\n",number1 << 2);
	printf("number1 >> 2 = %d\n", number1 >> 2);

    return 0;
}
