#include <stdio.h>

struct Student {
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    float sum = 0, avg;
    for(int i=0; i<5; i++) {
        printf("Name and Marks for S%d: ", i+1);
        scanf("%s %f", s[i].name, &s[i].marks);
        sum += s[i].marks;
    }
    avg = sum / 5.0;
    printf("\nAverage: %.2f\n", avg);
    for(int i=0; i<5; i++) {
        if(s[i].marks >= avg) printf("%s scored Above/Equal Avg: %.2f\n", s[i].name, s[i].marks);
        else printf("%s scored Below Avg: %.2f\n", s[i].name, s[i].marks);
    }
    return 0;
}
