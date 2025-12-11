#include <stdio.h>
#include <stdlib.h>

#include "listaClienti.h"

int main(int argc, char *argv[]){
    FILE *pf;
    Record r;
    Lista listaclienti;

    if (argc != 2){
        printf("Uso: %s fileRilevamenti\n", argv[0]);
        exit(1);
    }

    // apertura

    pf = fopen(argv[1], "rb");
    if (pf == NULL){
        printf("Errore apertura %s\n", argv[1]);
        exit(2);
    }

    nuovaLista(&listaclienti);  // inizializzazione accumulatore
    // accesso al file
    while (fread(&r, sizeof(Record), 1, pf) == 1){
        // dentro r c'è un record del file
        aggiorna(&listaclienti, r);
    }

    // chiusura
    fclose(pf);

    stampa(listaclienti);
    return 0;
}