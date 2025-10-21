#include <stdio.h>

void divisione(int dividendo, int divisore, int *pq, int *pr){
    *pq = dividendo / divisore;
    *pr = dividendo % divisore;
}

int main(){
    int a = 22, b = 0;
    int q, r; // parametri di output
    divisione(a, b, &q, &r);
    // dentro q e r ci sono quoziente e resto
    printf("%d %d\n", q, r); // stampa 3 1
    return 0;
}