

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, realPart, imagPart;


    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);


    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {

        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2f and root2 = %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {

        float root = -b / (2 * a);
        printf("root1 = root2 = %.2f\n", root);
    }
    else {

        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
