#include <stdio.h>

int valore_input(){
    int n;
    scanf("%d", &n);
    return n;
}

int main(){
    int i;
    int somma;
    int v;

    somma = 0;
    for (i = 0; i < 5; i++){
        // i prende i valori [0, 1, 2, 3, 4]
        v =  valore_input();
        somma = somma + v;
    }
    printf("La somma è %d\n", somma);
}