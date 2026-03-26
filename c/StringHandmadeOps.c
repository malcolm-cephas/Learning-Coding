#include <stdio.h>

int strLen(char* s) { int i=0; while(s[i]) i++; return i; }
void strCat(char* d, char* s) {
    int i = strLen(d), j = 0;
    while(s[j]) d[i++] = s[j++];
    d[i] = '\0';
}

int main() {
    char s1[100] = "Hello ", s2[] = "World";
    printf("Length of s2: %d\n", strLen(s2));
    strCat(s1, s2);
    printf("Concat s1+s2: %s\n", s1);
    return 0;
}
