/**
 * Aim: 7. Data encryption and decryption.
 */
#include <stdio.h>
#include <string.h>

void cipher(char* data, int key) {
    for (int i = 0; i < strlen(data); i++) data[i] += key;
}

int main() {
    char data[] = "SecretData";
    int key = 3;
    printf("Original: %s\n", data);
    cipher(data, key);
    printf("Encrypted: %s\n", data);
    cipher(data, -key);
    printf("Decrypted: %s\n", data);
    return 0;
}
