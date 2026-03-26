
#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    int i,j;
    int flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    j=strlen(str)-1;


    for(i=0;i<=j;i++,j--)
    {
        if(str[i]!=str[j])
        {
            flag=1;
            break;
        }
    }
     if (flag) {
        printf("%s is not a palindrome\n", str);
    } else {
        printf("%s is a palindrome\n", str);
    }
}
