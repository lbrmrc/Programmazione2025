#include<stdio.h>

main()
{

    int i, numeri[10], elemento, contatore;

    for (i = 0; i < 10; i++)
    {
        printf("Inserisci il %d^ elemento: ", i + 1);
        scanf("%d", &numeri[i]);
    }

    printf("Inserisci elemento da cercare:\n");
    scanf("%d", &elemento);

    contatore = 0;

    for (i = 0; i < 10; i++) {
        if (elemento == numeri[i]) {
            printf("%d ", i);
            contatore++;
        }
    }

    if (contatore) {
        if (contatore > 1) {
            printf(" <-- indici in cui l'elemento %d compare\n", elemento);
            printf("L'elemento %d compare %d volte\n", elemento, contatore);
        }
        else {
            printf(" <-- indice in cui l'elemento %d compare\n", elemento);
            printf("L'elemento %d compare %d volta\n", elemento, contatore);
        }
    }
    else printf("Elemento %d non presente\n", elemento);

}
