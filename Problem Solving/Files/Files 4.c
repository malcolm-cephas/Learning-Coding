#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    char ch;
    int count = 0;


    if (argc != 3) {
        printf("Usage: %s <filename> <character>\n", argv[0]);
        return 1;
    }


    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", argv[1]);
        return 1;
    }


    char target = argv[2][0];


    while ((ch = fgetc(fp)) != EOF) {
        if (ch == target) {
            count++;
        }
    }

    fclose(fp);


    printf("Character '%c' occurs %d times in file %s\n", target, count, argv[1]);

    return 0;
}
