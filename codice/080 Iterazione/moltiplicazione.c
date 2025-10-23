#include <stdio.h>

int main(){
    int m,n;
    int i;
    int prodotto;
    scanf("%d%d", &m, &n);
    prodotto = 0;
    for (i = 0; i < n; i++){
        // i prende gli n valori [0, 1, ..., n - 1]
        // m prende gli n valori [m, m, ..., m]
        prodotto = prodotto + m;
    }
    // prodotto è la somma di n valori ognumo pari a m cioè m * n
    printf("Il prodotto è %d\n", prodotto);
}