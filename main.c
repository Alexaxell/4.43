#include <stdio.h>

int main(void) {
    int l, errore = 0, tronco, triangolo;
    do {
        printf("inserisci la misura del lato: ");
        scanf("%d", &l);
        if (l % 2 == 0) {
            printf("impossibile stampare il triangolo\n");
            errore = 1;
        }
        else {
            errore = 0;
        }
    } while (errore == 1);
    triangolo = (l + 1) / 2;
    tronco = l - triangolo;
    for (int i = 1; i <= triangolo; i++) {
        for (int j = 1; j <= triangolo - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < tronco; i++) {
        for (int j = 1; j < triangolo; j++) {
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}
