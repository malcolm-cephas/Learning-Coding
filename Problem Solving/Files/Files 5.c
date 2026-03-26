#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    int i, index, newValue;
    int num;


    if (argc != 12) {
        printf("Usage: %s <filename> <10 integers>\n", argv[0]);
        return 1;
    }


    fp = fopen(argv[1], "wb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }


    for (i = 2; i < 12; i++) {
        num = atoi(argv[i]);
        fwrite(&num, sizeof(int), 1, fp);
    }

    fclose(fp);


    printf("Enter index (0-9): ");
    scanf("%d", &index);

    printf("Enter new value: ");
    scanf("%d", &newValue);


    fp = fopen(argv[1], "rb+");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }


    fseek(fp, index * sizeof(int), SEEK_SET);


    fwrite(&newValue, sizeof(int), 1, fp);


    rewind(fp);


    printf("\nUpdated values in file:\n");
    for (i = 0; i < 10; i++) {
        fread(&num, sizeof(int), 1, fp);
        printf("%d ", num);
    }
    printf("\n");

    fclose(fp);

    return 0;
}
