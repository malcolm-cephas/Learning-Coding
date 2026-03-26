#include <stdio.h>
#include <math.h>

// 1. Division Method
int divisionHash(int key, int tableSize) {
    return key % tableSize;
}

// 2. Multiplication Method
int multiplicationHash(int key, int tableSize) {
    float A = 0.618033; // constant (fractional part of golden ratio)
    float val = key * A;
    float frac = val - (int)val;
    return (int)(tableSize * frac);
}

// 3. Mid-Square Method
int midSquareHash(int key, int tableSize) {
    int square = key * key;

    // Extract middle digits
    int mid = (square / 10) % 100;  // simple extraction
    return mid % tableSize;
}

// 4. Folding Method
int foldingHash(int key, int tableSize) {
    int sum = 0;

    while (key > 0) {
        sum += key % 100; // take 2 digits at a time
        key /= 100;
    }

    return sum % tableSize;
}

int main() {
    int key, tableSize;

    printf("Enter key: ");
    scanf("%d", &key);

    printf("Enter hash table size: ");
    scanf("%d", &tableSize);

    printf("\nHash Values:\n");
    printf("Division Method: %d\n", divisionHash(key, tableSize));
    printf("Multiplication Method: %d\n", multiplicationHash(key, tableSize));
    printf("Mid-square Method: %d\n", midSquareHash(key, tableSize));
    printf("Folding Method: %d\n", foldingHash(key, tableSize));

    return 0;
}