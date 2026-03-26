//to display the contents of a file to standard output device.
#include <stdio.h>

int main() {
    FILE *fp;          // Declare a file pointer
    char ch;             // To store each character read from the file

    // Open the file in read mode
    fp = fopen("demo.txt", "r");

    // Check if the file was opened successfully
    if (fp == NULL) {
        printf("Error: Could not open the file.\n");
        return 1; // Exit the program with an error code
    }

    // Read and display characters from the file until the end
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);  // Output the character to the standard output
    }

    // Close the file
    fclose(fp);

    return 0;  
}