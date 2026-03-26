
#include <stdio.h>
#include <string.h>

int main() {
    char str[20],finalStr[20];
    int position,n;


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    printf("Enter the position from where you want to delete: ");
    scanf("%d", &position);


    printf("Enter the number of characters to delete: ");
    scanf("%d", &n);


    int strLen = strlen(str);
    if (position < 0 || position > strLen) {
        printf("Invalid position.\n");
        return 1;
    }
    strncpy(finalStr,str,position);
    finalStr[position] = '\0';
    strcat(finalStr,str+position+n);


    printf("Modified string: %s\n", finalStr);

    return 0;
}
