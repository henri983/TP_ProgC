#include <stdio.h>

int main(void) {
    int compteur = 5;

    printf("Triangle avec boucle for :\n");
    for (int i = 1; i <= compteur; ++i) {
        printf("*");
        if (i == 1) {
            printf("\n");
            continue;
        }

        if (i == compteur) {
            for (int j = 1; j < i; ++j) {
                printf(" *");
            }
            printf("\n");
            continue;
        }

        for (int j = 2; j <= i; ++j) {
            if (j == i) {
                printf(" *");
            } else {
                printf(" #");
            }
        }
        printf("\n");
    }

    printf("\nTriangle avec boucle while :\n");
    int i = 1;
    while (i <= compteur) {
        printf("*");
        if (i == 1) {
            printf("\n");
            ++i;
            continue;
        }

        if (i == compteur) {
            for (int j = 1; j < i; ++j) {
                printf(" *");
            }
            printf("\n");
            ++i;
            continue;
        }

        for (int j = 2; j <= i; ++j) {
            if (j == i) {
                printf(" *");
            } else {
                printf(" #");
            }
        }
        printf("\n");
        ++i;
    }

    return 0;
}
