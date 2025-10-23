// stampare il massimo di 5 numeri dati in input
#include <stdio.h>

int main(){
    int a; // elemento della sequenza
    int m; // accumulatore (massimo provvisorio)
    int i;
    scanf("%d", &m); // accumulatore inizializzato a v1
    for (i = 0; i < 4; i++){
        // a assume i valori da [v2, v3, v4, v5];
        scanf("%d", &a);
        // aggiornamento accumulatore
        // m = (a > m ? a : m);
        if (a > m)
            m = a;
    }
    // m = reduce(max2, v1, [v2, v3, v4, v5])
    printf("Massimo: %d\n", m);
}