
#include <stdio.h>
#include <math.h>

int main() {
    int n,i;
    float h;
    float a = 9.8;
    float s;
    float time;


    printf("floors: ");
    scanf("%d", &n);
    printf("height of each floor: ");
    scanf("%f", &h);


    for (i = 1; i <= n; i++) {
        s = h * i;
        time = sqrt((2 * s) / a);
        printf("floor %d: %.2f seconds\n", i, time);
    }

    return 0;
}
