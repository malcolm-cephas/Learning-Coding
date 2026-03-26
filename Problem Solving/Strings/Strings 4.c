
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    char *position;


    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to find: ");
    scanf("%c", &ch);


    position = strchr(str, ch);


    if (position) {

        printf("Position of '%c' in string: %d\n", ch, position - str);
    } else {
        printf("-1\n");
    }

    return 0;
}
