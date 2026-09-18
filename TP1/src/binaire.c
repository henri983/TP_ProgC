#include <stdio.h>

static void afficher_binaire(int nombre) {
    if (nombre == 0) {
        printf("0");
        return;
    }

    int bits[32];
    int taille = 0;

    while (nombre > 0) {
        bits[taille++] = nombre % 2;
        nombre /= 2;
    }

    for (int i = taille - 1; i >= 0; --i) {
        printf("%d", bits[i]);
    }
}

int main(void) {
    int valeurs[] = {0, 4096, 65536, 65535, 1024};
    int n = sizeof(valeurs) / sizeof(valeurs[0]);

    for (int i = 0; i < n; ++i) {
        printf("%d -> ", valeurs[i]);
        afficher_binaire(valeurs[i]);
        printf("\n");
    }

    return 0;
}
