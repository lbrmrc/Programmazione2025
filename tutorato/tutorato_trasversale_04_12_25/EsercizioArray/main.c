#include <stdio.h>

#include "funzioni.h"

int main(){
    int memoria[DIM];
    float media_memoria;
    char operazione;
    int max_memoria;

    acquisisci(memoria, DIM);
    stampa_array(memoria,DIM);
    media_memoria = media(memoria,DIM);
    printf("La media dell'array e: %f \n",media_memoria);

    printf("\nSeleziona l'operazione desiderata: \n");
    printf("\t- '<' stampa minori uguali alla media\n");
    printf("\t- '>' stampa maggiori uguali alla media\n");
    printf("Selezione =");
    scanf(" %c", &operazione);

    if(operazione == '<')
        stampa_minori(media_memoria, memoria,DIM);
    else
        stampa_maggiori(media_memoria, memoria,DIM);
    
    massimo(memoria,DIM,&max_memoria);

    printf("\nIl massimo dell'array e: %d\n",max_memoria);
    
}