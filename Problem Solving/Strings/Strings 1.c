
#include <stdio.h>
#include <string.h>

int main() {
    char mainStr[50], subStr[50],finalStr[100];
    int position;


    printf("Enter the main string: ");
     fgets(mainStr, sizeof(mainStr), stdin);


    printf("Enter the substring: ");
    fgets(subStr, sizeof(subStr), stdin);
    subStr[strcspn(subStr, "\n")] = '\0';


    printf("Enter the position to insert the substring: ");
    scanf("%d", &position);


    int mainLen = strlen(mainStr);
    if (position < 0 || position > mainLen) {
        printf("Invalid position.\n");
        return 1;
    }

    strncpy(finalStr,mainStr,position);
    strcat(finalStr,subStr);
    strcat(finalStr,mainStr+position);


    printf("Modified string: %s\n", finalStr);

    return 0;
}
