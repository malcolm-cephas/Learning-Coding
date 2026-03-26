#include <stdio.h>

int main() {
    int r1, c1, r2, c2, m1[10][10], m2[10][10], res[10][10];
    printf("Enter M1 rows and cols: "); scanf("%d %d", &r1, &c1);
    printf("Enter M2 rows and cols: "); scanf("%d %d", &r2, &c2);
    if(c1 != r2) { printf("Error: Column 1 must match Row 2!\n"); return 1; }

    printf("Enter M1:\n");
    for(int i=0; i<r1; i++) for(int j=0; j<c1; j++) scanf("%d", &m1[i][j]);
    printf("Enter M2:\n");
    for(int i=0; i<r2; i++) for(int j=0; j<c2; j++) scanf("%d", &m2[i][j]);

    for(int i=0; i<r1; i++) for(int j=0; j<c2; j++) {
        res[i][j] = 0;
        for(int k=0; k<c1; k++) res[i][j] += m1[i][k] * m2[k][j];
    }

    printf("Result Matrix:\n");
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++) printf("%d ", res[i][j]);
        printf("\n");
    }
    return 0;
}
