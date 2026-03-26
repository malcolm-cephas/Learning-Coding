

#include <stdio.h>
#include <math.h>

int main() {
    float P, rate, time, SI, CI;


    printf("Enter P,R,T: ");
    scanf("%f%f%f", &P,&rate,&time);



    SI = (P * rate * time) / 100;


    CI = P * pow(1 + (rate / 100), time) - P;


    printf("SI= %f\n", SI);
    printf("CI= %f\n", CI);

    return 0;
}
