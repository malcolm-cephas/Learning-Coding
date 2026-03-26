//to find the roots of a Quadratic equation

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, realPart, imagPart;

    // Input coefficients a, b, and c
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two real roots
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2f and root2 = %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        // One real root (both roots are the same)
        float root = -b / (2 * a);
        printf("root1 = root2 = %.2f\n", root);
    }
    else {
        // Complex roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}