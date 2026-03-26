#include <stdio.h>

int main() {
    float m, g=9.8, h, v, E;
    printf("Enter mass (m), height (h), and velocity (v): ");
    scanf("%f %f %f", &m, &h, &v);
    E = m * g * h + 0.5 * m * v * v;
    printf("Mechanical Energy: %.2f J\n", E);
    return 0;
}
