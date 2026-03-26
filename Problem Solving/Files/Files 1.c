
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *src, *dest;
    char ch;


    src = fopen("file1.txt", "r");
    if (src == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }


    dest = fopen("file2.txt", "w");
    if (dest == NULL) {
        printf("Error: Cannot create destination file.\n");
        fclose(src);
        return 1;
    }


    while ((ch = fgetc(src)) != EOF) {
        fputc(toupper(ch), dest);
    }

    printf("File copied successfully with uppercase conversion.\n");


    fclose(src);
    fclose(dest);

    return 0;
}
