/**
 * Aim: 1. Character stuffing and bit stuffing methods.
 */
#include <stdio.h>
#include <string.h>

void bitStuffing(char* data) {
    char stuffed[100];
    int count = 0, j = 0;
    for (int i = 0; i < strlen(data); i++) {
        stuffed[j++] = data[i];
        if (data[i] == '1') count++;
        else count = 0;
        if (count == 5) { stuffed[j++] = '0'; count = 0; }
    }
    stuffed[j] = '\0';
    printf("Bit Stuffed: %s\n", stuffed);
}

int main() {
    char data[] = "0111111011111";
    printf("Original Data: %s\n", data);
    bitStuffing(data);
    return 0;
}
