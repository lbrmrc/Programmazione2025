#include "funzioni.h"

void acquisisci(int array[], int dim){
    printf("Inserisci gli elementi dell'array:\n");
    for(int i=0; i < dim; i++){
        printf("\t-Inserisci %d-esimo numero: ",i+1);
        scanf("%d",&array[i]);
    }
}

void stampa_array(int array[], int dim){
    printf("Numeri nell'array: ");
    for(int i=0; i< dim; i++)
        printf("%d ",array[i]);
    printf("\n");
}

float media(int array[], int dim){
    float somma = 0;
    for(int i = 0; i< dim; i++)
        somma += array[i];
    return somma/dim;
}

void stampa_minori(float x, int array[], int dim){
    printf("Elementi minori di %f: ",x);
    for(int i = 0; i < dim; i++){
        if(array[i] <= x)
            printf("%d ",array[i]);
    }
    printf("\n");
}

void stampa_maggiori(float x, int array[], int dim){
    printf("Elementi maggiori di %f: ",x);
    for(int i = 0; i < dim; i++){
        if(array[i] > x)
            printf("%d ",array[i]);
    }
    printf("\n");
}

void massimo(int array[], int dim, int* max){
    int massimo = array[0];
    for(int i = 1; i < dim ; i++){
        if(array[i] > massimo)
            massimo = array[i];
    }
    *max = massimo;
}