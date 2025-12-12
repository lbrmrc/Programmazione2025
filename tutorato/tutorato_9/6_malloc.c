#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codice;
    float prezzo;
} Prodotto;

int main() {
    int k, i;
    float somma = 0.0;

    printf("Quanti prodotti? ");
    scanf("%d", &k);


    Prodotto *listino = malloc(k * sizeof(Prodotto));

    if (listino == NULL) {
        perror("Allocazione fallita");
        return 1;
    }

    // Input
    for (i = 0; i < k; i++) {
        printf("Prod %d (Codice Prezzo): ", i+1);
        scanf("%d %f", &listino[i].codice, &listino[i].prezzo);
        somma += listino[i].prezzo;
    }

    // Output e Free
    if (k > 0)
        printf("Prezzo medio: %.2f\n", somma / k);

    free(listino);
    return 0;
}
