#include <stdio.h>

int main(void) {
    const double pi = 3.141592653589793;
    const double rayon = 6.0;

    printf("Aire du cercle = %.2f\n", pi * rayon * rayon);
    printf("Perimetre du cercle = %.2f\n", 2.0 * pi * rayon);

    return 0;
}

