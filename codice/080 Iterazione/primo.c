#include <stdio.h>

int main(){
    int n; // input
    int i; // elemento della sequenza [1, 2, ..., n]
    int conteggio_divisori; // accumulatore


    scanf("%d", &n);
    conteggio_divisori = 0; // inizializzazione accumulatore
    for (i = 1; i <= n; i++){
        // i prende i valori [1, 2, ..., n]
        if (n % i == 0){
            // i prende i valori di filter(divide n, [1, ..., n])
            // cioè dei divisori di n
            conteggio_divisori++;
        }
    }
    // conteggio_divisori = reduce(++, 0, filter(divide n, [1, ..., n])) cioè il numero di divisori di n;
    if (conteggio_divisori==2)
        printf("%d è primo\n", n);
    else
        printf("%d non è primo\n", n);
}