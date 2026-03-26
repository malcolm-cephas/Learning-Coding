#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    int i, index, newValue;
    int num;

    // Check for correct arguments (program + filename + 10 integers)
    if (argc != 12) {
        printf("Usage: %s <filename> <10 integers>\n", argv[0]);
        return 1;
    }

    // Open file in binary write mode
    fp = fopen(argv[1], "wb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Convert and write integers to file
    for (i = 2; i < 12; i++) {
        num = atoi(argv[i]);
        fwrite(&num, sizeof(int), 1, fp);
    }

    fclose(fp);

    // Ask user for index and new value
    printf("Enter index (0-9): ");
    scanf("%d", &index);

    printf("Enter new value: ");
    scanf("%d", &newValue);

    // Open file in read+write binary mode
    fp = fopen(argv[1], "rb+");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Move file pointer to the given index
    fseek(fp, index * sizeof(int), SEEK_SET);

    // Write new value at that position
    fwrite(&newValue, sizeof(int), 1, fp);

    // Move back to beginning
    rewind(fp);

    // Read and print all values
    printf("\nUpdated values in file:\n");
    for (i = 0; i < 10; i++) {
        fread(&num, sizeof(int), 1, fp);
        printf("%d ", num);
    }
    printf("\n");

    fclose(fp);

    return 0;
}