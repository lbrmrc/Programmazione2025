#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    printf("Inserisci la dimensione: ");
    scanf("%d", &n);

    // 1. Allocazione
    int *arr = malloc(n * sizeof(int));

    // 2. Controllo errori
    if (arr == NULL) {
        printf("Errore: Array non creato!\n");
        return 1;
    }

    // 3. Popolamento e Stampa
    for (i = 0; i < n; i++) {
        arr[i] = i * 2;
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 4. Deallocazione
    free(arr);
    return 0;
}
