
#include <stdio.h>

int main() {
    static int number,bit[8],i,j;


    printf("Enter a number: ");
    scanf("%d", &number);


    if (number < 0 || number > 255) {
        printf("Number is out of range.\n");
        return 1;
    }

   for(i=0;number!=0;i++)
   {
       bit[i]=number%2;
       number=number/2;
   }
   printf("Binary equivalent: ");
   for(j=i-1;j>=0;j--)
    printf("%d",bit[j]);
	printf("\n");
    return 0;
}
